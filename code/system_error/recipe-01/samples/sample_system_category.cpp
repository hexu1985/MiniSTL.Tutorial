#include <iostream>
#include <iomanip>
#include <string>
#include "system_error.hpp"
 
int main()
{
    Hx::error_condition econd = Hx::system_category().default_error_condition(EDOM);
    std::cout << "Category: " << econd.category().name() << '\n'
              << "Value: " << econd.value() << '\n'
              << "Message: " << econd.message() << '\n';
 
    econd = Hx::system_category().default_error_condition(10001);
    std::cout << "Category: " << econd.category().name() << '\n'
              << "Value: " << econd.value() << '\n'
              << "Message: " << econd.message() << '\n';
}

/*
Output:

Category: generic
Value: 33
Message: Numerical argument out of domain
Category: system
Value: 10001
Message: Unknown error 10001
*/
