#include "doctest.h"
#include "sources/Fraction.hpp"
#include <stdexcept>
#include "iostream"
#include "stdio.h"
using namespace ariel;

    TEST_CASE("Checking if the constructor is valid") {
        Fraction _f1(0, 1);
        Fraction _f2(2, 3);

        CHECK(_f1.numerator == 2);
        CHECK(_f1.denominator == 3);
        CHECK(_f2.numerator == 1);
        CHECK(_f2.denominator == 2);
    }

    TEST_CASE("Sum of two fractions check"){
    Fraction f1(2, 3);
    Fraction f2(1, 2);
    Fraction f5 = f1 + f2;

    CHECK(f5.numerator == 7);
    CHECK(f5.denominator == 6);
    }

    TEST_CASE("Fraction greater than") {
    Fraction f1(3, 4);
    Fraction f2(1, 2);
    CHECK(f1 = f2);
}

TEST_CASE("Fraction increment") {
    Fraction f(1, 2);
    ++f;
    CHECK(f = Fraction(3, 2));
    f++;
    CHECK(f = Fraction(5, 2));
}

TEST_CASE("Fraction decrement") {
    Fraction f(5, 2);
    --f;
    CHECK(f = Fraction(3, 2));
    f--;
    CHECK(f = Fraction(1, 2));
}

TEST_CASE("Fraction default constructor") {
    Fraction f;
    CHECK(f.getNum() == 0);
    CHECK(f.getDen() == 1);
}


TEST_CASE("Fraction constructor") {
    Fraction f1(1, 2);
    CHECK(f1.getNum() == 1);
    CHECK(f1.getDen() == 2);
    Fraction f2(0, 3);
    CHECK(f2.getNum() == 0);
    CHECK(f2.getDen() == 1);
}

TEST_CASE("Fraction getNumerator") {
    Fraction f1(1, 2);
    CHECK(f1.getNum() == 1);
    Fraction f2(3, 4);
    CHECK(f2.getNum() == 3);
}

TEST_CASE("Fraction getDenominator") {
    Fraction f1(1, 2);
    CHECK(f1.getDen() == 2);
    Fraction f2(3, 4);
    CHECK(f2.getDen() == 4);
}