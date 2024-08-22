// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: friend.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_friend_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_friend_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_friend_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_friend_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_friend_2eproto;
namespace mprpc {
class GetFriendListRequest;
class GetFriendListRequestDefaultTypeInternal;
extern GetFriendListRequestDefaultTypeInternal _GetFriendListRequest_default_instance_;
class GetFriendListResponse;
class GetFriendListResponseDefaultTypeInternal;
extern GetFriendListResponseDefaultTypeInternal _GetFriendListResponse_default_instance_;
class ResultCode;
class ResultCodeDefaultTypeInternal;
extern ResultCodeDefaultTypeInternal _ResultCode_default_instance_;
}  // namespace mprpc
PROTOBUF_NAMESPACE_OPEN
template<> ::mprpc::GetFriendListRequest* Arena::CreateMaybeMessage<::mprpc::GetFriendListRequest>(Arena*);
template<> ::mprpc::GetFriendListResponse* Arena::CreateMaybeMessage<::mprpc::GetFriendListResponse>(Arena*);
template<> ::mprpc::ResultCode* Arena::CreateMaybeMessage<::mprpc::ResultCode>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mprpc {

// ===================================================================

class ResultCode :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mprpc.ResultCode) */ {
 public:
  ResultCode();
  virtual ~ResultCode();

  ResultCode(const ResultCode& from);
  ResultCode(ResultCode&& from) noexcept
    : ResultCode() {
    *this = ::std::move(from);
  }

