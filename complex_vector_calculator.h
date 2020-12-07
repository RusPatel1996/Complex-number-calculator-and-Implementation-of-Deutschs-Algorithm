//
//  complex_vector_calculator.h
//  Quantum Computing Project
//
//

#ifndef complex_vector_calculator_h
#define complex_vector_calculator_h

#include <stdio.h>
#include <vector>
#include <iostream>
#include <iomanip>
#include "complex_calculator.h"

typedef vector<vector<complex<double>>> vvcd;

class ComplexVectorCalculations
{
public:
    vvcd addition(vvcd, vvcd);
    vvcd subtraction(vvcd, vvcd);
    vvcd multiplication(vvcd, vvcd);
    vvcd scalarMultiplication(cd, vvcd);
    vvcd tensor(vvcd, vvcd);
    vvcd conjugate(vvcd);
    vvcd transpose(vvcd);
    vvcd adjoint(vvcd);
    bool equalSize(vvcd, vvcd);
    void viewComplexVector(vvcd);
protected:
private:
};

#endif /* complex_vector_calculator_h */
