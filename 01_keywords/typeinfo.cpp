#include <iostream>
#include <typeinfo>

class Base {
   public:
    virtual ~Base() = default;
};
class Derived : public Base {};

int main() {
    Base b1;
    Derived d1;
    const Base* ptr;

    ptr = &b1;
    std::cout << typeid(*ptr).name() << "\n";

    ptr = &d1;
    std::cout << typeid(*ptr).name() << "\n";

    return 0;
}