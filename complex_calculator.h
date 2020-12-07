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

typedef complex<double> cd;

class ComplexCalculations
{
public:
    cd addition(cd, cd);
    cd subtraction(cd, cd);
    cd multiplication(cd, cd);
    cd division(cd, cd);
    cd modulus(cd);
    cd conjugate(cd);
protected:
private:
};

#endif /* complex_calculator_h */
