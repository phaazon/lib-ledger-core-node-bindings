// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from dynamic.djinni

#include "NJSDynamicObjectCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSDynamicObject::putString) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSDynamicObject::putString needs 2 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    String::Utf8Value string_arg_1(info[1]->ToString());
    auto arg_1 = std::string(*string_arg_1);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::putString : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->putString(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSDynamicObject::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSDynamicObject::putInt) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSDynamicObject::putInt needs 2 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    auto arg_1 = Nan::To<int32_t>(info[1]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::putInt : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->putInt(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSDynamicObject::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSDynamicObject::putLong) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSDynamicObject::putLong needs 2 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    auto arg_1 = Nan::To<int64_t>(info[1]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::putLong : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->putLong(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSDynamicObject::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSDynamicObject::putDouble) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSDynamicObject::putDouble needs 2 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    auto arg_1 = Nan::To<double>(info[1]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::putDouble : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->putDouble(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSDynamicObject::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSDynamicObject::putData) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSDynamicObject::putData needs 2 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    vector<uint8_t> arg_1;
    Local<Array> arg_1_container = Local<Array>::Cast(info[1]);
    for(uint32_t arg_1_id = 0; arg_1_id < arg_1_container->Length(); arg_1_id++)
    {
        if(arg_1_container->Get(arg_1_id)->IsUint32())
        {
            auto arg_1_elem = Nan::To<uint32_t>(arg_1_container->Get(arg_1_id)).FromJust();
            arg_1.emplace_back(arg_1_elem);
        }
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::putData : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->putData(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSDynamicObject::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSDynamicObject::putBoolean) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSDynamicObject::putBoolean needs 2 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    auto arg_1 = Nan::To<bool>(info[1]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::putBoolean : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->putBoolean(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSDynamicObject::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSDynamicObject::putObject) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSDynamicObject::putObject needs 2 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    Local<Object> njs_arg_1 = info[1]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_1 = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(njs_arg_1);
    if(!arg_1)
    {
        return Nan::ThrowError("NodeJs Object to NJSDynamicObject failed");
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::putObject : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->putObject(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSDynamicObject::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSDynamicObject::putArray) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSDynamicObject::putArray needs 2 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    Local<Object> njs_arg_1 = info[1]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_1 = djinni::js::ObjectWrapper<DynamicArray>::Unwrap(njs_arg_1);
    if(!arg_1)
    {
        return Nan::ThrowError("NodeJs Object to NJSDynamicArray failed");
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::putArray : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->putArray(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSDynamicObject::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSDynamicObject::getString) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicObject::getString needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::getString : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->getString(arg_0);

    //Wrap result in node object
    Local<Value> arg_1;
    if(result)
    {
        auto arg_1_optional = (result).value();
        auto arg_1_tmp = Nan::New<String>(arg_1_optional).ToLocalChecked();
        arg_1 = arg_1_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicObject::getInt) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicObject::getInt needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::getInt : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->getInt(arg_0);

    //Wrap result in node object
    Local<Value> arg_1;
    if(result)
    {
        auto arg_1_optional = (result).value();
        auto arg_1_tmp = Nan::New<Int32>(arg_1_optional);
        arg_1 = arg_1_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicObject::getLong) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicObject::getLong needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::getLong : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->getLong(arg_0);

    //Wrap result in node object
    Local<Value> arg_1;
    if(result)
    {
        auto arg_1_optional = (result).value();
        auto arg_1_tmp = Nan::New<Number>(arg_1_optional);
        arg_1 = arg_1_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicObject::getDouble) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicObject::getDouble needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::getDouble : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->getDouble(arg_0);

    //Wrap result in node object
    Local<Value> arg_1;
    if(result)
    {
        auto arg_1_optional = (result).value();
        auto arg_1_tmp = Nan::New<Number>(arg_1_optional);
        arg_1 = arg_1_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicObject::getData) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicObject::getData needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::getData : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->getData(arg_0);

    //Wrap result in node object
    Local<Value> arg_1;
    if(result)
    {
        auto arg_1_optional = (result).value();
        Local<Array> arg_1_tmp = Nan::New<Array>();
        for(size_t arg_1_tmp_id = 0; arg_1_tmp_id < arg_1_optional.size(); arg_1_tmp_id++)
        {
            auto arg_1_tmp_elem = Nan::New<Uint32>(arg_1_optional[arg_1_tmp_id]);
            arg_1_tmp->Set((int)arg_1_tmp_id,arg_1_tmp_elem);
        }

        arg_1 = arg_1_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicObject::getBoolean) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicObject::getBoolean needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::getBoolean : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->getBoolean(arg_0);

    //Wrap result in node object
    Local<Value> arg_1;
    if(result)
    {
        auto arg_1_optional = (result).value();
        auto arg_1_tmp = Nan::New<Boolean>(arg_1_optional);
        arg_1 = arg_1_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicObject::getObject) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicObject::getObject needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::getObject : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->getObject(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSDynamicObject::wrap(result);



    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicObject::getArray) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicObject::getArray needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::getArray : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->getArray(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSDynamicArray::wrap(result);



    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicObject::contains) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicObject::contains needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::contains : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->contains(arg_0);

    //Wrap result in node object
    auto arg_1 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicObject::remove) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicObject::remove needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::remove : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->remove(arg_0);

    //Wrap result in node object
    auto arg_1 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicObject::getKeys) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDynamicObject::getKeys needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::getKeys : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->getKeys();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < result.size(); arg_0_id++)
    {
        auto arg_0_elem = Nan::New<String>(result[arg_0_id]).ToLocalChecked();
        arg_0->Set((int)arg_0_id,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDynamicObject::getType) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicObject::getType needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::getType : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->getType(arg_0);

    //Wrap result in node object
    Local<Value> arg_1;
    if(result)
    {
        auto arg_1_optional = (result).value();
        auto arg_1_tmp = Nan::New<Integer>((int)arg_1_optional);
        arg_1 = arg_1_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicObject::dump) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDynamicObject::dump needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::dump : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->dump();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDynamicObject::serialize) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDynamicObject::serialize needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::serialize : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->serialize();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < result.size(); arg_0_id++)
    {
        auto arg_0_elem = Nan::New<Uint32>(result[arg_0_id]);
        arg_0->Set((int)arg_0_id,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDynamicObject::isReadOnly) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDynamicObject::isReadOnly needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::isReadOnly : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->isReadOnly();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDynamicObject::size) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDynamicObject::size needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicObject::size : implementation of DynamicObject is not valid");
    }

    auto result = cpp_impl->size();

    //Wrap result in node object
    auto arg_0 = Nan::New<Number>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDynamicObject::newInstance) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDynamicObject::newInstance needs 0 arguments");
    }

    //Check if parameters have correct types

    auto result = DynamicObject::newInstance();

    //Wrap result in node object
    auto arg_0 = NJSDynamicObject::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDynamicObject::load) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicObject::load needs 1 arguments");
    }

    //Check if parameters have correct types
    vector<uint8_t> arg_0;
    Local<Array> arg_0_container = Local<Array>::Cast(info[0]);
    for(uint32_t arg_0_id = 0; arg_0_id < arg_0_container->Length(); arg_0_id++)
    {
        if(arg_0_container->Get(arg_0_id)->IsUint32())
        {
            auto arg_0_elem = Nan::To<uint32_t>(arg_0_container->Get(arg_0_id)).FromJust();
            arg_0.emplace_back(arg_0_elem);
        }
    }


    auto result = DynamicObject::load(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSDynamicObject::wrap(result);



    //Return result
    info.GetReturnValue().Set(arg_1);
}

