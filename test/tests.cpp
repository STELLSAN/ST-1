// Copyright 2023 Nedelin Dmitry
#include <gtest/gtest.h>
#include <cstdint>
#include "../include/alg.h"


TEST(checkPrime, smallNumbers) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_TRUE(checkPrime(11));
}

TEST(checkPrime, checkWrongValue) {
    EXPECT_FALSE(checkPrime(4));
}

TEST(checkPrime, checkBigValue) {
    EXPECT_TRUE(checkPrime(3571));
    EXPECT_FALSE(checkPrime(100000));
}

TEST(nPrime, checkLargeValue) {
    EXPECT_EQ(3571, nPrime(500));
}

TEST(nPrime, checkWrongValue) {
    EXPECT_EQ(0, nPrime(0));
}

TEST(nPrime, check_large_value) {
    EXPECT_EQ(3559, nPrime(499));
}

TEST(nextPrime, checkWorks) {
    EXPECT_EQ(33, nextPrime(11));
}

TEST(nextPrime, checkLargeValue) {
    EXPECT_EQ(3571, nextPrime(3570));
}

TEST(sumPrime, checkWorks) {
    EXPECT_EQ(328, sumPrime(50));
}

TEST(sumPrime, checkLargeValue) {
    EXPECT_EQ(142913828922, sumPrime(2000000));
}