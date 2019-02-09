//
//  complex_vector_calculator.h
//  Quantum Computing Project
//
//

#ifndef complex_vector_calculator_h
#define complex_vector_calculator_h

#include <stdio.h>
#include <vector>
#include "complex_calculator.h"

class ComplexVectorCalculations
{
public:
    vector<complex<double>> addition(vector<complex<double>>, vector<complex<double>>);
    vector<complex<double>> subtraction(vector<complex<double>>, vector<complex<double>>);
    vector<complex<double>> multiplication(vector<complex<double>>, vector<complex<double>>);
    vector<complex<double>> division(vector<complex<double>>, vector<complex<double>>);
    vector<complex<double>> conjugate(vector<complex<double>>, vector<complex<double>>);
    vector<complex<double>> transpose(vector<complex<double>>, vector<complex<double>>);
    vector<complex<double>> adjoint(vector<complex<double>>, vector<complex<double>>);
protected:
private:
};

#endif /* complex_vector_calculator_h */
