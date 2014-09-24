// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#pragma once

#include "djinni_support.hpp"
#include "textbox_listener.hpp"

namespace djinni_generated {

class NativeTextboxListener final : djinni::JniInterfaceJavaExt<::textsort::TextboxListener, NativeTextboxListener> {
public:
    using CppType = std::shared_ptr<::textsort::TextboxListener>;
    using JniType = jobject;

    static std::shared_ptr<::textsort::TextboxListener> fromJava(JNIEnv* jniEnv, jobject j) { return djinni::JniClass<::djinni_generated::NativeTextboxListener>::get()._fromJava(jniEnv, j); }

    const djinni::GlobalRef<jclass> clazz { djinni::jniFindClass("com/dropbox/textsort/TextboxListener") };
    const jmethodID method_update { djinni::jniGetMethodID(clazz.get(), "update", "(Lcom/dropbox/textsort/ItemList;)V") };

    class JavaProxy final : djinni::JavaProxyCacheEntry, public ::textsort::TextboxListener {
    public:
        JavaProxy(jobject obj);
        virtual void update(const ::textsort::ItemList & items) override;

    private:
        using djinni::JavaProxyCacheEntry::getGlobalRef;
        friend class djinni::JniInterfaceJavaExt<::textsort::TextboxListener, ::djinni_generated::NativeTextboxListener>;
        friend class djinni::JavaProxyCache<JavaProxy>;
    };

private:
    NativeTextboxListener();
    friend class djinni::JniClass<::djinni_generated::NativeTextboxListener>;
};

}  // namespace djinni_generated
