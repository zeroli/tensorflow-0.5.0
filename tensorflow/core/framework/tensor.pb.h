// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/tensor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fframework_2ftensor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fframework_2ftensor_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3016000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3016000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/core/framework/tensor_shape.pb.h"
#include "tensorflow/core/framework/types.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fframework_2ftensor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_2fcore_2fframework_2ftensor_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_2fcore_2fframework_2ftensor_2eproto;
namespace tensorflow {
class TensorProto;
struct TensorProtoDefaultTypeInternal;
extern TensorProtoDefaultTypeInternal _TensorProto_default_instance_;
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> ::tensorflow::TensorProto* Arena::CreateMaybeMessage<::tensorflow::TensorProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {

// ===================================================================

class TensorProto PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.TensorProto) */ {
 public:
  inline TensorProto() : TensorProto(nullptr) {}
  ~TensorProto() override;
  explicit constexpr TensorProto(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TensorProto(const TensorProto& from);
  TensorProto(TensorProto&& from) noexcept
    : TensorProto() {
    *this = ::std::move(from);
  }

  inline TensorProto& operator=(const TensorProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline TensorProto& operator=(TensorProto&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const TensorProto& default_instance() {
    return *internal_default_instance();
  }
  static inline const TensorProto* internal_default_instance() {
    return reinterpret_cast<const TensorProto*>(
               &_TensorProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TensorProto& a, TensorProto& b) {
    a.Swap(&b);
  }
  inline void Swap(TensorProto* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TensorProto* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TensorProto* New() const final {
    return CreateMaybeMessage<TensorProto>(nullptr);
  }

  TensorProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TensorProto>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TensorProto& from);
  void MergeFrom(const TensorProto& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TensorProto* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.TensorProto";
  }
  protected:
  explicit TensorProto(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFloatValFieldNumber = 5,
    kDoubleValFieldNumber = 6,
    kIntValFieldNumber = 7,
    kStringValFieldNumber = 8,
    kScomplexValFieldNumber = 9,
    kInt64ValFieldNumber = 10,
    kBoolValFieldNumber = 11,
    kTensorContentFieldNumber = 4,
    kTensorShapeFieldNumber = 2,
    kDtypeFieldNumber = 1,
    kVersionNumberFieldNumber = 3,
  };
  // repeated float float_val = 5 [packed = true];
  int float_val_size() const;
  private:
  int _internal_float_val_size() const;
  public:
  void clear_float_val();
  private:
  float _internal_float_val(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      _internal_float_val() const;
  void _internal_add_float_val(float value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      _internal_mutable_float_val();
  public:
  float float_val(int index) const;
  void set_float_val(int index, float value);
  void add_float_val(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      float_val() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_float_val();

  // repeated double double_val = 6 [packed = true];
  int double_val_size() const;
  private:
  int _internal_double_val_size() const;
  public:
  void clear_double_val();
  private:
  double _internal_double_val(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      _internal_double_val() const;
  void _internal_add_double_val(double value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      _internal_mutable_double_val();
  public:
  double double_val(int index) const;
  void set_double_val(int index, double value);
  void add_double_val(double value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
      double_val() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
      mutable_double_val();

  // repeated int32 int_val = 7 [packed = true];
  int int_val_size() const;
  private:
  int _internal_int_val_size() const;
  public:
  void clear_int_val();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_int_val(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_int_val() const;
  void _internal_add_int_val(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_int_val();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 int_val(int index) const;
  void set_int_val(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_int_val(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      int_val() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_int_val();

  // repeated bytes string_val = 8;
  int string_val_size() const;
  private:
  int _internal_string_val_size() const;
  public:
  void clear_string_val();
  const std::string& string_val(int index) const;
  std::string* mutable_string_val(int index);
  void set_string_val(int index, const std::string& value);
  void set_string_val(int index, std::string&& value);
  void set_string_val(int index, const char* value);
  void set_string_val(int index, const void* value, size_t size);
  std::string* add_string_val();
  void add_string_val(const std::string& value);
  void add_string_val(std::string&& value);
  void add_string_val(const char* value);
  void add_string_val(const void* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& string_val() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_string_val();
  private:
  const std::string& _internal_string_val(int index) const;
  std::string* _internal_add_string_val();
  public:

  // repeated float scomplex_val = 9 [packed = true];
  int scomplex_val_size() const;
  private:
  int _internal_scomplex_val_size() const;
  public:
  void clear_scomplex_val();
  private:
  float _internal_scomplex_val(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      _internal_scomplex_val() const;
  void _internal_add_scomplex_val(float value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      _internal_mutable_scomplex_val();
  public:
  float scomplex_val(int index) const;
  void set_scomplex_val(int index, float value);
  void add_scomplex_val(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      scomplex_val() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_scomplex_val();

  // repeated int64 int64_val = 10 [packed = true];
  int int64_val_size() const;
  private:
  int _internal_int64_val_size() const;
  public:
  void clear_int64_val();
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_int64_val(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
      _internal_int64_val() const;
  void _internal_add_int64_val(::PROTOBUF_NAMESPACE_ID::int64 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
      _internal_mutable_int64_val();
  public:
  ::PROTOBUF_NAMESPACE_ID::int64 int64_val(int index) const;
  void set_int64_val(int index, ::PROTOBUF_NAMESPACE_ID::int64 value);
  void add_int64_val(::PROTOBUF_NAMESPACE_ID::int64 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
      int64_val() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
      mutable_int64_val();

  // repeated bool bool_val = 11 [packed = true];
  int bool_val_size() const;
  private:
  int _internal_bool_val_size() const;
  public:
  void clear_bool_val();
  private:
  bool _internal_bool_val(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >&
      _internal_bool_val() const;
  void _internal_add_bool_val(bool value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >*
      _internal_mutable_bool_val();
  public:
  bool bool_val(int index) const;
  void set_bool_val(int index, bool value);
  void add_bool_val(bool value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >&
      bool_val() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >*
      mutable_bool_val();

  // bytes tensor_content = 4;
  void clear_tensor_content();
  const std::string& tensor_content() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_tensor_content(ArgT0&& arg0, ArgT... args);
  std::string* mutable_tensor_content();
  std::string* release_tensor_content();
  void set_allocated_tensor_content(std::string* tensor_content);
  private:
  const std::string& _internal_tensor_content() const;
  void _internal_set_tensor_content(const std::string& value);
  std::string* _internal_mutable_tensor_content();
  public:

  // .tensorflow.TensorShapeProto tensor_shape = 2;
  bool has_tensor_shape() const;
  private:
  bool _internal_has_tensor_shape() const;
  public:
  void clear_tensor_shape();
  const ::tensorflow::TensorShapeProto& tensor_shape() const;
  ::tensorflow::TensorShapeProto* release_tensor_shape();
  ::tensorflow::TensorShapeProto* mutable_tensor_shape();
  void set_allocated_tensor_shape(::tensorflow::TensorShapeProto* tensor_shape);
  private:
  const ::tensorflow::TensorShapeProto& _internal_tensor_shape() const;
  ::tensorflow::TensorShapeProto* _internal_mutable_tensor_shape();
  public:
  void unsafe_arena_set_allocated_tensor_shape(
      ::tensorflow::TensorShapeProto* tensor_shape);
  ::tensorflow::TensorShapeProto* unsafe_arena_release_tensor_shape();

  // .tensorflow.DataType dtype = 1;
  void clear_dtype();
  ::tensorflow::DataType dtype() const;
  void set_dtype(::tensorflow::DataType value);
  private:
  ::tensorflow::DataType _internal_dtype() const;
  void _internal_set_dtype(::tensorflow::DataType value);
  public:

  // int32 version_number = 3;
  void clear_version_number();
  ::PROTOBUF_NAMESPACE_ID::int32 version_number() const;
  void set_version_number(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_version_number() const;
  void _internal_set_version_number(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:tensorflow.TensorProto)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > float_val_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< double > double_val_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > int_val_;
  mutable std::atomic<int> _int_val_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> string_val_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > scomplex_val_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 > int64_val_;
  mutable std::atomic<int> _int64_val_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool > bool_val_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr tensor_content_;
  ::tensorflow::TensorShapeProto* tensor_shape_;
  int dtype_;
  ::PROTOBUF_NAMESPACE_ID::int32 version_number_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_2fcore_2fframework_2ftensor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TensorProto

// .tensorflow.DataType dtype = 1;
inline void TensorProto::clear_dtype() {
  dtype_ = 0;
}
inline ::tensorflow::DataType TensorProto::_internal_dtype() const {
  return static_cast< ::tensorflow::DataType >(dtype_);
}
inline ::tensorflow::DataType TensorProto::dtype() const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.dtype)
  return _internal_dtype();
}
inline void TensorProto::_internal_set_dtype(::tensorflow::DataType value) {
  
  dtype_ = value;
}
inline void TensorProto::set_dtype(::tensorflow::DataType value) {
  _internal_set_dtype(value);
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.dtype)
}

// .tensorflow.TensorShapeProto tensor_shape = 2;
inline bool TensorProto::_internal_has_tensor_shape() const {
  return this != internal_default_instance() && tensor_shape_ != nullptr;
}
inline bool TensorProto::has_tensor_shape() const {
  return _internal_has_tensor_shape();
}
inline const ::tensorflow::TensorShapeProto& TensorProto::_internal_tensor_shape() const {
  const ::tensorflow::TensorShapeProto* p = tensor_shape_;
  return p != nullptr ? *p : reinterpret_cast<const ::tensorflow::TensorShapeProto&>(
      ::tensorflow::_TensorShapeProto_default_instance_);
}
inline const ::tensorflow::TensorShapeProto& TensorProto::tensor_shape() const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.tensor_shape)
  return _internal_tensor_shape();
}
inline void TensorProto::unsafe_arena_set_allocated_tensor_shape(
    ::tensorflow::TensorShapeProto* tensor_shape) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(tensor_shape_);
  }
  tensor_shape_ = tensor_shape;
  if (tensor_shape) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.TensorProto.tensor_shape)
}
inline ::tensorflow::TensorShapeProto* TensorProto::release_tensor_shape() {
  
  ::tensorflow::TensorShapeProto* temp = tensor_shape_;
  tensor_shape_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::tensorflow::TensorShapeProto* TensorProto::unsafe_arena_release_tensor_shape() {
  // @@protoc_insertion_point(field_release:tensorflow.TensorProto.tensor_shape)
  
  ::tensorflow::TensorShapeProto* temp = tensor_shape_;
  tensor_shape_ = nullptr;
  return temp;
}
inline ::tensorflow::TensorShapeProto* TensorProto::_internal_mutable_tensor_shape() {
  
  if (tensor_shape_ == nullptr) {
    auto* p = CreateMaybeMessage<::tensorflow::TensorShapeProto>(GetArena());
    tensor_shape_ = p;
  }
  return tensor_shape_;
}
inline ::tensorflow::TensorShapeProto* TensorProto::mutable_tensor_shape() {
  // @@protoc_insertion_point(field_mutable:tensorflow.TensorProto.tensor_shape)
  return _internal_mutable_tensor_shape();
}
inline void TensorProto::set_allocated_tensor_shape(::tensorflow::TensorShapeProto* tensor_shape) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(tensor_shape_);
  }
  if (tensor_shape) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(tensor_shape)->GetArena();
    if (message_arena != submessage_arena) {
      tensor_shape = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, tensor_shape, submessage_arena);
    }
    
  } else {
    
  }
  tensor_shape_ = tensor_shape;
  // @@protoc_insertion_point(field_set_allocated:tensorflow.TensorProto.tensor_shape)
}

// int32 version_number = 3;
inline void TensorProto::clear_version_number() {
  version_number_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TensorProto::_internal_version_number() const {
  return version_number_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TensorProto::version_number() const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.version_number)
  return _internal_version_number();
}
inline void TensorProto::_internal_set_version_number(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  version_number_ = value;
}
inline void TensorProto::set_version_number(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_version_number(value);
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.version_number)
}

// bytes tensor_content = 4;
inline void TensorProto::clear_tensor_content() {
  tensor_content_.ClearToEmpty();
}
inline const std::string& TensorProto::tensor_content() const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.tensor_content)
  return _internal_tensor_content();
}
template <typename ArgT0, typename... ArgT>
PROTOBUF_ALWAYS_INLINE
inline void TensorProto::set_tensor_content(ArgT0&& arg0, ArgT... args) {
 
 tensor_content_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArena());
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.tensor_content)
}
inline std::string* TensorProto::mutable_tensor_content() {
  // @@protoc_insertion_point(field_mutable:tensorflow.TensorProto.tensor_content)
  return _internal_mutable_tensor_content();
}
inline const std::string& TensorProto::_internal_tensor_content() const {
  return tensor_content_.Get();
}
inline void TensorProto::_internal_set_tensor_content(const std::string& value) {
  
  tensor_content_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline std::string* TensorProto::_internal_mutable_tensor_content() {
  
  return tensor_content_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* TensorProto::release_tensor_content() {
  // @@protoc_insertion_point(field_release:tensorflow.TensorProto.tensor_content)
  return tensor_content_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void TensorProto::set_allocated_tensor_content(std::string* tensor_content) {
  if (tensor_content != nullptr) {
    
  } else {
    
  }
  tensor_content_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), tensor_content,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.TensorProto.tensor_content)
}

// repeated float float_val = 5 [packed = true];
inline int TensorProto::_internal_float_val_size() const {
  return float_val_.size();
}
inline int TensorProto::float_val_size() const {
  return _internal_float_val_size();
}
inline void TensorProto::clear_float_val() {
  float_val_.Clear();
}
inline float TensorProto::_internal_float_val(int index) const {
  return float_val_.Get(index);
}
inline float TensorProto::float_val(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.float_val)
  return _internal_float_val(index);
}
inline void TensorProto::set_float_val(int index, float value) {
  float_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.float_val)
}
inline void TensorProto::_internal_add_float_val(float value) {
  float_val_.Add(value);
}
inline void TensorProto::add_float_val(float value) {
  _internal_add_float_val(value);
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.float_val)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
TensorProto::_internal_float_val() const {
  return float_val_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
TensorProto::float_val() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorProto.float_val)
  return _internal_float_val();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
TensorProto::_internal_mutable_float_val() {
  return &float_val_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
TensorProto::mutable_float_val() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorProto.float_val)
  return _internal_mutable_float_val();
}

// repeated double double_val = 6 [packed = true];
inline int TensorProto::_internal_double_val_size() const {
  return double_val_.size();
}
inline int TensorProto::double_val_size() const {
  return _internal_double_val_size();
}
inline void TensorProto::clear_double_val() {
  double_val_.Clear();
}
inline double TensorProto::_internal_double_val(int index) const {
  return double_val_.Get(index);
}
inline double TensorProto::double_val(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.double_val)
  return _internal_double_val(index);
}
inline void TensorProto::set_double_val(int index, double value) {
  double_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.double_val)
}
inline void TensorProto::_internal_add_double_val(double value) {
  double_val_.Add(value);
}
inline void TensorProto::add_double_val(double value) {
  _internal_add_double_val(value);
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.double_val)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
TensorProto::_internal_double_val() const {
  return double_val_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >&
TensorProto::double_val() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorProto.double_val)
  return _internal_double_val();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
TensorProto::_internal_mutable_double_val() {
  return &double_val_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< double >*
TensorProto::mutable_double_val() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorProto.double_val)
  return _internal_mutable_double_val();
}

// repeated int32 int_val = 7 [packed = true];
inline int TensorProto::_internal_int_val_size() const {
  return int_val_.size();
}
inline int TensorProto::int_val_size() const {
  return _internal_int_val_size();
}
inline void TensorProto::clear_int_val() {
  int_val_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TensorProto::_internal_int_val(int index) const {
  return int_val_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 TensorProto::int_val(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.int_val)
  return _internal_int_val(index);
}
inline void TensorProto::set_int_val(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  int_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.int_val)
}
inline void TensorProto::_internal_add_int_val(::PROTOBUF_NAMESPACE_ID::int32 value) {
  int_val_.Add(value);
}
inline void TensorProto::add_int_val(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_int_val(value);
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.int_val)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
TensorProto::_internal_int_val() const {
  return int_val_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
TensorProto::int_val() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorProto.int_val)
  return _internal_int_val();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
TensorProto::_internal_mutable_int_val() {
  return &int_val_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
TensorProto::mutable_int_val() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorProto.int_val)
  return _internal_mutable_int_val();
}

// repeated bytes string_val = 8;
inline int TensorProto::_internal_string_val_size() const {
  return string_val_.size();
}
inline int TensorProto::string_val_size() const {
  return _internal_string_val_size();
}
inline void TensorProto::clear_string_val() {
  string_val_.Clear();
}
inline std::string* TensorProto::add_string_val() {
  // @@protoc_insertion_point(field_add_mutable:tensorflow.TensorProto.string_val)
  return _internal_add_string_val();
}
inline const std::string& TensorProto::_internal_string_val(int index) const {
  return string_val_.Get(index);
}
inline const std::string& TensorProto::string_val(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.string_val)
  return _internal_string_val(index);
}
inline std::string* TensorProto::mutable_string_val(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.TensorProto.string_val)
  return string_val_.Mutable(index);
}
inline void TensorProto::set_string_val(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.string_val)
  string_val_.Mutable(index)->assign(value);
}
inline void TensorProto::set_string_val(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.string_val)
  string_val_.Mutable(index)->assign(std::move(value));
}
inline void TensorProto::set_string_val(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  string_val_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tensorflow.TensorProto.string_val)
}
inline void TensorProto::set_string_val(int index, const void* value, size_t size) {
  string_val_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tensorflow.TensorProto.string_val)
}
inline std::string* TensorProto::_internal_add_string_val() {
  return string_val_.Add();
}
inline void TensorProto::add_string_val(const std::string& value) {
  string_val_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.string_val)
}
inline void TensorProto::add_string_val(std::string&& value) {
  string_val_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.string_val)
}
inline void TensorProto::add_string_val(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  string_val_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tensorflow.TensorProto.string_val)
}
inline void TensorProto::add_string_val(const void* value, size_t size) {
  string_val_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tensorflow.TensorProto.string_val)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
