// A Device is a something that can perform computations as part of a
// model.  Devices can be local (runs computation on this machine), or
// remote (contacts a device local to another machine using an RPC to
// do the work).  Devices are registered in a DeviceSet, which is also
// responsible for the Device <-> id mapping.
//
// Device names
// * Every Device should have a unique name with the format:
//     /job:___/replica:___/task:___/(gpu|cpu):___
//   An example name would be "/job:train/replica:0/task:3/gpu:2".
// * Task numbers are within the specified replica, so there are as
//   many "task zeros" as replicas.

#ifndef TENSORFLOW_COMMON_RUNTIME_DEVICE_H_
#define TENSORFLOW_COMMON_RUNTIME_DEVICE_H_

#include <memory>
#include <string>
#include <vector>

#include "tensorflow/core/framework/allocator.h"
#include "tensorflow/core/framework/control_flow.h"
#include "tensorflow/core/framework/device_attributes.pb.h"
#include "tensorflow/core/framework/device_base.h"
#include "tensorflow/core/framework/graph.pb.h"
#include "tensorflow/core/framework/op_kernel.h"
#include "tensorflow/core/framework/op_segment.h"
#include "tensorflow/core/framework/resource_mgr.h"
#include "tensorflow/core/framework/types.h"
#include "tensorflow/core/graph/graph.h"
#include "tensorflow/core/graph/types.h"
#include "tensorflow/core/platform/port.h"
#include "tensorflow/core/public/status.h"
#include "tensorflow/core/util/device_name_utils.h"

namespace tensorflow {

class Device : public DeviceBase {
 public:
  Device(Env* env, const DeviceAttributes& device_attributes,
         Allocator* device_allocator);
  ~Device() override;

  // Full name of this device (see top comment).
  const string& name() const { return device_attributes_.name(); }

  // Parsed name of this device
  const DeviceNameUtils::ParsedName parsed_name() const { return parsed_name_; }

  // Describes what kind of device this is.  This is intended to be
  // human-readable and not computer-parsed, except that two devices
  // with the same device_type() are expected to perform similarly
  // (both from a computation and communication perspective).
  const string& device_type() const { return device_attributes_.device_type(); }

  // Returns an aggregation of device attributes.
  const DeviceAttributes& attributes() const override {
    return device_attributes_;
  }

  // Performs the actual compute function.
  //
  // Subclasses may override this function if they wish to perform
  // some initialization before each compute.
  virtual void Compute(OpKernel* op_kernel, OpKernelContext* context) {
    op_kernel->Compute(context);
  }

  // Asynchronous kernel's compute.
  virtual void ComputeAsync(AsyncOpKernel* op_kernel, OpKernelContext* context,
                            AsyncOpKernel::DoneCallback done) {
    op_kernel->ComputeAsync(context, done);
  }

  // Blocks until all operations queued on the device at the time of
  // the call have completed.  Returns any error pending on the device
  // at completion.
  virtual Status Sync() = 0;

  // Fill in the context map for the graph. Default behavior is to do
  // nothing.
  //
  // The caller takes ownership over the DeviceContext objects given
  // by the device.
  virtual Status FillContextMap(const Graph* graph,
                                DeviceContextMap* device_context_map) {
    return Status::OK();
  }

  // Returns the op segment of this device.  The caller can reuse op
  // kernels registered for the same session running on this device.
  OpSegment* op_segment() { return &op_seg_; }

  // Returns the resource manager associated w/ this device.
  ResourceMgr* resource_manager() { return rmgr_; }

  // Summarizes the status of this Device, for debugging.
  string DebugString() const { return device_attributes_.DebugString(); }

  // Assembles the parameter components into a complete DeviceAttributes value.
  static DeviceAttributes BuildDeviceAttributes(
      const string& name, DeviceType device, Bytes memory_limit,
      BusAdjacency bus_adjacency, const string& physical_device_desc);

  static DeviceAttributes BuildDeviceAttributes(const string& name,
                                                DeviceType device,
                                                Bytes memory_limit,
                                                BusAdjacency bus_adjacency) {
    // Pass in an empty string as physical device name.
    return BuildDeviceAttributes(name, device, memory_limit, bus_adjacency, "");
  }

 private:
  const DeviceAttributes device_attributes_;
  DeviceNameUtils::ParsedName parsed_name_;

  // op_seg_ maps session handle and op name to OpKernel objects.
  OpSegment op_seg_;

  // Resources associated w/ this device. E.g., shared variables, etc.
  ResourceMgr* rmgr_ = nullptr;

  TF_DISALLOW_COPY_AND_ASSIGN(Device);
};

}  // namespace tensorflow

#endif  // TENSORFLOW_COMMON_RUNTIME_DEVICE_H_
