#include "Arduino.h"
#include <a/b/Foo.hpp>

void setup() {
//    Serial.begin(115200);
//    while (not Serial) yield();

    Foo foo;
    foo.foo(0);
//    Serial.printf("foo: ", foo.foo(0));

}

void loop() {

}
