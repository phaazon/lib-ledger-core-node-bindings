// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSBIGINTLISTCALLBACK_HPP
#define DJINNI_GENERATED_NJSBIGINTLISTCALLBACK_HPP


#include "../include/../utils/optional.hpp"
#include "../include/BigInt.hpp"
#include "../include/Error.hpp"
#include "NJSBigIntCpp.hpp"
#include <memory>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/BigIntListCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBigIntListCallback: public ledger::core::api::BigIntListCallback {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::BigIntListCallback> &object);
    static Nan::Persistent<ObjectTemplate> BigIntListCallback_prototype;
    ~NJSBigIntListCallback()
    {
        pers_resolver.Reset();
    };
    NJSBigIntListCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete.
     * @params result optional of type list<T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(const std::experimental::optional<std::vector<std::shared_ptr<::ledger::core::api::BigInt>>> & result, const std::experimental::optional<::ledger::core::api::Error> & error);

private:
    /**
     * Method triggered when main task complete.
     * @params result optional of type list<T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    static NAN_METHOD(onCallback);

    static NAN_METHOD(New);

    Nan::Persistent<Promise::Resolver> pers_resolver;
};
#endif //DJINNI_GENERATED_NJSBIGINTLISTCALLBACK_HPP
