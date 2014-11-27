// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: build/Protocol/RaftLogMetadata.proto

#ifndef PROTOBUF_build_2fProtocol_2fRaftLogMetadata_2eproto__INCLUDED
#define PROTOBUF_build_2fProtocol_2fRaftLogMetadata_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace LogCabin {
namespace Protocol {
namespace RaftLogMetadata {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_build_2fProtocol_2fRaftLogMetadata_2eproto();
void protobuf_AssignDesc_build_2fProtocol_2fRaftLogMetadata_2eproto();
void protobuf_ShutdownFile_build_2fProtocol_2fRaftLogMetadata_2eproto();

class Metadata;

// ===================================================================

class Metadata : public ::google::protobuf::Message {
 public:
  Metadata();
  virtual ~Metadata();

  Metadata(const Metadata& from);

  inline Metadata& operator=(const Metadata& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Metadata& default_instance();

  void Swap(Metadata* other);

  // implements Message ----------------------------------------------

  Metadata* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Metadata& from);
  void MergeFrom(const Metadata& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint64 current_term = 1;
  inline bool has_current_term() const;
  inline void clear_current_term();
  static const int kCurrentTermFieldNumber = 1;
  inline ::google::protobuf::uint64 current_term() const;
  inline void set_current_term(::google::protobuf::uint64 value);

  // required uint64 voted_for = 2;
  inline bool has_voted_for() const;
  inline void clear_voted_for();
  static const int kVotedForFieldNumber = 2;
  inline ::google::protobuf::uint64 voted_for() const;
  inline void set_voted_for(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:LogCabin.Protocol.RaftLogMetadata.Metadata)
 private:
  inline void set_has_current_term();
  inline void clear_has_current_term();
  inline void set_has_voted_for();
  inline void clear_has_voted_for();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint64 current_term_;
  ::google::protobuf::uint64 voted_for_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_build_2fProtocol_2fRaftLogMetadata_2eproto();
  friend void protobuf_AssignDesc_build_2fProtocol_2fRaftLogMetadata_2eproto();
  friend void protobuf_ShutdownFile_build_2fProtocol_2fRaftLogMetadata_2eproto();

  void InitAsDefaultInstance();
  static Metadata* default_instance_;
};
// ===================================================================


// ===================================================================

// Metadata

// required uint64 current_term = 1;
inline bool Metadata::has_current_term() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Metadata::set_has_current_term() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Metadata::clear_has_current_term() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Metadata::clear_current_term() {
  current_term_ = GOOGLE_ULONGLONG(0);
  clear_has_current_term();
}
inline ::google::protobuf::uint64 Metadata::current_term() const {
  return current_term_;
}
inline void Metadata::set_current_term(::google::protobuf::uint64 value) {
  set_has_current_term();
  current_term_ = value;
}

// required uint64 voted_for = 2;
inline bool Metadata::has_voted_for() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Metadata::set_has_voted_for() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Metadata::clear_has_voted_for() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Metadata::clear_voted_for() {
  voted_for_ = GOOGLE_ULONGLONG(0);
  clear_has_voted_for();
}
inline ::google::protobuf::uint64 Metadata::voted_for() const {
  return voted_for_;
}
inline void Metadata::set_voted_for(::google::protobuf::uint64 value) {
  set_has_voted_for();
  voted_for_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace RaftLogMetadata
}  // namespace Protocol
}  // namespace LogCabin

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_build_2fProtocol_2fRaftLogMetadata_2eproto__INCLUDED