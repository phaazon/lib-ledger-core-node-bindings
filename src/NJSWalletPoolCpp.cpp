// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_pool.djinni

#include "NJSWalletPoolCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSWalletPool::newInstance) {

    //Check if method called with right number of arguments
    if(info.Length() != 10)
    {
        return Nan::ThrowError("NJSWalletPool::newInstance needs 10 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    auto arg_1 = std::experimental::optional<std::string>();
    if(!info[1]->IsNull() && !info[1]->IsUndefined())
    {
        String::Utf8Value string_opt_arg_1(info[1]->ToString());
        auto opt_arg_1 = std::string(*string_opt_arg_1);
        arg_1.emplace(opt_arg_1);
    }

    Local<Object> njs_arg_2 = info[2]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_2 = djinni::js::ObjectWrapper<HttpClient>::Unwrap(njs_arg_2);

    Local<Object> njs_arg_3 = info[3]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_3 = djinni::js::ObjectWrapper<WebSocketClient>::Unwrap(njs_arg_3);

    Local<Object> njs_arg_4 = info[4]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_4 = djinni::js::ObjectWrapper<PathResolver>::Unwrap(njs_arg_4);

    Local<Object> njs_arg_5 = info[5]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_5 = djinni::js::ObjectWrapper<LogPrinter>::Unwrap(njs_arg_5);

    Local<Object> njs_arg_6 = info[6]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_6 = djinni::js::ObjectWrapper<ThreadDispatcher>::Unwrap(njs_arg_6);

    Local<Object> njs_arg_7 = info[7]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_7 = djinni::js::ObjectWrapper<RandomNumberGenerator>::Unwrap(njs_arg_7);

    Local<Object> njs_arg_8 = info[8]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_8 = djinni::js::ObjectWrapper<DatabaseBackend>::Unwrap(njs_arg_8);
    if(!arg_8)
    {
        return Nan::ThrowError("NodeJs Object to NJSDatabaseBackend failed");
    }

    Local<Object> njs_arg_9 = info[9]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_9 = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(njs_arg_9);
    if(!arg_9)
    {
        return Nan::ThrowError("NodeJs Object to NJSDynamicObject failed");
    }


    auto result = WalletPool::newInstance(arg_0,arg_1,arg_2,arg_3,arg_4,arg_5,arg_6,arg_7,arg_8,arg_9);

    //Wrap result in node object
    auto arg_10 = NJSWalletPool::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_10);
}
NAN_METHOD(NJSWalletPool::getLogger) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWalletPool::getLogger needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<WalletPool>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getLogger : implementation of WalletPool is not valid");
    }

    auto result = cpp_impl->getLogger();

    //Wrap result in node object
    auto arg_0 = NJSLogger::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWalletPool::getName) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWalletPool::getName needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<WalletPool>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getName : implementation of WalletPool is not valid");
    }

    auto result = cpp_impl->getName();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWalletPool::getPreferences) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWalletPool::getPreferences needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<WalletPool>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getPreferences : implementation of WalletPool is not valid");
    }

    auto result = cpp_impl->getPreferences();

    //Wrap result in node object
    auto arg_0 = NJSPreferences::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWalletPool::getWalletCount) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWalletPool::getWalletCount needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callback
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSI32Callback *njs_ptr_arg_0 = new NJSI32Callback(arg_0_resolver);
    std::shared_ptr<NJSI32Callback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<WalletPool>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getWalletCount : implementation of WalletPool is not valid");
    }
    cpp_impl->getWalletCount(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSWalletPool::getWallets) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSWalletPool::getWallets needs 2 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();
    auto arg_1 = Nan::To<int32_t>(info[1]).FromJust();

    //Create promise and set it into Callback
    auto arg_2_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSWalletListCallback *njs_ptr_arg_2 = new NJSWalletListCallback(arg_2_resolver);
    std::shared_ptr<NJSWalletListCallback> arg_2(njs_ptr_arg_2);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<WalletPool>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getWallets : implementation of WalletPool is not valid");
    }
    cpp_impl->getWallets(arg_0,arg_1,arg_2);
    info.GetReturnValue().Set(arg_2_resolver->GetPromise());
}
NAN_METHOD(NJSWalletPool::getWallet) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWalletPool::getWallet needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Create promise and set it into Callback
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSWalletCallback *njs_ptr_arg_1 = new NJSWalletCallback(arg_1_resolver);
    std::shared_ptr<NJSWalletCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<WalletPool>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getWallet : implementation of WalletPool is not valid");
    }
    cpp_impl->getWallet(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSWalletPool::createWallet) {

    //Check if method called with right number of arguments
    if(info.Length() != 3)
    {
        return Nan::ThrowError("NJSWalletPool::createWallet needs 3 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    auto field_arg_1_1 = Nan::Get(info[1]->ToObject(), Nan::New<String>("walletType").ToLocalChecked()).ToLocalChecked();
    auto arg_1_1 = (ledger::core::api::WalletType)Nan::To<int>(field_arg_1_1).FromJust();

    auto field_arg_1_2 = Nan::Get(info[1]->ToObject(), Nan::New<String>("name").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_1_2(field_arg_1_2->ToString());
    auto arg_1_2 = std::string(*string_arg_1_2);

    auto field_arg_1_3 = Nan::Get(info[1]->ToObject(), Nan::New<String>("bip44CoinType").ToLocalChecked()).ToLocalChecked();
    auto arg_1_3 = Nan::To<int32_t>(field_arg_1_3).FromJust();

    auto field_arg_1_4 = Nan::Get(info[1]->ToObject(), Nan::New<String>("paymentUriScheme").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_1_4(field_arg_1_4->ToString());
    auto arg_1_4 = std::string(*string_arg_1_4);

    auto field_arg_1_5 = Nan::Get(info[1]->ToObject(), Nan::New<String>("units").ToLocalChecked()).ToLocalChecked();
    vector<CurrencyUnit> arg_1_5;
    Local<Array> arg_1_5_container = Local<Array>::Cast(field_arg_1_5);
    for(uint32_t arg_1_5_id = 0; arg_1_5_id < arg_1_5_container->Length(); arg_1_5_id++)
    {
        if(arg_1_5_container->Get(arg_1_5_id)->IsObject())
        {

            auto field_arg_1_5_elem_1 = Nan::Get(arg_1_5_container->Get(arg_1_5_id)->ToObject(), Nan::New<String>("name").ToLocalChecked()).ToLocalChecked();
            String::Utf8Value string_arg_1_5_elem_1(field_arg_1_5_elem_1->ToString());
            auto arg_1_5_elem_1 = std::string(*string_arg_1_5_elem_1);

            auto field_arg_1_5_elem_2 = Nan::Get(arg_1_5_container->Get(arg_1_5_id)->ToObject(), Nan::New<String>("symbol").ToLocalChecked()).ToLocalChecked();
            String::Utf8Value string_arg_1_5_elem_2(field_arg_1_5_elem_2->ToString());
            auto arg_1_5_elem_2 = std::string(*string_arg_1_5_elem_2);

            auto field_arg_1_5_elem_3 = Nan::Get(arg_1_5_container->Get(arg_1_5_id)->ToObject(), Nan::New<String>("code").ToLocalChecked()).ToLocalChecked();
            String::Utf8Value string_arg_1_5_elem_3(field_arg_1_5_elem_3->ToString());
            auto arg_1_5_elem_3 = std::string(*string_arg_1_5_elem_3);

            auto field_arg_1_5_elem_4 = Nan::Get(arg_1_5_container->Get(arg_1_5_id)->ToObject(), Nan::New<String>("numberOfDecimal").ToLocalChecked()).ToLocalChecked();
            auto arg_1_5_elem_4 = Nan::To<int32_t>(field_arg_1_5_elem_4).FromJust();
            CurrencyUnit arg_1_5_elem(arg_1_5_elem_1, arg_1_5_elem_2, arg_1_5_elem_3, arg_1_5_elem_4);

            arg_1_5.emplace_back(arg_1_5_elem);
        }
    }


    auto field_arg_1_6 = Nan::Get(info[1]->ToObject(), Nan::New<String>("bitcoinLikeNetworkParameters").ToLocalChecked()).ToLocalChecked();
    auto arg_1_6 = std::experimental::optional<BitcoinLikeNetworkParameters>();
    if(!field_arg_1_6->IsNull() && !field_arg_1_6->IsUndefined())
    {

        auto field_opt_arg_1_6_1 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("Identifier").ToLocalChecked()).ToLocalChecked();
        String::Utf8Value string_opt_arg_1_6_1(field_opt_arg_1_6_1->ToString());
        auto opt_arg_1_6_1 = std::string(*string_opt_arg_1_6_1);

        auto field_opt_arg_1_6_2 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("P2PKHVersion").ToLocalChecked()).ToLocalChecked();
        vector<uint8_t> opt_arg_1_6_2;
        Local<Array> opt_arg_1_6_2_container = Local<Array>::Cast(field_opt_arg_1_6_2);
        for(uint32_t opt_arg_1_6_2_id = 0; opt_arg_1_6_2_id < opt_arg_1_6_2_container->Length(); opt_arg_1_6_2_id++)
        {
            if(opt_arg_1_6_2_container->Get(opt_arg_1_6_2_id)->IsUint32())
            {
                auto opt_arg_1_6_2_elem = Nan::To<uint32_t>(opt_arg_1_6_2_container->Get(opt_arg_1_6_2_id)).FromJust();
                opt_arg_1_6_2.emplace_back(opt_arg_1_6_2_elem);
            }
        }


        auto field_opt_arg_1_6_3 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("P2SHVersion").ToLocalChecked()).ToLocalChecked();
        vector<uint8_t> opt_arg_1_6_3;
        Local<Array> opt_arg_1_6_3_container = Local<Array>::Cast(field_opt_arg_1_6_3);
        for(uint32_t opt_arg_1_6_3_id = 0; opt_arg_1_6_3_id < opt_arg_1_6_3_container->Length(); opt_arg_1_6_3_id++)
        {
            if(opt_arg_1_6_3_container->Get(opt_arg_1_6_3_id)->IsUint32())
            {
                auto opt_arg_1_6_3_elem = Nan::To<uint32_t>(opt_arg_1_6_3_container->Get(opt_arg_1_6_3_id)).FromJust();
                opt_arg_1_6_3.emplace_back(opt_arg_1_6_3_elem);
            }
        }


        auto field_opt_arg_1_6_4 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("XPUBVersion").ToLocalChecked()).ToLocalChecked();
        vector<uint8_t> opt_arg_1_6_4;
        Local<Array> opt_arg_1_6_4_container = Local<Array>::Cast(field_opt_arg_1_6_4);
        for(uint32_t opt_arg_1_6_4_id = 0; opt_arg_1_6_4_id < opt_arg_1_6_4_container->Length(); opt_arg_1_6_4_id++)
        {
            if(opt_arg_1_6_4_container->Get(opt_arg_1_6_4_id)->IsUint32())
            {
                auto opt_arg_1_6_4_elem = Nan::To<uint32_t>(opt_arg_1_6_4_container->Get(opt_arg_1_6_4_id)).FromJust();
                opt_arg_1_6_4.emplace_back(opt_arg_1_6_4_elem);
            }
        }


        auto field_opt_arg_1_6_5 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("FeePolicy").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_1_6_5 = (ledger::core::api::BitcoinLikeFeePolicy)Nan::To<int>(field_opt_arg_1_6_5).FromJust();

        auto field_opt_arg_1_6_6 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("DustAmount").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_1_6_6 = Nan::To<int64_t>(field_opt_arg_1_6_6).FromJust();

        auto field_opt_arg_1_6_7 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("MessagePrefix").ToLocalChecked()).ToLocalChecked();
        String::Utf8Value string_opt_arg_1_6_7(field_opt_arg_1_6_7->ToString());
        auto opt_arg_1_6_7 = std::string(*string_opt_arg_1_6_7);

        auto field_opt_arg_1_6_8 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("UsesTimestampedTransaction").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_1_6_8 = Nan::To<bool>(field_opt_arg_1_6_8).FromJust();

        auto field_opt_arg_1_6_9 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("TimestampDelay").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_1_6_9 = Nan::To<int64_t>(field_opt_arg_1_6_9).FromJust();

        auto field_opt_arg_1_6_10 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("SigHash").ToLocalChecked()).ToLocalChecked();
        vector<uint8_t> opt_arg_1_6_10;
        Local<Array> opt_arg_1_6_10_container = Local<Array>::Cast(field_opt_arg_1_6_10);
        for(uint32_t opt_arg_1_6_10_id = 0; opt_arg_1_6_10_id < opt_arg_1_6_10_container->Length(); opt_arg_1_6_10_id++)
        {
            if(opt_arg_1_6_10_container->Get(opt_arg_1_6_10_id)->IsUint32())
            {
                auto opt_arg_1_6_10_elem = Nan::To<uint32_t>(opt_arg_1_6_10_container->Get(opt_arg_1_6_10_id)).FromJust();
                opt_arg_1_6_10.emplace_back(opt_arg_1_6_10_elem);
            }
        }


        auto field_opt_arg_1_6_11 = Nan::Get(field_arg_1_6->ToObject(), Nan::New<String>("AdditionalBIPs").ToLocalChecked()).ToLocalChecked();
        vector<std::string> opt_arg_1_6_11;
        Local<Array> opt_arg_1_6_11_container = Local<Array>::Cast(field_opt_arg_1_6_11);
        for(uint32_t opt_arg_1_6_11_id = 0; opt_arg_1_6_11_id < opt_arg_1_6_11_container->Length(); opt_arg_1_6_11_id++)
        {
            if(opt_arg_1_6_11_container->Get(opt_arg_1_6_11_id)->IsString())
            {
                String::Utf8Value string_opt_arg_1_6_11_elem(opt_arg_1_6_11_container->Get(opt_arg_1_6_11_id)->ToString());
                auto opt_arg_1_6_11_elem = std::string(*string_opt_arg_1_6_11_elem);
                opt_arg_1_6_11.emplace_back(opt_arg_1_6_11_elem);
            }
        }

        BitcoinLikeNetworkParameters opt_arg_1_6(opt_arg_1_6_1, opt_arg_1_6_2, opt_arg_1_6_3, opt_arg_1_6_4, opt_arg_1_6_5, opt_arg_1_6_6, opt_arg_1_6_7, opt_arg_1_6_8, opt_arg_1_6_9, opt_arg_1_6_10, opt_arg_1_6_11);

        arg_1_6.emplace(opt_arg_1_6);
    }

    Currency arg_1(arg_1_1, arg_1_2, arg_1_3, arg_1_4, arg_1_5, arg_1_6);

    Local<Object> njs_arg_2 = info[2]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_2 = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(njs_arg_2);
    if(!arg_2)
    {
        return Nan::ThrowError("NodeJs Object to NJSDynamicObject failed");
    }


    //Create promise and set it into Callback
    auto arg_3_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSWalletCallback *njs_ptr_arg_3 = new NJSWalletCallback(arg_3_resolver);
    std::shared_ptr<NJSWalletCallback> arg_3(njs_ptr_arg_3);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<WalletPool>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::createWallet : implementation of WalletPool is not valid");
    }
    cpp_impl->createWallet(arg_0,arg_1,arg_2,arg_3);
    info.GetReturnValue().Set(arg_3_resolver->GetPromise());
}
NAN_METHOD(NJSWalletPool::getCurrencies) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWalletPool::getCurrencies needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callback
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSCurrencyListCallback *njs_ptr_arg_0 = new NJSCurrencyListCallback(arg_0_resolver);
    std::shared_ptr<NJSCurrencyListCallback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<WalletPool>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getCurrencies : implementation of WalletPool is not valid");
    }
    cpp_impl->getCurrencies(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSWalletPool::getCurrency) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWalletPool::getCurrency needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Create promise and set it into Callback
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSCurrencyCallback *njs_ptr_arg_1 = new NJSCurrencyCallback(arg_1_resolver);
    std::shared_ptr<NJSCurrencyCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<WalletPool>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getCurrency : implementation of WalletPool is not valid");
    }
    cpp_impl->getCurrency(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSWalletPool::getLastBlock) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWalletPool::getLastBlock needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Create promise and set it into Callback
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBlockCallback *njs_ptr_arg_1 = new NJSBlockCallback(arg_1_resolver);
    std::shared_ptr<NJSBlockCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<WalletPool>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getLastBlock : implementation of WalletPool is not valid");
    }
    cpp_impl->getLastBlock(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSWalletPool::getEventBus) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSWalletPool::getEventBus needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<WalletPool>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::getEventBus : implementation of WalletPool is not valid");
    }

    auto result = cpp_impl->getEventBus();

    //Wrap result in node object
    auto arg_0 = NJSEventBus::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSWalletPool::eraseDataSince) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSWalletPool::eraseDataSince needs 1 arguments");
    }

    //Check if parameters have correct types
    auto time_arg_0 = Nan::To<int32_t>(info[0]).FromJust();
    auto arg_0 = chrono::system_clock::time_point(chrono::milliseconds(time_arg_0));

    //Create promise and set it into Callback
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSErrorCodeCallback *njs_ptr_arg_1 = new NJSErrorCodeCallback(arg_1_resolver);
    std::shared_ptr<NJSErrorCodeCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<WalletPool>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSWalletPool::eraseDataSince : implementation of WalletPool is not valid");
    }
    cpp_impl->eraseDataSince(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}

