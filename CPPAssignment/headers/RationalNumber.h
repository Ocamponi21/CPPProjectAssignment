// the RationalNumber class represents a rational number.
// a rational number is any number that can be expressed as 
// a fraction, where both the numerator and the denominator 
// are integers, and the denominator is not equal to zero.
// a rational number may be expressed as a fraction or a
// quotient.

#include <iostream>
#include <iomanip>   
#include "GreatestCommonFactor.h"

// use C++ standard library namespace
using namespace std;

class RationalNumber : GreatestCommonFactor
{
    private:
        // field used to store the numerator of
        // this rational number
        int numerator;
        // field used to store the denominator of
        // this rational number
        int denominator;
        // this method, defined in the GreatestCommonFactor 
        // abstract class, computes the greatest 
        // common factor of the two specified integers.
        //int gcf(int, int) override;
    public:
        // this constructor sets the numerator and
        // denominator to 1.
        RationalNumber();
        // this constructor sets the numerator and
        // denominator to the two specified integers;
        // where the first specified int is the numerator
        // and the second specified int is the denominator.
        // if the second specified int is equal to zero, this
        // constructor throws an invalid argument exception.
        // this constructor must store the numerator and denominator
        // in reduced form; for example 2/4 in reduced
        // form is 1/2.
        // to reduce a fraction, divide the numerator 
        // and the denominator by the greatest common factor.
        RationalNumber(int, int);
        // this method sets the numerator of this rational
        // number to the specified int
        void setNumerator(int);
        // this method gets the numerator of this rational
        // number
        void getNumerator(int&) const;
        // this method sets the denominator of this rational
        // number to the specified int.
        // if the specified int is equal to zero, this
        // method throws an invalid argument exception.
        void setDenominator(int);
        // this method gets the denominator of this rational
        // number
        void getDenominator(int&) const;
        // this method displays this rational number to stdout
        // in fraction form
        void printRationalNumber() const;
        // this method displays this rational number to stdout
        // in quotient form using the specified precision to
        // to format the number of digits after the decimal
        void printRationalNumber(int) const;
        // this method returns true if this rational number is equal to
        // the specified rational number, else it returns false
        bool equalRationalNumber(const RationalNumber&) const;
};

RationalNumber::RationalNumber()
    {
        numerator = 1;
        denominator = 1; 
    }
    RationalNumber:: RationalNumber(int numerator, int denominator)
    {
        numerator = numerator;
        if (denominator = 0)
        {
            // throw an exception
            throw invalid_argument("Denominator must be greater than or equal to zero.");
        }
        denominator = denominator;
    }
    void RationalNumber:: setNumerator(int numerator)
    {
        this->numerator = numerator;
    }
    void RationalNumber:: getNumerator(int& numerator) const
    {
        numerator = this->numerator;
    }
    void RationalNumber:: setDenominator(int denominator)
    {
        if (denominator = 0) {
        //throw an exception
        throw invalid_argument("Denominator must be greater than or equal to zero.");
        }
        this->denominator = denominator;
    }
    void RationalNumber:: getDenominator(int& denominator) const
    {
        denominator = this->denominator;
    }
    void RationalNumber:: printRationalNumber() const
    {
        cout << numerator << "/" << denominator << endl;
    }
    void RationalNumber:: printRationalNumber(int quotient) const
    {
        cout << fixed << showpoint;
        cout << setprecision(2);
        quotient = numerator / denominator;
        cout << quotient << endl;

    }