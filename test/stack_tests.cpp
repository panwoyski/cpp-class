#include "gtest/gtest.h"
#include "zuza_stack.h"

TEST(stack_tests, creation_test) {
    zuza::stack stack;
}

TEST(stack_tests, empty_test) {
    zuza::stack stack;

    auto fail_msg = "Stos po stworzeniu powinien byc pusty";
    ASSERT_TRUE(stack.empty()) << fail_msg;
}

TEST(stack_tests, one_push_test) {
    zuza::stack stack;
    stack.push_back(1);

    auto fail_msg = "Stos po dodaniu 1 elementu powinien miec dlugosc jeden";
    ASSERT_EQ(stack.size(), 1u) << fail_msg;
    ASSERT_FALSE(stack.empty());
}

TEST(stack_tests, pop_test) {
    zuza::stack stack;

    stack.push_back(1);
    auto value = stack.pop_back();

    auto fail_msg = "Metoda pop sciaga ze stosu ostatni wlozony na niego element";
    ASSERT_EQ(value, 1) << fail_msg;

    auto fail_two = "Pop nie zostawia elementu na stosie, wielkosc powinna sie zmniejszyc";
    ASSERT_EQ(stack.size(), 0u) << fail_two;
}

TEST(stack_tests, many_pops) {
    zuza::stack stack;

    for (int i = 0; i < 5; ++i) {
        stack.push_back(i);
    }
    ASSERT_EQ(stack.size(), 5u);

    auto value_poped = stack.pop_back();
    ASSERT_EQ(value_poped, 4);

    auto another_popped_value = stack.pop_back();
    ASSERT_EQ(another_popped_value, 3);

    ASSERT_EQ(stack.size(), 3u);

    stack.pop_back();
    stack.pop_back();
    stack.pop_back();

    ASSERT_TRUE(stack.empty());
}
