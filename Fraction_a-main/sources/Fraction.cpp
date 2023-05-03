#include "Fraction.hpp"

namespace ariel{

    Fraction::Fraction(int numerator , int denominator)
    {
        this-> numerator = numerator;
        this-> numerator = denominator;

    }

    Fraction::Fraction()
    {
        this-> numerator = 0;
        this-> numerator = 1;
    }
     
    bool operator>(const Fraction& frac1, float num)
    {
        return false;
    };

    bool operator>=(const Fraction& frac1,const Fraction& frac2)
    {
        return false;
    };
    ostream& operator<<(ostream& ostr, const Fraction& frac)
    {
        return ostr;
    }

    Fraction operator+(const Fraction& frac1, const Fraction& frac2)
    {
        return Fraction();
    };

    Fraction operator+(const Fraction &frac1, float num)
    {
        return Fraction();
    };

    Fraction operator-(const Fraction& frac1 , const Fraction& frac2)
    {
        return Fraction();
    };

    Fraction operator-(const Fraction& frac1 , int num)
    {
        return Fraction();
    };

    Fraction operator*(const Fraction& fraction, float value)
    {
        return Fraction();
    };

    Fraction operator*(float value, const Fraction& fraction)
    {
        return Fraction();
    };

    Fraction operator/(const Fraction& fraction, float value)
    {
        return Fraction();
    };

    Fraction operator/(float value, const Fraction& fraction)
    {
        return Fraction();
    };

    // Fraction operator/(const Fraction& other) const
    // { 
    // return Fraction();
    // };

    Fraction Fraction::operator++()
    {
        return Fraction();
    };

    Fraction Fraction::operator++(int num)
    {
        return Fraction();
    };

    Fraction Fraction::operator--()
    {
        return Fraction();
    };

    Fraction Fraction::operator--(int num)
    {
        return Fraction();
    };

    Fraction Fraction::operator/(const Fraction& other) const
    {
        return Fraction();        
    };

    Fraction Fraction::operator*(const Fraction& other) const
    {
        return Fraction();
    };
}
