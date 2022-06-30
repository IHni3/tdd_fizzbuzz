
#include <gtest/gtest.h>

#include "../source/FizzBuzz.h"


TEST(FizzBuzzTest, ListSize100Test) {
    FizzBuzz fizzbuzz;
    auto result = fizzbuzz.run();

    ASSERT_EQ(result.size(), 100);
}

TEST(FizzBuzzTest, NumbersFrom1To100Test) {
    FizzBuzz fizzbuzz;
    auto result = fizzbuzz.run();

    auto c = 1;

    for (const auto& n: result) {
        if(c % 3 != 0 && c % 5 != 0)
            ASSERT_EQ(n, std::to_string(c));
        c++;
    }
}

TEST(FizzBuzzTest, FizzTest) {
    FizzBuzz fizzbuzz;
    auto result = fizzbuzz.run();

    auto c = 1;

    for (const auto& n: result) {
        if(c % 3 == 0 && c % 5 != 0)
            ASSERT_EQ(n, "fizz");
        c++;
    }
}

TEST(FizzBuzzTest, BuzzTest) {
    FizzBuzz fizzbuzz;
    auto result = fizzbuzz.run();

    auto c = 1;

    for (const auto& n: result) {
        if(c % 5 == 0 && c % 3 != 0)
            ASSERT_EQ(n, "buzz");
        c++;
    }
}

TEST(FizzBuzzTest, FizzBuzzTest) {
    FizzBuzz fizzbuzz;
    auto result = fizzbuzz.run();

    auto c = 1;

    for (const auto& n: result) {
        if(c % 3 == 0 && c % 5 == 0)
            ASSERT_EQ(n, "fizzbuzz");
        c++;
    }
}