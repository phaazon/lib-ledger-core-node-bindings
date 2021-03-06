// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSBOOLCALLBACK_HPP
#define DJINNI_GENERATED_NJSBOOLCALLBACK_HPP


#include "../include/../utils/optional.hpp"
#include "../include/Error.hpp"

#include <nan.h>
#include <node.h>
#include "../include/BoolCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBoolCallback: public ledger::core::api::BoolCallback {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::BoolCallback> &object);
    static Nan::Persistent<ObjectTemplate> BoolCallback_prototype;
    ~NJSBoolCallback()
    {
        pers_resolver.Reset();
    };
    NJSBoolCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete.
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(std::experimental::optional<bool> result, const std::experimental::optional<::ledger::core::api::Error> & error);

private:
    /**
     * Method triggered when main task complete.
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    static NAN_METHOD(onCallback);

    static NAN_METHOD(New);

    Nan::Persistent<Promise::Resolver> pers_resolver;
};
#endif //DJINNI_GENERATED_NJSBOOLCALLBACK_HPP
