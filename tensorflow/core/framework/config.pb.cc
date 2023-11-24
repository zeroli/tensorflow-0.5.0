// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/config.proto

#include "tensorflow/core/framework/config.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace tensorflow {
constexpr GPUOptions::GPUOptions(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : per_process_gpu_memory_fraction_(0){}
struct GPUOptionsDefaultTypeInternal {
  constexpr GPUOptionsDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~GPUOptionsDefaultTypeInternal() {}
  union {
    GPUOptions _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT GPUOptionsDefaultTypeInternal _GPUOptions_default_instance_;
constexpr ConfigProto_DeviceCountEntry_DoNotUse::ConfigProto_DeviceCountEntry_DoNotUse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct ConfigProto_DeviceCountEntry_DoNotUseDefaultTypeInternal {
  constexpr ConfigProto_DeviceCountEntry_DoNotUseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ConfigProto_DeviceCountEntry_DoNotUseDefaultTypeInternal() {}
  union {
    ConfigProto_DeviceCountEntry_DoNotUse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ConfigProto_DeviceCountEntry_DoNotUseDefaultTypeInternal _ConfigProto_DeviceCountEntry_DoNotUse_default_instance_;
constexpr ConfigProto::ConfigProto(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : device_count_(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{})
  , device_filters_()
  , gpu_options_(nullptr)
  , intra_op_parallelism_threads_(0)
  , placement_period_(0)
  , inter_op_parallelism_threads_(0)
  , allow_soft_placement_(false)
  , log_device_placement_(false){}
struct ConfigProtoDefaultTypeInternal {
  constexpr ConfigProtoDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ConfigProtoDefaultTypeInternal() {}
  union {
    ConfigProto _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ConfigProtoDefaultTypeInternal _ConfigProto_default_instance_;
}  // namespace tensorflow
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_tensorflow_2fcore_2fframework_2fconfig_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_tensorflow_2fcore_2fframework_2fconfig_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_tensorflow_2fcore_2fframework_2fconfig_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_tensorflow_2fcore_2fframework_2fconfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::GPUOptions, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::GPUOptions, per_process_gpu_memory_fraction_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ConfigProto_DeviceCountEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ConfigProto_DeviceCountEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::ConfigProto_DeviceCountEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ConfigProto_DeviceCountEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::ConfigProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::ConfigProto, device_count_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ConfigProto, intra_op_parallelism_threads_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ConfigProto, inter_op_parallelism_threads_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ConfigProto, placement_period_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ConfigProto, device_filters_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ConfigProto, gpu_options_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ConfigProto, allow_soft_placement_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ConfigProto, log_device_placement_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::GPUOptions)},
  { 6, 13, sizeof(::tensorflow::ConfigProto_DeviceCountEntry_DoNotUse)},
  { 15, -1, sizeof(::tensorflow::ConfigProto)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::_GPUOptions_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::_ConfigProto_DeviceCountEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::_ConfigProto_default_instance_),
};

const char descriptor_table_protodef_tensorflow_2fcore_2fframework_2fconfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n&tensorflow/core/framework/config.proto"
  "\022\ntensorflow\"5\n\nGPUOptions\022\'\n\037per_proces"
  "s_gpu_memory_fraction\030\001 \001(\001\"\350\002\n\013ConfigPr"
  "oto\022>\n\014device_count\030\001 \003(\0132(.tensorflow.C"
  "onfigProto.DeviceCountEntry\022$\n\034intra_op_"
  "parallelism_threads\030\002 \001(\005\022$\n\034inter_op_pa"
  "rallelism_threads\030\005 \001(\005\022\030\n\020placement_per"
  "iod\030\003 \001(\005\022\026\n\016device_filters\030\004 \003(\t\022+\n\013gpu"
  "_options\030\006 \001(\0132\026.tensorflow.GPUOptions\022\034"
  "\n\024allow_soft_placement\030\007 \001(\010\022\034\n\024log_devi"
  "ce_placement\030\010 \001(\010\0322\n\020DeviceCountEntry\022\013"
  "\n\003key\030\001 \001(\t\022\r\n\005value\030\002 \001(\005:\0028\001b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_tensorflow_2fcore_2fframework_2fconfig_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_2fcore_2fframework_2fconfig_2eproto = {
  false, false, 478, descriptor_table_protodef_tensorflow_2fcore_2fframework_2fconfig_2eproto, "tensorflow/core/framework/config.proto", 
  &descriptor_table_tensorflow_2fcore_2fframework_2fconfig_2eproto_once, nullptr, 0, 3,
  schemas, file_default_instances, TableStruct_tensorflow_2fcore_2fframework_2fconfig_2eproto::offsets,
  file_level_metadata_tensorflow_2fcore_2fframework_2fconfig_2eproto, file_level_enum_descriptors_tensorflow_2fcore_2fframework_2fconfig_2eproto, file_level_service_descriptors_tensorflow_2fcore_2fframework_2fconfig_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_tensorflow_2fcore_2fframework_2fconfig_2eproto_getter() {
  return &descriptor_table_tensorflow_2fcore_2fframework_2fconfig_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_tensorflow_2fcore_2fframework_2fconfig_2eproto(&descriptor_table_tensorflow_2fcore_2fframework_2fconfig_2eproto);
namespace tensorflow {

// ===================================================================

class GPUOptions::_Internal {
 public:
};

GPUOptions::GPUOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.GPUOptions)
}
GPUOptions::GPUOptions(const GPUOptions& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  per_process_gpu_memory_fraction_ = from.per_process_gpu_memory_fraction_;
  // @@protoc_insertion_point(copy_constructor:tensorflow.GPUOptions)
}

void GPUOptions::SharedCtor() {
per_process_gpu_memory_fraction_ = 0;
}

GPUOptions::~GPUOptions() {
  // @@protoc_insertion_point(destructor:tensorflow.GPUOptions)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void GPUOptions::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void GPUOptions::ArenaDtor(void* object) {
  GPUOptions* _this = reinterpret_cast< GPUOptions* >(object);
  (void)_this;
}
void GPUOptions::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GPUOptions::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void GPUOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.GPUOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  per_process_gpu_memory_fraction_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GPUOptions::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // double per_process_gpu_memory_fraction = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          per_process_gpu_memory_fraction_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* GPUOptions::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.GPUOptions)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double per_process_gpu_memory_fraction = 1;
  if (!(this->per_process_gpu_memory_fraction() <= 0 && this->per_process_gpu_memory_fraction() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_per_process_gpu_memory_fraction(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.GPUOptions)
  return target;
}

size_t GPUOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.GPUOptions)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // double per_process_gpu_memory_fraction = 1;
  if (!(this->per_process_gpu_memory_fraction() <= 0 && this->per_process_gpu_memory_fraction() >= 0)) {
    total_size += 1 + 8;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GPUOptions::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.GPUOptions)
  GOOGLE_DCHECK_NE(&from, this);
  const GPUOptions* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GPUOptions>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.GPUOptions)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.GPUOptions)
    MergeFrom(*source);
  }
}

