//
//  complex_calculator.cpp
//  Quantum Computing Project
//
//

#include "complex_calculator.h"

cd ComplexCalculations::addition(cd complexNum1, cd complexNum2){
    return complexNum1 + complexNum2;
}

cd ComplexCalculations::subtraction(cd complexNum1, cd complexNum2){
    return complexNum1 - complexNum2;
}

cd ComplexCalculations::multiplication(cd complexNum1, cd complexNum2){
    return complexNum1 * complexNum2;
}

cd ComplexCalculations::division(cd complexNum1, cd complexNum2){
    return complexNum1 / complexNum2;
}

cd ComplexCalculations::modulus(cd complexNum){
    return abs(complexNum);
}

cd ComplexCalculations::conjugate(cd complexNum){
    return conj(complexNum);
}
