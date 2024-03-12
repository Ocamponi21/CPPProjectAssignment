// include pre-processor directive
#include <iostream>
#include "./headers/RationalNumber.h"

using namespace std;

int main() {

    double quotient; 
    // create a RationalNumber object named r1 using 
    // its no-arg constructor
    RationalNumber r1;

    // output the contents of r1 in fraction form
    cout << "Rational Number 1 Fraction Form: ";
    r1.printRationalNumber();
    
    // output the contents of r1 in quotient form
    cout << "Rational Number 1 Quotient Form: ";
    r1.printRationalNumber(quotient);
    // set r1's numerator to 4
    r1.setNumerator(4);
    
    // set r1's denominator to 6
    r1.setDenominator(6);
    
    // output the contents of r1 in fraction form
    cout << "Rational Number 1 Fraction Form: ";
    r1.printRationalNumber();
    
    // output the contents of r1 in quotient form
    cout << "Rational Number 1 Quotient Form: ";
    r1.printRationalNumber(quotient);

    // create a RationalNumber object named r2 using 
    // its two-arg constructor passing a numerator of
    // 2 and a denominator of 4
    RationalNumber r2(2, 4);

    // output the contents of r2 in fraction form
    cout << "Rational Number 2 Fraction Form: ";
    r2.printRationalNumber();
    // output the contents of r2 in quotient form
    cout << "Rational Number 2 Quotient Form: ";
    r2.printRationalNumber(quotient);

    // get r2's numerator and then display it to stdout
    r2.getNumerator();
    // get r2's denomiator and then display it to stdout
    r2.getDenominator();

    // call method on r1 that will test if it is equal to r2
    // and display its return to stdout as false or true

    return 0;
}