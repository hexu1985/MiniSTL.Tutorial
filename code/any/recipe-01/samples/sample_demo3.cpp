#include <iostream>
#include <string>
#include "any.hpp"

int main() {
    std::cout << "Example of using any member functions\n\n";

    Hx::any a1(100);
    Hx::any a2(std::string("200"));
    Hx::any a3;

    std::cout << "a3 is ";
    if (a3.has_value()) {
        std::cout << "not ";
    }
    std::cout << "empty\n";

    a1.swap(a2);
    try {
        std::string s=Hx::any_cast<std::string>(a1);
        std::cout << "a1 contains a string: " << s << "\n";
    }
    catch(Hx::bad_any_cast& e) {
        std::cout << "I guess a1 doesn't contain a string!\n";
    }

    if (int* p=Hx::any_cast<int>(&a2)) {
        std::cout << "a2 seems to have swapped contents with a1: "
            << *p << "\n";
    }
    else {
        std::cout << "Nope, no int in a2\n";
    }

    if (typeid(int)==a2.type()) {
        std::cout << "a2's type_info equals the type_info of int\n";
    }
}
