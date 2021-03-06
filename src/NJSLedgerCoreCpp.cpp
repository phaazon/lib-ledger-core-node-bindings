// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#include "NJSLedgerCoreCpp.hpp"
#include "NJSObjectWrapper.hpp"
#include "NJSHexUtils.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSLedgerCore::getStringVersion) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSLedgerCore::getStringVersion needs 0 arguments");
    }

    //Check if parameters have correct types

    auto result = ledger::core::api::LedgerCore::getStringVersion();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSLedgerCore::getIntVersion) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSLedgerCore::getIntVersion needs 0 arguments");
    }

    //Check if parameters have correct types

    auto result = ledger::core::api::LedgerCore::getIntVersion();

    //Wrap result in node object
    auto arg_0 = Nan::New<Int32>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSLedgerCore::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSLedgerCore function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSLedgerCore::LedgerCore_prototype;

Local<Object> NJSLedgerCore::wrap(const std::shared_ptr<ledger::core::api::LedgerCore> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(LedgerCore_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::LedgerCore>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSLedgerCore::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSLedgerCore::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::LedgerCore>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSLedgerCore::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSLedgerCore::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSLedgerCore").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getStringVersion", getStringVersion);
    Nan::SetPrototypeMethod(func_template,"getIntVersion", getIntVersion);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    LedgerCore_prototype.Reset(objectTemplate);

    //Add template to target
    Nan::Set(target, Nan::New<String>("NJSLedgerCore").ToLocalChecked(), Nan::GetFunction(func_template).ToLocalChecked());
}