TensorProto::string_val() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorProto.string_val)
  return string_val_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
TensorProto::mutable_string_val() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorProto.string_val)
  return &string_val_;
}

// repeated float scomplex_val = 9 [packed = true];
inline int TensorProto::_internal_scomplex_val_size() const {
  return scomplex_val_.size();
}
inline int TensorProto::scomplex_val_size() const {
  return _internal_scomplex_val_size();
}
inline void TensorProto::clear_scomplex_val() {
  scomplex_val_.Clear();
}
inline float TensorProto::_internal_scomplex_val(int index) const {
  return scomplex_val_.Get(index);
}
inline float TensorProto::scomplex_val(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.scomplex_val)
  return _internal_scomplex_val(index);
}
inline void TensorProto::set_scomplex_val(int index, float value) {
  scomplex_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.scomplex_val)
}
inline void TensorProto::_internal_add_scomplex_val(float value) {
  scomplex_val_.Add(value);
}
inline void TensorProto::add_scomplex_val(float value) {
  _internal_add_scomplex_val(value);
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.scomplex_val)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
TensorProto::_internal_scomplex_val() const {
  return scomplex_val_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
TensorProto::scomplex_val() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorProto.scomplex_val)
  return _internal_scomplex_val();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
TensorProto::_internal_mutable_scomplex_val() {
  return &scomplex_val_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
TensorProto::mutable_scomplex_val() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorProto.scomplex_val)
  return _internal_mutable_scomplex_val();
}

