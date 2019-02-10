//
//  complex_vector_calculator.cpp
//  Quantum Computing Project
//
//

#include "complex_vector_calculator.h"

vector<vector<complex<double>>> ComplexVectorCalculations::addition(vector<vector<complex<double>>> complexVector1, vector<vector<complex<double>>> complexVector2){
    if (verifySize(complexVector1, complexVector2)){
        
    }
}

vector<vector<complex<double>>> ComplexVectorCalculations::subtraction(vector<vector<complex<double>>> complexVector1, vector<vector<complex<double>>> complexVector2){
    if (verifySize(complexVector1, complexVector2)){
        
    }
}


vector<vector<complex<double>>> ComplexVectorCalculations::multiplication(vector<vector<complex<double>>> complexVector1, vector<vector<complex<double>>> complexVector2){
    if (verifySize(complexVector1, complexVector2)){
        
    }
}

vector<vector<complex<double>>> ComplexVectorCalculations::division(vector<vector<complex<double>>> complexVector1, vector<vector<complex<double>>> complexVector2){
    if (verifySize(complexVector1, complexVector2)){
        
    }
}


vector<vector<complex<double>>> ComplexVectorCalculations::conjugate(vector<vector<complex<double>>> complexVector1, vector<vector<complex<double>>> complexVector2){
    if (verifySize(complexVector1, complexVector2)){
        
    }
}


vector<vector<complex<double>>> ComplexVectorCalculations::transpose(vector<vector<complex<double>>> complexVector1, vector<vector<complex<double>>> complexVector2){
    if (verifySize(complexVector1, complexVector2)){
        
    }
}


vector<vector<complex<double>>> ComplexVectorCalculations::adjoint(vector<vector<complex<double>>> complexVector1, vector<vector<complex<double>>> complexVector2){
    if (verifySize(complexVector1, complexVector2)){
        
    }
}


bool ComplexVectorCalculations::verifySize(vector<vector<complex<double>>> complexVector1, vector<vector<complex<double>>> complexVector2){
    int numOfColumns = (int)complexVector1[0].size();
    
    if (complexVector1.size() == complexVector2.size()){
        for (int row = 0; row <= complexVector1.size(); row++){
            if ((complexVector1[row].size() != numOfColumns) && (complexVector2[row].size() != numOfColumns)){
                return false;
            }
        }
        return true;
    }
    else {
        return false;
    }
}
