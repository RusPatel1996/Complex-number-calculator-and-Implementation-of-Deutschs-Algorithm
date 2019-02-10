//
//  complex_vector_calculator.cpp
//  Quantum Computing Project
//
//

#include "complex_vector_calculator.h"

vector<vector<complex<double>>> ComplexVectorCalculations::addition(vector<vector<complex<double>>> complexVector1, vector<vector<complex<double>>> complexVector2){
    
    vector<complex<double>> vectorForRow;
    vector<vector<complex<double>>> vectorAddition;
    
    if (verifySize(complexVector1, complexVector2)){
        for (int row = 0; row < complexVector1.size(); row++){
            vectorForRow.clear();
            for (int column = 0; column < complexVector1[row].size(); column++){
                vectorForRow.push_back(complexVector1[row][column] + complexVector2[row][column]);
            }
            vectorAddition.push_back(vectorForRow);
        }
    }
    return vectorAddition;
}
/*
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
*/

bool ComplexVectorCalculations::verifySize(vector<vector<complex<double>>> complexVector1, vector<vector<complex<double>>> complexVector2){
    int numOfColumns = (int)complexVector1[0].size();
    
    if (complexVector1.size() == complexVector2.size()){
        for (int row = 0; row < complexVector1.size(); row++){
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
