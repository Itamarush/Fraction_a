#include "sources/fraction.hpp"
#include "doctest.h"


namespace ariel{
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
}