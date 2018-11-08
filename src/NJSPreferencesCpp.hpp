// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from preferences.djinni

#ifndef DJINNI_GENERATED_NJSPREFERENCES_HPP
#define DJINNI_GENERATED_NJSPREFERENCES_HPP


#include "NJSPreferencesEditorCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/Preferences.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSPreferences final {
public:

    static void Initialize(Local<Object> target);
    NJSPreferences() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::Preferences> &object);
    static Nan::Persistent<ObjectTemplate> Preferences_prototype;

private:
    /**
     * Retrieves the value associated with the given key or fallback to the default value.
     * @return The data associated with the key or fallbackValue.
     */
    static NAN_METHOD(getString);

    /**
     * Retrieves the value associated with the given key or fallback to the default value.
     * @return The data associated with the key or fallbackValue.
     */
    static NAN_METHOD(getInt);

    /**
     * Retrieves the value associated with the given key or fallback to the default value.
     * @return The data associated with the key or fallbackValue.
     */
    static NAN_METHOD(getLong);

    /**
     * Retrieves the value associated with the given key or fallback to the default value.
     * @return The data associated with the key or fallbackValue.
     */
    static NAN_METHOD(getBoolean);

    /**
     * Retrieves the value associated with the given key or fallback to the default value.
     * @return The data associated with the key or fallbackValue.
     */
    static NAN_METHOD(getStringArray);

    /**
     * Retrieves the value associated with the given key or fallback to the default value.
     * @return The data associated with the key or fallbackValue.
     */
    static NAN_METHOD(getData);

    /**
     * Checks whether the Preferences contains the given key.
     * @return true the preferences contains the key, false otherwise.
     */
    static NAN_METHOD(contains);

    /**
     * Get a preferences editor in order to add/modify/remove data.
     * @return An interface for editting preferences.
     */
    static NAN_METHOD(edit);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSPREFERENCES_HPP
