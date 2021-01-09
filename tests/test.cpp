// Copyright 2020 MrShip15 mr.shi15@gmail.ru

#include <gtest/gtest.h>
#include <iostream>
#include "cache_check.hpp"

TEST(Example, EmptyTest) {
    cache_check a;
    a.countDirect();
    std::cout << a;
    a.countReverse();
    std::cout << a;
    a.countRandom();
    std::cout << a;
    EXPECT_TRUE(true);
}
