//
//  complex_calculator.h
//  Quantum Computing Project
//
//

#ifndef complex_calculator_h
#define complex_calculator_h

#include <stdio.h>
#include <complex>
using namespace std;

class ComplexCalculations
{
public:
    complex<double> addition(complex<double>, complex<double>);
    complex<double> subtraction(complex<double>, complex<double>);
    complex<double> multiplication(complex<double>, complex<double>);
    complex<double> division(complex<double>, complex<double>);
    complex<double> modulus(complex<double>);
    complex<double> conjugate(complex<double>);
protected:
private:
};

#endif /* complex_calculator_h */
