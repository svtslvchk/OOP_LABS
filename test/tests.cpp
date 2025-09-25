#include <gtest/gtest.h>
#include "../functions.hpp"

TEST(UnitsTest, InvalidUnits) {
    EXPECT_EQ(units(10), "");
    EXPECT_EQ(units(-1), "");
    EXPECT_EQ(units(100), "");
}

TEST(TensTest, BasicTens) {
    EXPECT_EQ(tens(1), "on");
    EXPECT_EQ(tens(5), "elli");
    EXPECT_EQ(tens(6), "altmış");
    EXPECT_EQ(tens(8), "seksen");
}

TEST(GetTurkishNumberTest, SingleDigit) {
    EXPECT_EQ(getTurkishNumber(0), "sıfır");
    EXPECT_EQ(getTurkishNumber(1), "bir");
    EXPECT_EQ(getTurkishNumber(5), "beş");
    EXPECT_EQ(getTurkishNumber(9), "dokuz");
}

TEST(GetTurkishNumberTest, TensOnly) {
    EXPECT_EQ(getTurkishNumber(10), "on");
    EXPECT_EQ(getTurkishNumber(20), "yirmi");
    EXPECT_EQ(getTurkishNumber(50), "elli");
    EXPECT_EQ(getTurkishNumber(90), "doksan");
}

TEST(GetTurkishNumberTest, MixedNumbers) {
    EXPECT_EQ(getTurkishNumber(11), "on bir");
    EXPECT_EQ(getTurkishNumber(25), "yirmi beş");
    EXPECT_EQ(getTurkishNumber(47), "kırk yedi");
    EXPECT_EQ(getTurkishNumber(52), "elli iki");
    EXPECT_EQ(getTurkishNumber(73), "yetmiş üç");
    EXPECT_EQ(getTurkishNumber(86), "seksen altı");
    EXPECT_EQ(getTurkishNumber(99), "doksan dokuz");
}

TEST(GetTurkishNumberTest, EdgeCases) {
    EXPECT_EQ(getTurkishNumber(-1), "");
    EXPECT_EQ(getTurkishNumber(-10), "");
    EXPECT_EQ(getTurkishNumber(100), "");
    EXPECT_EQ(getTurkishNumber(999), "");
}
