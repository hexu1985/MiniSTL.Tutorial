#include <iostream>
#include <gtest/gtest.h>
#include "shared_ptr.hpp"

using mini_stl::shared_ptr;

#include "shared_ptr_operator_dereference2.hpp"

TEST(test, shared_ptr_operator_dereference2)
{
    shared_ptr_operator_dereference2();
}

