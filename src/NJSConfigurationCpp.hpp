// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#ifndef DJINNI_GENERATED_NJSCONFIGURATION_HPP
#define DJINNI_GENERATED_NJSCONFIGURATION_HPP


#include <memory>

#include <nan.h>
#include <node.h>
#include "../include/Configuration.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSConfiguration final {
public:

    static void Initialize(Local<Object> target);
    NJSConfiguration() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::Configuration> &object);
    static Nan::Persistent<ObjectTemplate> Configuration_prototype;

private:
    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSCONFIGURATION_HPP