void GPUOptions::MergeFrom(const GPUOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.GPUOptions)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!(from.per_process_gpu_memory_fraction() <= 0 && from.per_process_gpu_memory_fraction() >= 0)) {
    _internal_set_per_process_gpu_memory_fraction(from._internal_per_process_gpu_memory_fraction());
  }
}

void GPUOptions::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.GPUOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GPUOptions::CopyFrom(const GPUOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.GPUOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GPUOptions::IsInitialized() const {
  return true;
}

void GPUOptions::InternalSwap(GPUOptions* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(per_process_gpu_memory_fraction_, other->per_process_gpu_memory_fraction_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GPUOptions::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2fframework_2fconfig_2eproto_getter, &descriptor_table_tensorflow_2fcore_2fframework_2fconfig_2eproto_once,
      file_level_metadata_tensorflow_2fcore_2fframework_2fconfig_2eproto[0]);
}

// ===================================================================

ConfigProto_DeviceCountEntry_DoNotUse::ConfigProto_DeviceCountEntry_DoNotUse() {}
ConfigProto_DeviceCountEntry_DoNotUse::ConfigProto_DeviceCountEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void ConfigProto_DeviceCountEntry_DoNotUse::MergeFrom(const ConfigProto_DeviceCountEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata ConfigProto_DeviceCountEntry_DoNotUse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2fframework_2fconfig_2eproto_getter, &descriptor_table_tensorflow_2fcore_2fframework_2fconfig_2eproto_once,
      file_level_metadata_tensorflow_2fcore_2fframework_2fconfig_2eproto[1]);
}
void ConfigProto_DeviceCountEntry_DoNotUse::MergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::Message& other) {
  ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom(other);
}


// ===================================================================

class ConfigProto::_Internal {
 public:
  static const ::tensorflow::GPUOptions& gpu_options(const ConfigProto* msg);
};

