// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: bfproxy.proto
#ifndef GRPC_bfproxy_2eproto__INCLUDED
#define GRPC_bfproxy_2eproto__INCLUDED

#include "bfproxy.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace bftrader {
namespace bfproxy {

class BfProxyService GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status OnPing(::grpc::ClientContext* context, const ::bftrader::BfPingData& request, ::bftrader::BfPingData* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfPingData>> AsyncOnPing(::grpc::ClientContext* context, const ::bftrader::BfPingData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfPingData>>(AsyncOnPingRaw(context, request, cq));
    }
    virtual ::grpc::Status OnTradeWillBegin(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncOnTradeWillBegin(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncOnTradeWillBeginRaw(context, request, cq));
    }
    virtual ::grpc::Status OnGotContracts(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncOnGotContracts(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncOnGotContractsRaw(context, request, cq));
    }
    virtual ::grpc::Status OnTick(::grpc::ClientContext* context, const ::bftrader::BfTickData& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncOnTick(::grpc::ClientContext* context, const ::bftrader::BfTickData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncOnTickRaw(context, request, cq));
    }
    virtual ::grpc::Status OnError(::grpc::ClientContext* context, const ::bftrader::BfErrorData& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncOnError(::grpc::ClientContext* context, const ::bftrader::BfErrorData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncOnErrorRaw(context, request, cq));
    }
    virtual ::grpc::Status OnLog(::grpc::ClientContext* context, const ::bftrader::BfLogData& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncOnLog(::grpc::ClientContext* context, const ::bftrader::BfLogData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncOnLogRaw(context, request, cq));
    }
    virtual ::grpc::Status OnTrade(::grpc::ClientContext* context, const ::bftrader::BfTradeData& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncOnTrade(::grpc::ClientContext* context, const ::bftrader::BfTradeData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncOnTradeRaw(context, request, cq));
    }
    virtual ::grpc::Status OnOrder(::grpc::ClientContext* context, const ::bftrader::BfOrderData& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncOnOrder(::grpc::ClientContext* context, const ::bftrader::BfOrderData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncOnOrderRaw(context, request, cq));
    }
    virtual ::grpc::Status OnPosition(::grpc::ClientContext* context, const ::bftrader::BfPositionData& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncOnPosition(::grpc::ClientContext* context, const ::bftrader::BfPositionData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncOnPositionRaw(context, request, cq));
    }
    virtual ::grpc::Status OnAccount(::grpc::ClientContext* context, const ::bftrader::BfAccountData& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncOnAccount(::grpc::ClientContext* context, const ::bftrader::BfAccountData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncOnAccountRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfPingData>* AsyncOnPingRaw(::grpc::ClientContext* context, const ::bftrader::BfPingData& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncOnTradeWillBeginRaw(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncOnGotContractsRaw(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncOnTickRaw(::grpc::ClientContext* context, const ::bftrader::BfTickData& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncOnErrorRaw(::grpc::ClientContext* context, const ::bftrader::BfErrorData& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncOnLogRaw(::grpc::ClientContext* context, const ::bftrader::BfLogData& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncOnTradeRaw(::grpc::ClientContext* context, const ::bftrader::BfTradeData& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncOnOrderRaw(::grpc::ClientContext* context, const ::bftrader::BfOrderData& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncOnPositionRaw(::grpc::ClientContext* context, const ::bftrader::BfPositionData& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncOnAccountRaw(::grpc::ClientContext* context, const ::bftrader::BfAccountData& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status OnPing(::grpc::ClientContext* context, const ::bftrader::BfPingData& request, ::bftrader::BfPingData* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfPingData>> AsyncOnPing(::grpc::ClientContext* context, const ::bftrader::BfPingData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfPingData>>(AsyncOnPingRaw(context, request, cq));
    }
    ::grpc::Status OnTradeWillBegin(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncOnTradeWillBegin(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncOnTradeWillBeginRaw(context, request, cq));
    }
    ::grpc::Status OnGotContracts(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncOnGotContracts(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncOnGotContractsRaw(context, request, cq));
    }
    ::grpc::Status OnTick(::grpc::ClientContext* context, const ::bftrader::BfTickData& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncOnTick(::grpc::ClientContext* context, const ::bftrader::BfTickData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncOnTickRaw(context, request, cq));
    }
    ::grpc::Status OnError(::grpc::ClientContext* context, const ::bftrader::BfErrorData& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncOnError(::grpc::ClientContext* context, const ::bftrader::BfErrorData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncOnErrorRaw(context, request, cq));
    }
    ::grpc::Status OnLog(::grpc::ClientContext* context, const ::bftrader::BfLogData& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncOnLog(::grpc::ClientContext* context, const ::bftrader::BfLogData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncOnLogRaw(context, request, cq));
    }
    ::grpc::Status OnTrade(::grpc::ClientContext* context, const ::bftrader::BfTradeData& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncOnTrade(::grpc::ClientContext* context, const ::bftrader::BfTradeData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncOnTradeRaw(context, request, cq));
    }
    ::grpc::Status OnOrder(::grpc::ClientContext* context, const ::bftrader::BfOrderData& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncOnOrder(::grpc::ClientContext* context, const ::bftrader::BfOrderData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncOnOrderRaw(context, request, cq));
    }
    ::grpc::Status OnPosition(::grpc::ClientContext* context, const ::bftrader::BfPositionData& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncOnPosition(::grpc::ClientContext* context, const ::bftrader::BfPositionData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncOnPositionRaw(context, request, cq));
    }
    ::grpc::Status OnAccount(::grpc::ClientContext* context, const ::bftrader::BfAccountData& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncOnAccount(::grpc::ClientContext* context, const ::bftrader::BfAccountData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncOnAccountRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfPingData>* AsyncOnPingRaw(::grpc::ClientContext* context, const ::bftrader::BfPingData& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncOnTradeWillBeginRaw(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncOnGotContractsRaw(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncOnTickRaw(::grpc::ClientContext* context, const ::bftrader::BfTickData& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncOnErrorRaw(::grpc::ClientContext* context, const ::bftrader::BfErrorData& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncOnLogRaw(::grpc::ClientContext* context, const ::bftrader::BfLogData& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncOnTradeRaw(::grpc::ClientContext* context, const ::bftrader::BfTradeData& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncOnOrderRaw(::grpc::ClientContext* context, const ::bftrader::BfOrderData& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncOnPositionRaw(::grpc::ClientContext* context, const ::bftrader::BfPositionData& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncOnAccountRaw(::grpc::ClientContext* context, const ::bftrader::BfAccountData& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_OnPing_;
    const ::grpc::RpcMethod rpcmethod_OnTradeWillBegin_;
    const ::grpc::RpcMethod rpcmethod_OnGotContracts_;
    const ::grpc::RpcMethod rpcmethod_OnTick_;
    const ::grpc::RpcMethod rpcmethod_OnError_;
    const ::grpc::RpcMethod rpcmethod_OnLog_;
    const ::grpc::RpcMethod rpcmethod_OnTrade_;
    const ::grpc::RpcMethod rpcmethod_OnOrder_;
    const ::grpc::RpcMethod rpcmethod_OnPosition_;
    const ::grpc::RpcMethod rpcmethod_OnAccount_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status OnPing(::grpc::ServerContext* context, const ::bftrader::BfPingData* request, ::bftrader::BfPingData* response);
    virtual ::grpc::Status OnTradeWillBegin(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status OnGotContracts(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status OnTick(::grpc::ServerContext* context, const ::bftrader::BfTickData* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status OnError(::grpc::ServerContext* context, const ::bftrader::BfErrorData* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status OnLog(::grpc::ServerContext* context, const ::bftrader::BfLogData* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status OnTrade(::grpc::ServerContext* context, const ::bftrader::BfTradeData* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status OnOrder(::grpc::ServerContext* context, const ::bftrader::BfOrderData* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status OnPosition(::grpc::ServerContext* context, const ::bftrader::BfPositionData* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status OnAccount(::grpc::ServerContext* context, const ::bftrader::BfAccountData* request, ::bftrader::BfVoid* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_OnPing : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_OnPing() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_OnPing() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnPing(::grpc::ServerContext* context, const ::bftrader::BfPingData* request, ::bftrader::BfPingData* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestOnPing(::grpc::ServerContext* context, ::bftrader::BfPingData* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfPingData>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_OnTradeWillBegin : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_OnTradeWillBegin() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_OnTradeWillBegin() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnTradeWillBegin(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestOnTradeWillBegin(::grpc::ServerContext* context, ::bftrader::BfVoid* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_OnGotContracts : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_OnGotContracts() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_OnGotContracts() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnGotContracts(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestOnGotContracts(::grpc::ServerContext* context, ::bftrader::BfVoid* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_OnTick : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_OnTick() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_OnTick() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnTick(::grpc::ServerContext* context, const ::bftrader::BfTickData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestOnTick(::grpc::ServerContext* context, ::bftrader::BfTickData* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_OnError : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_OnError() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_OnError() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnError(::grpc::ServerContext* context, const ::bftrader::BfErrorData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestOnError(::grpc::ServerContext* context, ::bftrader::BfErrorData* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(4, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_OnLog : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_OnLog() {
      ::grpc::Service::MarkMethodAsync(5);
    }
    ~WithAsyncMethod_OnLog() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnLog(::grpc::ServerContext* context, const ::bftrader::BfLogData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestOnLog(::grpc::ServerContext* context, ::bftrader::BfLogData* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(5, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_OnTrade : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_OnTrade() {
      ::grpc::Service::MarkMethodAsync(6);
    }
    ~WithAsyncMethod_OnTrade() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnTrade(::grpc::ServerContext* context, const ::bftrader::BfTradeData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestOnTrade(::grpc::ServerContext* context, ::bftrader::BfTradeData* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(6, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_OnOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_OnOrder() {
      ::grpc::Service::MarkMethodAsync(7);
    }
    ~WithAsyncMethod_OnOrder() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnOrder(::grpc::ServerContext* context, const ::bftrader::BfOrderData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestOnOrder(::grpc::ServerContext* context, ::bftrader::BfOrderData* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(7, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_OnPosition : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_OnPosition() {
      ::grpc::Service::MarkMethodAsync(8);
    }
    ~WithAsyncMethod_OnPosition() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnPosition(::grpc::ServerContext* context, const ::bftrader::BfPositionData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestOnPosition(::grpc::ServerContext* context, ::bftrader::BfPositionData* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(8, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_OnAccount : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_OnAccount() {
      ::grpc::Service::MarkMethodAsync(9);
    }
    ~WithAsyncMethod_OnAccount() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnAccount(::grpc::ServerContext* context, const ::bftrader::BfAccountData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestOnAccount(::grpc::ServerContext* context, ::bftrader::BfAccountData* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(9, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_OnPing<WithAsyncMethod_OnTradeWillBegin<WithAsyncMethod_OnGotContracts<WithAsyncMethod_OnTick<WithAsyncMethod_OnError<WithAsyncMethod_OnLog<WithAsyncMethod_OnTrade<WithAsyncMethod_OnOrder<WithAsyncMethod_OnPosition<WithAsyncMethod_OnAccount<Service > > > > > > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_OnPing : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_OnPing() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_OnPing() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnPing(::grpc::ServerContext* context, const ::bftrader::BfPingData* request, ::bftrader::BfPingData* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_OnTradeWillBegin : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_OnTradeWillBegin() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_OnTradeWillBegin() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnTradeWillBegin(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_OnGotContracts : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_OnGotContracts() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_OnGotContracts() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnGotContracts(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_OnTick : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_OnTick() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_OnTick() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnTick(::grpc::ServerContext* context, const ::bftrader::BfTickData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_OnError : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_OnError() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_OnError() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnError(::grpc::ServerContext* context, const ::bftrader::BfErrorData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_OnLog : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_OnLog() {
      ::grpc::Service::MarkMethodGeneric(5);
    }
    ~WithGenericMethod_OnLog() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnLog(::grpc::ServerContext* context, const ::bftrader::BfLogData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_OnTrade : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_OnTrade() {
      ::grpc::Service::MarkMethodGeneric(6);
    }
    ~WithGenericMethod_OnTrade() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnTrade(::grpc::ServerContext* context, const ::bftrader::BfTradeData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_OnOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_OnOrder() {
      ::grpc::Service::MarkMethodGeneric(7);
    }
    ~WithGenericMethod_OnOrder() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnOrder(::grpc::ServerContext* context, const ::bftrader::BfOrderData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_OnPosition : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_OnPosition() {
      ::grpc::Service::MarkMethodGeneric(8);
    }
    ~WithGenericMethod_OnPosition() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnPosition(::grpc::ServerContext* context, const ::bftrader::BfPositionData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_OnAccount : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_OnAccount() {
      ::grpc::Service::MarkMethodGeneric(9);
    }
    ~WithGenericMethod_OnAccount() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status OnAccount(::grpc::ServerContext* context, const ::bftrader::BfAccountData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace bfproxy
}  // namespace bftrader


#endif  // GRPC_bfproxy_2eproto__INCLUDED
