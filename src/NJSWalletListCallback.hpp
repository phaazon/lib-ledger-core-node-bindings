// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSWALLETLISTCALLBACK_HPP
#define DJINNI_GENERATED_NJSWALLETLISTCALLBACK_HPP


#include "../include/../utils/optional.hpp"
#include "../include/Error.hpp"
#include "../include/Wallet.hpp"
#include "NJSWalletCpp.hpp"
#include <memory>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/WalletListCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSWalletListCallback: public ledger::core::api::WalletListCallback {
public:

    static void Initialize(Local<Object> target);
    ~NJSWalletListCallback()
    {
        pers_resolver.Reset();
    };
    NJSWalletListCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete
     * @params result optional of type list<T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(const std::experimental::optional<std::vector<std::shared_ptr<Wallet>>> & result, const std::experimental::optional<Error> & error);

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
#endif //DJINNI_GENERATED_NJSWALLETLISTCALLBACK_HPP
