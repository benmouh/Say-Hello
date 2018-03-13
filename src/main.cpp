#include <node.h>


namespace Hello {

using v8::FunctionCallbackInfo;
using v8::Exception;
using v8::Isolate;
using v8::Local;
using v8::Null;
using v8::String;
using v8::Value;
using v8::Object;

void SayHello(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();

  if (!args[0]->IsString()) {
    isolate->ThrowException(Exception::TypeError(
        String::NewFromUtf8(isolate, "Wrong arguments")));
    return;
  }

  String::Utf8Value str(args[0]->ToString());
  std::string s = std::string(*str);
  
  std::string result = "Hello " + s;

  args.GetReturnValue().Set(String::NewFromUtf8(isolate, result.c_str()));
}

void init(Local<Object> exports) {
  NODE_SET_METHOD(exports, "sayHello", SayHello);
}

NODE_MODULE(NODE_GYP_MODULE_NAME, init)

} // end of Hello namespace
