//
//  complex_calculator.cpp
//  Quantum Computing Project
//
//

#include "complex_calculator.h"

complex<double> ComplexCalculations::addition(complex<double> complexNum1, complex<double> complexNum2){
    return complexNum1 + complexNum2;
}

complex<double> ComplexCalculations::subtraction(complex<double> complexNum1, complex<double> complexNum2){
    return complexNum1 - complexNum2;
}

complex<double> ComplexCalculations::multiplication(complex<double> complexNum1, complex<double> complexNum2){
    return complexNum1 * complexNum2;
}

complex<double> ComplexCalculations::division(complex<double> complexNum1, complex<double> complexNum2){
    return complexNum1 / complexNum2;
}

complex<double> ComplexCalculations::modulus(complex<double> complexNum){
    return NULL;
}

complex<double> ComplexCalculations::conjugate(complex<double> complexNum){
    return conj(complexNum);
}