NAN_METHOD(NJSWalletPool::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSWalletPool function can only be called as constructor (use New)");
    }

    //Check if NJSWalletPool::New called with right number of arguments
    if(info.Length() != 10)
    {
        return Nan::ThrowError("NJSWalletPool::New needs same number of arguments as ledger::core::api::WalletPool::newInstance method");
    }

    //Unwrap objects to get C++ classes
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    auto arg_1 = std::experimental::optional<std::string>();
    if(!info[1]->IsNull() && !info[1]->IsUndefined())
    {
        String::Utf8Value string_opt_arg_1(info[1]->ToString());
        auto opt_arg_1 = std::string(*string_opt_arg_1);
        arg_1.emplace(opt_arg_1);
    }

    Local<Object> njs_arg_2 = info[2]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_2 = djinni::js::ObjectWrapper<HttpClient>::Unwrap(njs_arg_2);

    Local<Object> njs_arg_3 = info[3]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_3 = djinni::js::ObjectWrapper<WebSocketClient>::Unwrap(njs_arg_3);

    Local<Object> njs_arg_4 = info[4]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_4 = djinni::js::ObjectWrapper<PathResolver>::Unwrap(njs_arg_4);

    Local<Object> njs_arg_5 = info[5]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_5 = djinni::js::ObjectWrapper<LogPrinter>::Unwrap(njs_arg_5);

    Local<Object> njs_arg_6 = info[6]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_6 = djinni::js::ObjectWrapper<ThreadDispatcher>::Unwrap(njs_arg_6);

    Local<Object> njs_arg_7 = info[7]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_7 = djinni::js::ObjectWrapper<RandomNumberGenerator>::Unwrap(njs_arg_7);

    Local<Object> njs_arg_8 = info[8]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_8 = djinni::js::ObjectWrapper<DatabaseBackend>::Unwrap(njs_arg_8);
    if(!arg_8)
    {
        return Nan::ThrowError("NodeJs Object to NJSDatabaseBackend failed");
    }

    Local<Object> njs_arg_9 = info[9]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_9 = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(njs_arg_9);
    if(!arg_9)
    {
        return Nan::ThrowError("NodeJs Object to NJSDynamicObject failed");
    }


    //Call factory
    auto cpp_instance = ledger::core::api::WalletPool::newInstance(arg_0,arg_1,arg_2,arg_3,arg_4,arg_5,arg_6,arg_7,arg_8,arg_9);
    djinni::js::ObjectWrapper<ledger::core::api::WalletPool>::Wrap(cpp_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSWalletPool::WalletPool_prototype;

Local<Object> NJSWalletPool::wrap(const std::shared_ptr<ledger::core::api::WalletPool> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(WalletPool_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::WalletPool>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSWalletPool::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSWalletPool::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<WalletPool>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSWalletPool::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSWalletPool::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSWalletPool").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"newInstance", newInstance);
    Nan::SetPrototypeMethod(func_template,"getLogger", getLogger);
    Nan::SetPrototypeMethod(func_template,"getName", getName);
    Nan::SetPrototypeMethod(func_template,"getPreferences", getPreferences);
    Nan::SetPrototypeMethod(func_template,"getWalletCount", getWalletCount);
    Nan::SetPrototypeMethod(func_template,"getWallets", getWallets);
    Nan::SetPrototypeMethod(func_template,"getWallet", getWallet);
    Nan::SetPrototypeMethod(func_template,"createWallet", createWallet);
    Nan::SetPrototypeMethod(func_template,"getCurrencies", getCurrencies);
    Nan::SetPrototypeMethod(func_template,"getCurrency", getCurrency);
    Nan::SetPrototypeMethod(func_template,"getLastBlock", getLastBlock);
    Nan::SetPrototypeMethod(func_template,"getEventBus", getEventBus);
    Nan::SetPrototypeMethod(func_template,"eraseDataSince", eraseDataSince);
    //Set object prototype
    WalletPool_prototype.Reset(objectTemplate);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);

    //Add template to target
    target->Set(Nan::New<String>("NJSWalletPool").ToLocalChecked(), func_template->GetFunction());
}
