// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from websocket_client.djinni

#ifndef DJINNI_GENERATED_NJSWEBSOCKETCONNECTION_HPP
#define DJINNI_GENERATED_NJSWEBSOCKETCONNECTION_HPP


#include "../include/ErrorCode.hpp"
#include <cstdint>
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../include/WebSocketConnection.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSWebSocketConnection final {
public:

    static void Initialize(Local<Object> target);
    NJSWebSocketConnection() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::WebSocketConnection> &object);
    static Nan::Persistent<ObjectTemplate> WebSocketConnection_prototype;

private:
    static NAN_METHOD(onConnect);

    static NAN_METHOD(onClose);

    static NAN_METHOD(onMessage);

    static NAN_METHOD(onError);

    static NAN_METHOD(getConnectionId);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSWEBSOCKETCONNECTION_HPP
