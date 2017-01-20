#include "almacen.cc"
#include "gtest/gtest.h"

TEST(add, positivos){
	ASSERT_EQ(1, add(1));
}

TEST(factorial, negativos){
	ASSERT_EQ(-1, factorial(-1));
}

TEST(factorial, cero){
	ASSERT_EQ(1, factorial(0));
}