  inline ResultCode& operator=(const ResultCode& from) {
    CopyFrom(from);
    return *this;
  }
  inline ResultCode& operator=(ResultCode&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
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
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ResultCode& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ResultCode* internal_default_instance() {
    return reinterpret_cast<const ResultCode*>(
               &_ResultCode_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ResultCode& a, ResultCode& b) {
    a.Swap(&b);
  }
  inline void Swap(ResultCode* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ResultCode* New() const final {
    return CreateMaybeMessage<ResultCode>(nullptr);
  }

  ResultCode* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ResultCode>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ResultCode& from);
  void MergeFrom(const ResultCode& from);
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
  void InternalSwap(ResultCode* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mprpc.ResultCode";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_friend_2eproto);
    return ::descriptor_table_friend_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrmsgFieldNumber = 2,
    kErrcodeFieldNumber = 1,
  };
  // bytes errmsg = 2;
  void clear_errmsg();
  const std::string& errmsg() const;
  void set_errmsg(const std::string& value);
  void set_errmsg(std::string&& value);
  void set_errmsg(const char* value);
  void set_errmsg(const void* value, size_t size);
  std::string* mutable_errmsg();
  std::string* release_errmsg();
  void set_allocated_errmsg(std::string* errmsg);
  private:
  const std::string& _internal_errmsg() const;
  void _internal_set_errmsg(const std::string& value);
  std::string* _internal_mutable_errmsg();
  public:

  // int32 errcode = 1;
  void clear_errcode();
  ::PROTOBUF_NAMESPACE_ID::int32 errcode() const;
  void set_errcode(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_errcode() const;
  void _internal_set_errcode(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:mprpc.ResultCode)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr errmsg_;
  ::PROTOBUF_NAMESPACE_ID::int32 errcode_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_friend_2eproto;
};
// -------------------------------------------------------------------

class GetFriendListRequest :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mprpc.GetFriendListRequest) */ {
 public:
  GetFriendListRequest();
  virtual ~GetFriendListRequest();

  GetFriendListRequest(const GetFriendListRequest& from);
  GetFriendListRequest(GetFriendListRequest&& from) noexcept
    : GetFriendListRequest() {
    *this = ::std::move(from);
  }

  inline GetFriendListRequest& operator=(const GetFriendListRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetFriendListRequest& operator=(GetFriendListRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
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
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const GetFriendListRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetFriendListRequest* internal_default_instance() {
    return reinterpret_cast<const GetFriendListRequest*>(
               &_GetFriendListRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GetFriendListRequest& a, GetFriendListRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(GetFriendListRequest* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GetFriendListRequest* New() const final {
    return CreateMaybeMessage<GetFriendListRequest>(nullptr);
  }

  GetFriendListRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GetFriendListRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GetFriendListRequest& from);
  void MergeFrom(const GetFriendListRequest& from);
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
  void InternalSwap(GetFriendListRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mprpc.GetFriendListRequest";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_friend_2eproto);
    return ::descriptor_table_friend_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUseridFieldNumber = 1,
  };
  // uint32 userid = 1;
  void clear_userid();
  ::PROTOBUF_NAMESPACE_ID::uint32 userid() const;
  void set_userid(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_userid() const;
  void _internal_set_userid(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:mprpc.GetFriendListRequest)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::uint32 userid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_friend_2eproto;
};
// -------------------------------------------------------------------

class GetFriendListResponse :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mprpc.GetFriendListResponse) */ {
 public:
  GetFriendListResponse();
  virtual ~GetFriendListResponse();

  GetFriendListResponse(const GetFriendListResponse& from);
  GetFriendListResponse(GetFriendListResponse&& from) noexcept
    : GetFriendListResponse() {
    *this = ::std::move(from);
  }

  inline GetFriendListResponse& operator=(const GetFriendListResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetFriendListResponse& operator=(GetFriendListResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
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
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const GetFriendListResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetFriendListResponse* internal_default_instance() {
    return reinterpret_cast<const GetFriendListResponse*>(
               &_GetFriendListResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(GetFriendListResponse& a, GetFriendListResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(GetFriendListResponse* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GetFriendListResponse* New() const final {
    return CreateMaybeMessage<GetFriendListResponse>(nullptr);
  }

  GetFriendListResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GetFriendListResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GetFriendListResponse& from);
  void MergeFrom(const GetFriendListResponse& from);
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
  void InternalSwap(GetFriendListResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mprpc.GetFriendListResponse";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_friend_2eproto);
    return ::descriptor_table_friend_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFriendsFieldNumber = 2,
    kResultFieldNumber = 1,
  };
  // repeated bytes friends = 2;
  int friends_size() const;
  private:
  int _internal_friends_size() const;
  public:
  void clear_friends();
  const std::string& friends(int index) const;
  std::string* mutable_friends(int index);
  void set_friends(int index, const std::string& value);
  void set_friends(int index, std::string&& value);
  void set_friends(int index, const char* value);
  void set_friends(int index, const void* value, size_t size);
  std::string* add_friends();
  void add_friends(const std::string& value);
  void add_friends(std::string&& value);
  void add_friends(const char* value);
  void add_friends(const void* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& friends() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_friends();
  private:
  const std::string& _internal_friends(int index) const;
  std::string* _internal_add_friends();
  public:

  // .mprpc.ResultCode result = 1;
  bool has_result() const;
  private:
  bool _internal_has_result() const;
  public:
  void clear_result();
  const ::mprpc::ResultCode& result() const;
  ::mprpc::ResultCode* release_result();
  ::mprpc::ResultCode* mutable_result();
  void set_allocated_result(::mprpc::ResultCode* result);
  private:
  const ::mprpc::ResultCode& _internal_result() const;
  ::mprpc::ResultCode* _internal_mutable_result();
  public:

  // @@protoc_insertion_point(class_scope:mprpc.GetFriendListResponse)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> friends_;
  ::mprpc::ResultCode* result_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_friend_2eproto;
};
// ===================================================================

class FriendServiceRpc_Stub;

class FriendServiceRpc : public ::PROTOBUF_NAMESPACE_ID::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline FriendServiceRpc() {};
 public:
  virtual ~FriendServiceRpc();

  typedef FriendServiceRpc_Stub Stub;

  static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* descriptor();

  virtual void GetFriendList(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::mprpc::GetFriendListRequest* request,
                       ::mprpc::GetFriendListResponse* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                  ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                  const ::PROTOBUF_NAMESPACE_ID::Message* request,
                  ::PROTOBUF_NAMESPACE_ID::Message* response,
                  ::google::protobuf::Closure* done);
  const ::PROTOBUF_NAMESPACE_ID::Message& GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;
  const ::PROTOBUF_NAMESPACE_ID::Message& GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(FriendServiceRpc);
};

class FriendServiceRpc_Stub : public FriendServiceRpc {
 public:
  FriendServiceRpc_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel);
  FriendServiceRpc_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
                   ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership);
  ~FriendServiceRpc_Stub();

  inline ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel() { return channel_; }

  // implements FriendServiceRpc ------------------------------------------

  void GetFriendList(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::mprpc::GetFriendListRequest* request,
                       ::mprpc::GetFriendListResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(FriendServiceRpc_Stub);
};


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ResultCode

// int32 errcode = 1;
inline void ResultCode::clear_errcode() {
  errcode_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ResultCode::_internal_errcode() const {
  return errcode_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ResultCode::errcode() const {
  // @@protoc_insertion_point(field_get:mprpc.ResultCode.errcode)
  return _internal_errcode();
}
inline void ResultCode::_internal_set_errcode(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  errcode_ = value;
}
inline void ResultCode::set_errcode(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_errcode(value);
  // @@protoc_insertion_point(field_set:mprpc.ResultCode.errcode)
}

// bytes errmsg = 2;
inline void ResultCode::clear_errmsg() {
  errmsg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ResultCode::errmsg() const {
  // @@protoc_insertion_point(field_get:mprpc.ResultCode.errmsg)
  return _internal_errmsg();
}
inline void ResultCode::set_errmsg(const std::string& value) {
  _internal_set_errmsg(value);
  // @@protoc_insertion_point(field_set:mprpc.ResultCode.errmsg)
}
inline std::string* ResultCode::mutable_errmsg() {
  // @@protoc_insertion_point(field_mutable:mprpc.ResultCode.errmsg)
  return _internal_mutable_errmsg();
}
inline const std::string& ResultCode::_internal_errmsg() const {
  return errmsg_.GetNoArena();
}
inline void ResultCode::_internal_set_errmsg(const std::string& value) {
  
  errmsg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void ResultCode::set_errmsg(std::string&& value) {
  
  errmsg_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mprpc.ResultCode.errmsg)
}
inline void ResultCode::set_errmsg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  errmsg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mprpc.ResultCode.errmsg)
}
inline void ResultCode::set_errmsg(const void* value, size_t size) {
  
  errmsg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mprpc.ResultCode.errmsg)
}
inline std::string* ResultCode::_internal_mutable_errmsg() {
  
  return errmsg_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ResultCode::release_errmsg() {
  // @@protoc_insertion_point(field_release:mprpc.ResultCode.errmsg)
  
  return errmsg_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ResultCode::set_allocated_errmsg(std::string* errmsg) {
  if (errmsg != nullptr) {
    
  } else {
    
  }
  errmsg_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), errmsg);
  // @@protoc_insertion_point(field_set_allocated:mprpc.ResultCode.errmsg)
}

// -------------------------------------------------------------------

// GetFriendListRequest

// uint32 userid = 1;
inline void GetFriendListRequest::clear_userid() {
  userid_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GetFriendListRequest::_internal_userid() const {
  return userid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GetFriendListRequest::userid() const {
  // @@protoc_insertion_point(field_get:mprpc.GetFriendListRequest.userid)
  return _internal_userid();
}
inline void GetFriendListRequest::_internal_set_userid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  userid_ = value;
}
inline void GetFriendListRequest::set_userid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_userid(value);
  // @@protoc_insertion_point(field_set:mprpc.GetFriendListRequest.userid)
}

// -------------------------------------------------------------------

// GetFriendListResponse

// .mprpc.ResultCode result = 1;
inline bool GetFriendListResponse::_internal_has_result() const {
  return this != internal_default_instance() && result_ != nullptr;
}
inline bool GetFriendListResponse::has_result() const {
  return _internal_has_result();
}
inline void GetFriendListResponse::clear_result() {
  if (GetArenaNoVirtual() == nullptr && result_ != nullptr) {
    delete result_;
  }
  result_ = nullptr;
}
inline const ::mprpc::ResultCode& GetFriendListResponse::_internal_result() const {
  const ::mprpc::ResultCode* p = result_;
  return p != nullptr ? *p : *reinterpret_cast<const ::mprpc::ResultCode*>(
      &::mprpc::_ResultCode_default_instance_);
}
inline const ::mprpc::ResultCode& GetFriendListResponse::result() const {
  // @@protoc_insertion_point(field_get:mprpc.GetFriendListResponse.result)
  return _internal_result();
}
inline ::mprpc::ResultCode* GetFriendListResponse::release_result() {
  // @@protoc_insertion_point(field_release:mprpc.GetFriendListResponse.result)
  
  ::mprpc::ResultCode* temp = result_;
  result_ = nullptr;
  return temp;
}
inline ::mprpc::ResultCode* GetFriendListResponse::_internal_mutable_result() {
  
  if (result_ == nullptr) {
    auto* p = CreateMaybeMessage<::mprpc::ResultCode>(GetArenaNoVirtual());
    result_ = p;
  }
  return result_;
}
inline ::mprpc::ResultCode* GetFriendListResponse::mutable_result() {
  // @@protoc_insertion_point(field_mutable:mprpc.GetFriendListResponse.result)
  return _internal_mutable_result();
}
inline void GetFriendListResponse::set_allocated_result(::mprpc::ResultCode* result) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete result_;
  }
  if (result) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      result = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, result, submessage_arena);
    }
    
  } else {
    
  }
  result_ = result;
  // @@protoc_insertion_point(field_set_allocated:mprpc.GetFriendListResponse.result)
}

// repeated bytes friends = 2;
inline int GetFriendListResponse::_internal_friends_size() const {
  return friends_.size();
}
inline int GetFriendListResponse::friends_size() const {
  return _internal_friends_size();
}
inline void GetFriendListResponse::clear_friends() {
  friends_.Clear();
}
inline std::string* GetFriendListResponse::add_friends() {
  // @@protoc_insertion_point(field_add_mutable:mprpc.GetFriendListResponse.friends)
  return _internal_add_friends();
}
inline const std::string& GetFriendListResponse::_internal_friends(int index) const {
  return friends_.Get(index);
}
inline const std::string& GetFriendListResponse::friends(int index) const {
  // @@protoc_insertion_point(field_get:mprpc.GetFriendListResponse.friends)
  return _internal_friends(index);
}
inline std::string* GetFriendListResponse::mutable_friends(int index) {
  // @@protoc_insertion_point(field_mutable:mprpc.GetFriendListResponse.friends)
  return friends_.Mutable(index);
}
inline void GetFriendListResponse::set_friends(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:mprpc.GetFriendListResponse.friends)
  friends_.Mutable(index)->assign(value);
}
inline void GetFriendListResponse::set_friends(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:mprpc.GetFriendListResponse.friends)
  friends_.Mutable(index)->assign(std::move(value));
}
inline void GetFriendListResponse::set_friends(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  friends_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:mprpc.GetFriendListResponse.friends)
}
inline void GetFriendListResponse::set_friends(int index, const void* value, size_t size) {
  friends_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:mprpc.GetFriendListResponse.friends)
}
inline std::string* GetFriendListResponse::_internal_add_friends() {
  return friends_.Add();
}
inline void GetFriendListResponse::add_friends(const std::string& value) {
  friends_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:mprpc.GetFriendListResponse.friends)
}
inline void GetFriendListResponse::add_friends(std::string&& value) {
  friends_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:mprpc.GetFriendListResponse.friends)
}
inline void GetFriendListResponse::add_friends(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  friends_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:mprpc.GetFriendListResponse.friends)
}
inline void GetFriendListResponse::add_friends(const void* value, size_t size) {
  friends_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:mprpc.GetFriendListResponse.friends)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
GetFriendListResponse::friends() const {
  // @@protoc_insertion_point(field_list:mprpc.GetFriendListResponse.friends)
  return friends_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
GetFriendListResponse::mutable_friends() {
  // @@protoc_insertion_point(field_mutable_list:mprpc.GetFriendListResponse.friends)
  return &friends_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace mprpc

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_friend_2eproto
