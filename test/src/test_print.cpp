#include <gtest/gtest.h>

#include "print.hpp"

TEST(Print, hello_world) { EXPECT_EQ(my_func::hello_world(), 0); }