const ::tensorflow::GPUOptions&
ConfigProto::_Internal::gpu_options(const ConfigProto* msg) {
  return *msg->gpu_options_;
}
ConfigProto::ConfigProto(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  device_count_(arena),
  device_filters_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.ConfigProto)
}
ConfigProto::ConfigProto(const ConfigProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      device_filters_(from.device_filters_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  device_count_.MergeFrom(from.device_count_);
  if (from._internal_has_gpu_options()) {
    gpu_options_ = new ::tensorflow::GPUOptions(*from.gpu_options_);
  } else {
    gpu_options_ = nullptr;
  }
  ::memcpy(&intra_op_parallelism_threads_, &from.intra_op_parallelism_threads_,
    static_cast<size_t>(reinterpret_cast<char*>(&log_device_placement_) -
    reinterpret_cast<char*>(&intra_op_parallelism_threads_)) + sizeof(log_device_placement_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.ConfigProto)
}

void ConfigProto::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&gpu_options_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&log_device_placement_) -
    reinterpret_cast<char*>(&gpu_options_)) + sizeof(log_device_placement_));
}

ConfigProto::~ConfigProto() {
  // @@protoc_insertion_point(destructor:tensorflow.ConfigProto)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ConfigProto::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete gpu_options_;
}

void ConfigProto::ArenaDtor(void* object) {
  ConfigProto* _this = reinterpret_cast< ConfigProto* >(object);
  (void)_this;
}
void ConfigProto::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ConfigProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ConfigProto::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.ConfigProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  device_count_.Clear();
  device_filters_.Clear();
  if (GetArena() == nullptr && gpu_options_ != nullptr) {
    delete gpu_options_;
  }
  gpu_options_ = nullptr;
  ::memset(&intra_op_parallelism_threads_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&log_device_placement_) -
      reinterpret_cast<char*>(&intra_op_parallelism_threads_)) + sizeof(log_device_placement_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ConfigProto::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // map<string, int32> device_count = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&device_count_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // int32 intra_op_parallelism_threads = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          intra_op_parallelism_threads_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 placement_period = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          placement_period_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string device_filters = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_device_filters();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "tensorflow.ConfigProto.device_filters"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      // int32 inter_op_parallelism_threads = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          inter_op_parallelism_threads_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .tensorflow.GPUOptions gpu_options = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_gpu_options(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool allow_soft_placement = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          allow_soft_placement_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool log_device_placement = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          log_device_placement_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ConfigProto::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.ConfigProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<string, int32> device_count = 1;
  if (!this->_internal_device_count().empty()) {
    typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::PROTOBUF_NAMESPACE_ID::int32 >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::PROTOBUF_NAMESPACE_ID::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
          p->first.data(), static_cast<int>(p->first.length()),
          ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
          "tensorflow.ConfigProto.DeviceCountEntry.key");
      }
    };

    if (stream->IsSerializationDeterministic() &&
        this->_internal_device_count().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->_internal_device_count().size()]);
      typedef ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::PROTOBUF_NAMESPACE_ID::int32 >::size_type size_type;
      size_type n = 0;
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, ::PROTOBUF_NAMESPACE_ID::int32 >::const_iterator
          it = this->_internal_device_count().begin();
          it != this->_internal_device_count().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      for (size_type i = 0; i < n; i++) {
        target = ConfigProto_DeviceCountEntry_DoNotUse::Funcs::InternalSerialize(1, items[static_cast<ptrdiff_t>(i)]->first, items[static_cast<ptrdiff_t>(i)]->second, target, stream);
        Utf8Check::Check(&(*items[static_cast<ptrdiff_t>(i)]));
      }
    } else {
      for (::PROTOBUF_NAMESPACE_ID::Map< std::string, ::PROTOBUF_NAMESPACE_ID::int32 >::const_iterator
          it = this->_internal_device_count().begin();
          it != this->_internal_device_count().end(); ++it) {
        target = ConfigProto_DeviceCountEntry_DoNotUse::Funcs::InternalSerialize(1, it->first, it->second, target, stream);
        Utf8Check::Check(&(*it));
      }
    }
  }

  // int32 intra_op_parallelism_threads = 2;
  if (this->intra_op_parallelism_threads() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_intra_op_parallelism_threads(), target);
  }

  // int32 placement_period = 3;
  if (this->placement_period() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_placement_period(), target);
  }

  // repeated string device_filters = 4;
  for (int i = 0, n = this->_internal_device_filters_size(); i < n; i++) {
    const auto& s = this->_internal_device_filters(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ConfigProto.device_filters");
    target = stream->WriteString(4, s, target);
  }

  // int32 inter_op_parallelism_threads = 5;
  if (this->inter_op_parallelism_threads() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_inter_op_parallelism_threads(), target);
  }

  // .tensorflow.GPUOptions gpu_options = 6;
  if (this->has_gpu_options()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        6, _Internal::gpu_options(this), target, stream);
  }

  // bool allow_soft_placement = 7;
  if (this->allow_soft_placement() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(7, this->_internal_allow_soft_placement(), target);
  }

  // bool log_device_placement = 8;
  if (this->log_device_placement() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(8, this->_internal_log_device_placement(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.ConfigProto)
  return target;
}

size_t ConfigProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.ConfigProto)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, int32> device_count = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_device_count_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< std::string, ::PROTOBUF_NAMESPACE_ID::int32 >::const_iterator
      it = this->_internal_device_count().begin();
      it != this->_internal_device_count().end(); ++it) {
    total_size += ConfigProto_DeviceCountEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  // repeated string device_filters = 4;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(device_filters_.size());
  for (int i = 0, n = device_filters_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      device_filters_.Get(i));
  }

  // .tensorflow.GPUOptions gpu_options = 6;
  if (this->has_gpu_options()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *gpu_options_);
  }

  // int32 intra_op_parallelism_threads = 2;
  if (this->intra_op_parallelism_threads() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_intra_op_parallelism_threads());
  }

  // int32 placement_period = 3;
  if (this->placement_period() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_placement_period());
  }

  // int32 inter_op_parallelism_threads = 5;
  if (this->inter_op_parallelism_threads() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_inter_op_parallelism_threads());
  }

  // bool allow_soft_placement = 7;
  if (this->allow_soft_placement() != 0) {
    total_size += 1 + 1;
  }

  // bool log_device_placement = 8;
  if (this->log_device_placement() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ConfigProto::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.ConfigProto)
  GOOGLE_DCHECK_NE(&from, this);
  const ConfigProto* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ConfigProto>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.ConfigProto)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.ConfigProto)
    MergeFrom(*source);
  }
}

