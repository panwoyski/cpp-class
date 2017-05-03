#include "gtest/gtest.h"
#include "zuza_vector.h"

TEST(vector_tests, creation_test) {
    zuza::vector vec_a;
}

TEST(vector_tests, zero_size_test) {
    zuza::vector vec_a;
    auto fail_msg = "Pusty wektor powinien miec dlugosc 0";
    ASSERT_EQ(vec_a.size(), 0u) << fail_msg;
}

TEST(vector_tests, one_size_test) {
    zuza::vector vec_a{1};
    auto fail_msg = "Wektor z zadana dlugoscia 1 powinien zwracac dlugosc 1";
    ASSERT_EQ(vec_a.size(), 1u) << fail_msg;
}
