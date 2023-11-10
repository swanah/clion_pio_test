#ifndef CLION_PIO_TEST_FOO_HPP
#define CLION_PIO_TEST_FOO_HPP

#include <a/b/Bar.hpp>

class Foo : public Bar {
public:
    int foo(int value) override;
};


inline Bar::~Bar() = default;

#endif //CLION_PIO_TEST_FOO_HPP