// repeated int64 int64_val = 10 [packed = true];
inline int TensorProto::_internal_int64_val_size() const {
  return int64_val_.size();
}
inline int TensorProto::int64_val_size() const {
  return _internal_int64_val_size();
}
inline void TensorProto::clear_int64_val() {
  int64_val_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int64 TensorProto::_internal_int64_val(int index) const {
  return int64_val_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 TensorProto::int64_val(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.int64_val)
  return _internal_int64_val(index);
}
inline void TensorProto::set_int64_val(int index, ::PROTOBUF_NAMESPACE_ID::int64 value) {
  int64_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.int64_val)
}
inline void TensorProto::_internal_add_int64_val(::PROTOBUF_NAMESPACE_ID::int64 value) {
  int64_val_.Add(value);
}
inline void TensorProto::add_int64_val(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_add_int64_val(value);
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.int64_val)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
TensorProto::_internal_int64_val() const {
  return int64_val_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
TensorProto::int64_val() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorProto.int64_val)
  return _internal_int64_val();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
TensorProto::_internal_mutable_int64_val() {
  return &int64_val_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
TensorProto::mutable_int64_val() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorProto.int64_val)
  return _internal_mutable_int64_val();
}

// repeated bool bool_val = 11 [packed = true];
inline int TensorProto::_internal_bool_val_size() const {
  return bool_val_.size();
}
inline int TensorProto::bool_val_size() const {
  return _internal_bool_val_size();
}
inline void TensorProto::clear_bool_val() {
  bool_val_.Clear();
}
inline bool TensorProto::_internal_bool_val(int index) const {
  return bool_val_.Get(index);
}
inline bool TensorProto::bool_val(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.TensorProto.bool_val)
  return _internal_bool_val(index);
}
inline void TensorProto::set_bool_val(int index, bool value) {
  bool_val_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.TensorProto.bool_val)
}
inline void TensorProto::_internal_add_bool_val(bool value) {
  bool_val_.Add(value);
}
inline void TensorProto::add_bool_val(bool value) {
  _internal_add_bool_val(value);
  // @@protoc_insertion_point(field_add:tensorflow.TensorProto.bool_val)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >&
TensorProto::_internal_bool_val() const {
  return bool_val_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >&
TensorProto::bool_val() const {
  // @@protoc_insertion_point(field_list:tensorflow.TensorProto.bool_val)
  return _internal_bool_val();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >*
TensorProto::_internal_mutable_bool_val() {
  return &bool_val_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >*
TensorProto::mutable_bool_val() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.TensorProto.bool_val)
  return _internal_mutable_bool_val();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fframework_2ftensor_2eproto
