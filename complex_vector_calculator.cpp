//
//  complex_vector_calculator.cpp
//  Quantum Computing Project
//
//

#include "complex_vector_calculator.h"

vector<vector<complex<double>>> ComplexVectorCalculations::addition(vector<vector<complex<double>>> complexVector1, vector<vector<complex<double>>> complexVector2){
    vector<complex<double>> vectorForRow;
    vector<vector<complex<double>>> vectorAddition;
    
    if (equalSize(complexVector1, complexVector2)){
        for (int row = 0; row < complexVector1.size(); row++){
            for (int column = 0; column < complexVector1[row].size(); column++){
                vectorForRow.push_back(complexVector1[row][column] + complexVector2[row][column]);
            }
            vectorAddition.push_back(vectorForRow);
            vectorForRow.clear();
        }
    };
    return vectorAddition;
}

vector<vector<complex<double>>> ComplexVectorCalculations::subtraction(vector<vector<complex<double>>> complexVector1, vector<vector<complex<double>>> complexVector2){
    vector<complex<double>> vectorForRow;
    vector<vector<complex<double>>> vectorSubtraction;
    
    if (equalSize(complexVector1, complexVector2)){
        for (int row = 0; row < complexVector1.size(); row++){
            for (int column = 0; column < complexVector1[row].size(); column++){
                vectorForRow.push_back(complexVector1[row][column] - complexVector2[row][column]);
            }
            vectorSubtraction.push_back(vectorForRow);
            vectorForRow.clear();
        }
    }
    return vectorSubtraction;
}

vector<vector<complex<double>>> ComplexVectorCalculations::multiplication(vector<vector<complex<double>>> complexVector1, vector<vector<complex<double>>> complexVector2){
    complex<double> sumComplexNum(0,0);
    vector<complex<double>> vectorForRow;
    vector<vector<complex<double>>> vectorMultiplication;
    
    if (complexVector1.size() == complexVector2[0].size()){
        for (int row_vector1 = 0; row_vector1 < complexVector1.size(); row_vector1++){
            for (int col_vector2 = 0; col_vector2 < complexVector2[0].size(); col_vector2++){
                for (int col_vector1 = 0; col_vector1 < complexVector1[row_vector1].size(); col_vector1++){
                    sumComplexNum += complexVector1[row_vector1][col_vector1] * complexVector2[col_vector1][col_vector2];
                }
                vectorForRow.push_back(sumComplexNum);
                sumComplexNum = 0;
            }
            vectorMultiplication.push_back(vectorForRow);
            vectorForRow.clear();
        }
    }
    return vectorMultiplication;
}

vector<vector<complex<double>>> ComplexVectorCalculations::scalarMultiplication(complex<double> scalarValue, vector<vector<complex<double>>> complexVector){
    vector<complex<double>> vectorForRow;
    vector<vector<complex<double>>> vectorMultiplication;
    
    for (int row = 0; row < complexVector.size(); row++){
        for (int column = 0; column < complexVector[row].size(); column++){
            vectorForRow.push_back(scalarValue * complexVector[row][column]);
        }
        vectorMultiplication.push_back(vectorForRow);
        vectorForRow.clear();
    }
    return vectorMultiplication;
}

vector<vector<complex<double>>> ComplexVectorCalculations::tensor(vector<vector<complex<double>>> complexVector1, vector<vector<complex<double>>> complexVector2){
    vector<complex<double>> vectorForRow;
    vector<vector<complex<double>>> vectorTensor;
    
    for (int row_vector1 = 0; row_vector1 < complexVector1.size(); row_vector1++){
        for (int row_vector2 = 0; row_vector2 < complexVector2.size(); row_vector2++){
            for (int col_vector1 = 0; col_vector1 < complexVector1[0].size(); col_vector1++){
                for (int col_vector2 = 0; col_vector2 < complexVector2[0].size(); col_vector2++){
                    vectorForRow.push_back(complexVector1[row_vector1][col_vector1] * complexVector2[row_vector2][col_vector2]);
                }
            }
            vectorTensor.push_back(vectorForRow);
            vectorForRow.clear();
        }
    }
    return vectorTensor;
}

vector<vector<complex<double>>> ComplexVectorCalculations::conjugate(vector<vector<complex<double>>> complexVector){
    vector<complex<double>> vectorForRow;
    vector<vector<complex<double>>> complexVectorConjugate;
    
    for (int row = 0; row < complexVector.size(); row++){
        for (int column = 0; column < complexVector[row].size(); column++){
            vectorForRow.push_back(conj(complexVector[row][column]));
        }
        complexVectorConjugate.push_back(vectorForRow);
        vectorForRow.clear();
    }
    return complexVectorConjugate;
}

vector<vector<complex<double>>> ComplexVectorCalculations::transpose(vector<vector<complex<double>>> complexVector){
    vector<complex<double>> vectorForRow;
    vector<vector<complex<double>>> complexVectorTranspose;
    
    for (int column = 0; column < complexVector[0].size(); column++){
        for (int row = 0; row < complexVector.size(); row++){
            vectorForRow.push_back(complexVector[row][column]);
        }
        complexVectorTranspose.push_back(vectorForRow);
        vectorForRow.clear();
    }
    return complexVectorTranspose;
}

vector<vector<complex<double>>> ComplexVectorCalculations::adjoint(vector<vector<complex<double>>> complexVector){
    return conjugate(transpose(complexVector));
}

bool ComplexVectorCalculations::equalSize(vector<vector<complex<double>>> complexVector1, vector<vector<complex<double>>> complexVector2){
    int numOfColumns = (int)complexVector1[0].size();
    
    if (complexVector1.size() == complexVector2.size()){
        for (int row = 0; row < complexVector1.size(); row++){
            if ((complexVector1[row].size() != numOfColumns) || (complexVector2[row].size() != numOfColumns)){
                return false;
            }
        }
        return true;
    }
    else {
        return false;
    }
}

void ComplexVectorCalculations::viewComplexVector(vector<vector<complex<double>>> complexVector){
    for (int row = 0; row < complexVector.size(); row++){
        for (int column = 0; column < complexVector[row].size(); column++){
            cout << setw(10) << complexVector[row][column];
        }
        cout << endl;
    }
    cout << endl;
}
