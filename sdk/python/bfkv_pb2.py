# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: bfkv.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import bftrader_pb2 as bftrader__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='bfkv.proto',
  package='bftrader.bfkv',
  syntax='proto3',
  serialized_pb=_b('\n\nbfkv.proto\x12\rbftrader.bfkv\x1a\x0e\x62\x66trader.proto2\xa7\x01\n\x0b\x42\x66KvService\x12\x34\n\x04Ping\x12\x14.bftrader.BfPingData\x1a\x14.bftrader.BfPingData\"\x00\x12/\n\x05SetKv\x12\x12.bftrader.BfKvData\x1a\x10.bftrader.BfVoid\"\x00\x12\x31\n\x05GetKv\x12\x12.bftrader.BfKvData\x1a\x12.bftrader.BfKvData\"\x00\x62\x06proto3')
  ,
  dependencies=[bftrader__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)





import abc
from grpc.beta import implementations as beta_implementations
from grpc.framework.common import cardinality
from grpc.framework.interfaces.face import utilities as face_utilities

class BetaBfKvServiceServicer(object):
  """<fill me in later!>"""
  __metaclass__ = abc.ABCMeta
  @abc.abstractmethod
  def Ping(self, request, context):
    raise NotImplementedError()
  @abc.abstractmethod
  def SetKv(self, request, context):
    raise NotImplementedError()
  @abc.abstractmethod
  def GetKv(self, request, context):
    raise NotImplementedError()

class BetaBfKvServiceStub(object):
  """The interface to which stubs will conform."""
  __metaclass__ = abc.ABCMeta
  @abc.abstractmethod
  def Ping(self, request, timeout):
    raise NotImplementedError()
  Ping.future = None
  @abc.abstractmethod
  def SetKv(self, request, timeout):
    raise NotImplementedError()
  SetKv.future = None
  @abc.abstractmethod
  def GetKv(self, request, timeout):
    raise NotImplementedError()
  GetKv.future = None

def beta_create_BfKvService_server(servicer, pool=None, pool_size=None, default_timeout=None, maximum_timeout=None):
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  request_deserializers = {
    ('bftrader.bfkv.BfKvService', 'GetKv'): bftrader_pb2.BfKvData.FromString,
    ('bftrader.bfkv.BfKvService', 'Ping'): bftrader_pb2.BfPingData.FromString,
    ('bftrader.bfkv.BfKvService', 'SetKv'): bftrader_pb2.BfKvData.FromString,
  }
  response_serializers = {
    ('bftrader.bfkv.BfKvService', 'GetKv'): bftrader_pb2.BfKvData.SerializeToString,
    ('bftrader.bfkv.BfKvService', 'Ping'): bftrader_pb2.BfPingData.SerializeToString,
    ('bftrader.bfkv.BfKvService', 'SetKv'): bftrader_pb2.BfVoid.SerializeToString,
  }
  method_implementations = {
    ('bftrader.bfkv.BfKvService', 'GetKv'): face_utilities.unary_unary_inline(servicer.GetKv),
    ('bftrader.bfkv.BfKvService', 'Ping'): face_utilities.unary_unary_inline(servicer.Ping),
    ('bftrader.bfkv.BfKvService', 'SetKv'): face_utilities.unary_unary_inline(servicer.SetKv),
  }
  server_options = beta_implementations.server_options(request_deserializers=request_deserializers, response_serializers=response_serializers, thread_pool=pool, thread_pool_size=pool_size, default_timeout=default_timeout, maximum_timeout=maximum_timeout)
  return beta_implementations.server(method_implementations, options=server_options)

def beta_create_BfKvService_stub(channel, host=None, metadata_transformer=None, pool=None, pool_size=None):
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  import bftrader_pb2
  request_serializers = {
    ('bftrader.bfkv.BfKvService', 'GetKv'): bftrader_pb2.BfKvData.SerializeToString,
    ('bftrader.bfkv.BfKvService', 'Ping'): bftrader_pb2.BfPingData.SerializeToString,
    ('bftrader.bfkv.BfKvService', 'SetKv'): bftrader_pb2.BfKvData.SerializeToString,
  }
  response_deserializers = {
    ('bftrader.bfkv.BfKvService', 'GetKv'): bftrader_pb2.BfKvData.FromString,
    ('bftrader.bfkv.BfKvService', 'Ping'): bftrader_pb2.BfPingData.FromString,
    ('bftrader.bfkv.BfKvService', 'SetKv'): bftrader_pb2.BfVoid.FromString,
  }
  cardinalities = {
    'GetKv': cardinality.Cardinality.UNARY_UNARY,
    'Ping': cardinality.Cardinality.UNARY_UNARY,
    'SetKv': cardinality.Cardinality.UNARY_UNARY,
  }
  stub_options = beta_implementations.stub_options(host=host, metadata_transformer=metadata_transformer, request_serializers=request_serializers, response_deserializers=response_deserializers, thread_pool=pool, thread_pool_size=pool_size)
  return beta_implementations.dynamic_stub(channel, 'bftrader.bfkv.BfKvService', cardinalities, options=stub_options)
# @@protoc_insertion_point(module_scope)
