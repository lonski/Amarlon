// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: item_type.proto

#ifndef PROTOBUF_item_5ftype_2eproto__INCLUDED
#define PROTOBUF_item_5ftype_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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

namespace amarlon {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_item_5ftype_2eproto();
void protobuf_AssignDesc_item_5ftype_2eproto();
void protobuf_ShutdownFile_item_5ftype_2eproto();

class ItemTypeData;

// ===================================================================

class ItemTypeData : public ::google::protobuf::Message {
 public:
  ItemTypeData();
  virtual ~ItemTypeData();

  ItemTypeData(const ItemTypeData& from);

  inline ItemTypeData& operator=(const ItemTypeData& from) {
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
  static const ItemTypeData& default_instance();

  void Swap(ItemTypeData* other);

  // implements Message ----------------------------------------------

  ItemTypeData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ItemTypeData& from);
  void MergeFrom(const ItemTypeData& from);
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

  // optional int32 category = 1;
  inline bool has_category() const;
  inline void clear_category();
  static const int kCategoryFieldNumber = 1;
  inline ::google::protobuf::int32 category() const;
  inline void set_category(::google::protobuf::int32 value);

  // optional int32 amunition_type = 2;
  inline bool has_amunition_type() const;
  inline void clear_amunition_type();
  static const int kAmunitionTypeFieldNumber = 2;
  inline ::google::protobuf::int32 amunition_type() const;
  inline void set_amunition_type(::google::protobuf::int32 value);

  // optional int32 armor_type = 3;
  inline bool has_armor_type() const;
  inline void clear_armor_type();
  static const int kArmorTypeFieldNumber = 3;
  inline ::google::protobuf::int32 armor_type() const;
  inline void set_armor_type(::google::protobuf::int32 value);

  // optional int32 weapon_type = 4;
  inline bool has_weapon_type() const;
  inline void clear_weapon_type();
  static const int kWeaponTypeFieldNumber = 4;
  inline ::google::protobuf::int32 weapon_type() const;
  inline void set_weapon_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:amarlon.ItemTypeData)
 private:
  inline void set_has_category();
  inline void clear_has_category();
  inline void set_has_amunition_type();
  inline void clear_has_amunition_type();
  inline void set_has_armor_type();
  inline void clear_has_armor_type();
  inline void set_has_weapon_type();
  inline void clear_has_weapon_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 category_;
  ::google::protobuf::int32 amunition_type_;
  ::google::protobuf::int32 armor_type_;
  ::google::protobuf::int32 weapon_type_;
  friend void  protobuf_AddDesc_item_5ftype_2eproto();
  friend void protobuf_AssignDesc_item_5ftype_2eproto();
  friend void protobuf_ShutdownFile_item_5ftype_2eproto();

  void InitAsDefaultInstance();
  static ItemTypeData* default_instance_;
};
// ===================================================================


// ===================================================================

// ItemTypeData

// optional int32 category = 1;
inline bool ItemTypeData::has_category() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ItemTypeData::set_has_category() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ItemTypeData::clear_has_category() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ItemTypeData::clear_category() {
  category_ = 0;
  clear_has_category();
}
inline ::google::protobuf::int32 ItemTypeData::category() const {
  // @@protoc_insertion_point(field_get:amarlon.ItemTypeData.category)
  return category_;
}
inline void ItemTypeData::set_category(::google::protobuf::int32 value) {
  set_has_category();
  category_ = value;
  // @@protoc_insertion_point(field_set:amarlon.ItemTypeData.category)
}

// optional int32 amunition_type = 2;
inline bool ItemTypeData::has_amunition_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ItemTypeData::set_has_amunition_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ItemTypeData::clear_has_amunition_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ItemTypeData::clear_amunition_type() {
  amunition_type_ = 0;
  clear_has_amunition_type();
}
inline ::google::protobuf::int32 ItemTypeData::amunition_type() const {
  // @@protoc_insertion_point(field_get:amarlon.ItemTypeData.amunition_type)
  return amunition_type_;
}
inline void ItemTypeData::set_amunition_type(::google::protobuf::int32 value) {
  set_has_amunition_type();
  amunition_type_ = value;
  // @@protoc_insertion_point(field_set:amarlon.ItemTypeData.amunition_type)
}

// optional int32 armor_type = 3;
inline bool ItemTypeData::has_armor_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ItemTypeData::set_has_armor_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ItemTypeData::clear_has_armor_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ItemTypeData::clear_armor_type() {
  armor_type_ = 0;
  clear_has_armor_type();
}
inline ::google::protobuf::int32 ItemTypeData::armor_type() const {
  // @@protoc_insertion_point(field_get:amarlon.ItemTypeData.armor_type)
  return armor_type_;
}
inline void ItemTypeData::set_armor_type(::google::protobuf::int32 value) {
  set_has_armor_type();
  armor_type_ = value;
  // @@protoc_insertion_point(field_set:amarlon.ItemTypeData.armor_type)
}

// optional int32 weapon_type = 4;
inline bool ItemTypeData::has_weapon_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ItemTypeData::set_has_weapon_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ItemTypeData::clear_has_weapon_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ItemTypeData::clear_weapon_type() {
  weapon_type_ = 0;
  clear_has_weapon_type();
}
inline ::google::protobuf::int32 ItemTypeData::weapon_type() const {
  // @@protoc_insertion_point(field_get:amarlon.ItemTypeData.weapon_type)
  return weapon_type_;
}
inline void ItemTypeData::set_weapon_type(::google::protobuf::int32 value) {
  set_has_weapon_type();
  weapon_type_ = value;
  // @@protoc_insertion_point(field_set:amarlon.ItemTypeData.weapon_type)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace amarlon

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_item_5ftype_2eproto__INCLUDED