NAN_METHOD(NJSDynamicObject::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSDynamicObject function can only be called as constructor (use New)");
    }

    //Check if NJSDynamicObject::New called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDynamicObject::New needs same number of arguments as ledger::core::api::DynamicObject::newInstance method");
    }

    //Unwrap objects to get C++ classes

    //Call factory
    auto cpp_instance = ledger::core::api::DynamicObject::newInstance();
    djinni::js::ObjectWrapper<ledger::core::api::DynamicObject>::Wrap(cpp_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSDynamicObject::DynamicObject_prototype;

Local<Object> NJSDynamicObject::wrap(const std::shared_ptr<ledger::core::api::DynamicObject> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(DynamicObject_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::DynamicObject>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSDynamicObject::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSDynamicObject::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<DynamicObject>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSDynamicObject::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSDynamicObject::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSDynamicObject").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"putString", putString);
    Nan::SetPrototypeMethod(func_template,"putInt", putInt);
    Nan::SetPrototypeMethod(func_template,"putLong", putLong);
    Nan::SetPrototypeMethod(func_template,"putDouble", putDouble);
    Nan::SetPrototypeMethod(func_template,"putData", putData);
    Nan::SetPrototypeMethod(func_template,"putBoolean", putBoolean);
    Nan::SetPrototypeMethod(func_template,"putObject", putObject);
    Nan::SetPrototypeMethod(func_template,"putArray", putArray);
    Nan::SetPrototypeMethod(func_template,"getString", getString);
    Nan::SetPrototypeMethod(func_template,"getInt", getInt);
    Nan::SetPrototypeMethod(func_template,"getLong", getLong);
    Nan::SetPrototypeMethod(func_template,"getDouble", getDouble);
    Nan::SetPrototypeMethod(func_template,"getData", getData);
    Nan::SetPrototypeMethod(func_template,"getBoolean", getBoolean);
    Nan::SetPrototypeMethod(func_template,"getObject", getObject);
    Nan::SetPrototypeMethod(func_template,"getArray", getArray);
    Nan::SetPrototypeMethod(func_template,"contains", contains);
    Nan::SetPrototypeMethod(func_template,"remove", remove);
    Nan::SetPrototypeMethod(func_template,"getKeys", getKeys);
    Nan::SetPrototypeMethod(func_template,"getType", getType);
    Nan::SetPrototypeMethod(func_template,"dump", dump);
    Nan::SetPrototypeMethod(func_template,"serialize", serialize);
    Nan::SetPrototypeMethod(func_template,"isReadOnly", isReadOnly);
    Nan::SetPrototypeMethod(func_template,"size", size);
    Nan::SetPrototypeMethod(func_template,"newInstance", newInstance);
    Nan::SetPrototypeMethod(func_template,"load", load);
    //Set object prototype
    DynamicObject_prototype.Reset(objectTemplate);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);

    //Add template to target
    target->Set(Nan::New<String>("NJSDynamicObject").ToLocalChecked(), func_template->GetFunction());
}
