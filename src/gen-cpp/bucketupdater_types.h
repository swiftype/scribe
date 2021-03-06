/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef bucketupdater_TYPES_H
#define bucketupdater_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace scribe { namespace thrift {

typedef struct _BucketStoreMappingException__isset {
  _BucketStoreMappingException__isset() : message(false), code(false) {}
  bool message;
  bool code;
} _BucketStoreMappingException__isset;

class BucketStoreMappingException : public ::apache::thrift::TException {
 public:

  static const char* ascii_fingerprint; // = "EEBC915CE44901401D881E6091423036";
  static const uint8_t binary_fingerprint[16]; // = {0xEE,0xBC,0x91,0x5C,0xE4,0x49,0x01,0x40,0x1D,0x88,0x1E,0x60,0x91,0x42,0x30,0x36};

  BucketStoreMappingException() : message(), code(0) {
  }

  virtual ~BucketStoreMappingException() throw() {}

  std::string message;
  int32_t code;

  _BucketStoreMappingException__isset __isset;

  void __set_message(const std::string& val) {
    message = val;
  }

  void __set_code(const int32_t val) {
    code = val;
  }

  bool operator == (const BucketStoreMappingException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    if (!(code == rhs.code))
      return false;
    return true;
  }
  bool operator != (const BucketStoreMappingException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const BucketStoreMappingException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(BucketStoreMappingException &a, BucketStoreMappingException &b);

typedef struct _HostPort__isset {
  _HostPort__isset() : host(false), port(false) {}
  bool host;
  bool port;
} _HostPort__isset;

class HostPort {
 public:

  static const char* ascii_fingerprint; // = "9F26ABFF5EE2BE4AF3460CCCE66C6464";
  static const uint8_t binary_fingerprint[16]; // = {0x9F,0x26,0xAB,0xFF,0x5E,0xE2,0xBE,0x4A,0xF3,0x46,0x0C,0xCC,0xE6,0x6C,0x64,0x64};

  HostPort() : host(), port(0) {
  }

  virtual ~HostPort() throw() {}

  std::string host;
  int32_t port;

  _HostPort__isset __isset;

  void __set_host(const std::string& val) {
    host = val;
  }

  void __set_port(const int32_t val) {
    port = val;
  }

  bool operator == (const HostPort & rhs) const
  {
    if (!(host == rhs.host))
      return false;
    if (!(port == rhs.port))
      return false;
    return true;
  }
  bool operator != (const HostPort &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HostPort & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(HostPort &a, HostPort &b);

}} // namespace

#endif