void ConfigProto::MergeFrom(const ConfigProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.ConfigProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  device_count_.MergeFrom(from.device_count_);
  device_filters_.MergeFrom(from.device_filters_);
  if (from.has_gpu_options()) {
    _internal_mutable_gpu_options()->::tensorflow::GPUOptions::MergeFrom(from._internal_gpu_options());
  }
  if (from.intra_op_parallelism_threads() != 0) {
    _internal_set_intra_op_parallelism_threads(from._internal_intra_op_parallelism_threads());
  }
  if (from.placement_period() != 0) {
    _internal_set_placement_period(from._internal_placement_period());
  }
  if (from.inter_op_parallelism_threads() != 0) {
    _internal_set_inter_op_parallelism_threads(from._internal_inter_op_parallelism_threads());
  }
  if (from.allow_soft_placement() != 0) {
    _internal_set_allow_soft_placement(from._internal_allow_soft_placement());
  }
  if (from.log_device_placement() != 0) {
    _internal_set_log_device_placement(from._internal_log_device_placement());
  }
}

void ConfigProto::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.ConfigProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ConfigProto::CopyFrom(const ConfigProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.ConfigProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConfigProto::IsInitialized() const {
  return true;
}

void ConfigProto::InternalSwap(ConfigProto* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  device_count_.Swap(&other->device_count_);
  device_filters_.InternalSwap(&other->device_filters_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ConfigProto, log_device_placement_)
      + sizeof(ConfigProto::log_device_placement_)
      - PROTOBUF_FIELD_OFFSET(ConfigProto, gpu_options_)>(
          reinterpret_cast<char*>(&gpu_options_),
          reinterpret_cast<char*>(&other->gpu_options_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ConfigProto::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_tensorflow_2fcore_2fframework_2fconfig_2eproto_getter, &descriptor_table_tensorflow_2fcore_2fframework_2fconfig_2eproto_once,
      file_level_metadata_tensorflow_2fcore_2fframework_2fconfig_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::GPUOptions* Arena::CreateMaybeMessage< ::tensorflow::GPUOptions >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::GPUOptions >(arena);
}
template<> PROTOBUF_NOINLINE ::tensorflow::ConfigProto_DeviceCountEntry_DoNotUse* Arena::CreateMaybeMessage< ::tensorflow::ConfigProto_DeviceCountEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::ConfigProto_DeviceCountEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::tensorflow::ConfigProto* Arena::CreateMaybeMessage< ::tensorflow::ConfigProto >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::ConfigProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>