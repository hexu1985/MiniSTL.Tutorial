#include <iostream>
#include <gtest/gtest.h>

#include "shared_ptr.hpp"
#include "weak_ptr.hpp"

using Hx::shared_ptr;
using Hx::weak_ptr;
using Hx::make_shared;

#include "weak_ptr_expired.hpp"

TEST(test, weak_ptr_expired)
{
    weak_ptr_expired();
}

