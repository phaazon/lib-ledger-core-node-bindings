// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSAMOUNTLISTCALLBACK_HPP
#define DJINNI_GENERATED_NJSAMOUNTLISTCALLBACK_HPP


#include "../include/../utils/optional.hpp"
#include "../include/Amount.hpp"
#include "../include/Error.hpp"
#include "NJSAmountCpp.hpp"
#include <memory>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/AmountListCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSAmountListCallback: public ledger::core::api::AmountListCallback {
public:

    static void Initialize(Local<Object> target);
    ~NJSAmountListCallback()
    {
        pers_resolver.Reset();
    };
    NJSAmountListCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete
     * @params result optional of type list<T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(const std::experimental::optional<std::vector<std::shared_ptr<Amount>>> & result, const std::experimental::optional<Error> & error);

private:
    /**
     * Method triggered when main task complete
     * @params result optional of type list<T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    static NAN_METHOD(onCallback);

    static NAN_METHOD(New);

    Nan::Persistent<Promise::Resolver> pers_resolver;
};
#endif //DJINNI_GENERATED_NJSAMOUNTLISTCALLBACK_HPP
