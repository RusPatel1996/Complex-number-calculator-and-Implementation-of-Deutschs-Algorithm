//
//  complex_vector_calculator.cpp
//  Quantum Computing Project
//
//

#include "complex_vector_calculator.h"

typedef vector<complex<double>> vcd;

vvcd ComplexVectorCalculations::addition(vvcd complexVector1, vvcd complexVector2){
    vcd vectorForRow;
    vvcd vectorAddition;
    
    if (equalSize(complexVector1, complexVector2)){
        for (int row = 0; row < complexVector1.size(); row++){
            for (int column = 0; column < complexVector1[row].size(); column++){
                vectorForRow.push_back(complexVector1[row][column] + complexVector2[row][column]);
            }
            vectorAddition.push_back(vectorForRow);
            vectorForRow.clear();
        }
    }
    else {
        cout << "Not Possible" << endl;
    }
    return vectorAddition;
}

vvcd ComplexVectorCalculations::subtraction(vvcd complexVector1, vvcd complexVector2){
    vcd vectorForRow;
    vvcd vectorSubtraction;
    
    if (equalSize(complexVector1, complexVector2)){
        for (int row = 0; row < complexVector1.size(); row++){
            for (int column = 0; column < complexVector1[row].size(); column++){
                vectorForRow.push_back(complexVector1[row][column] - complexVector2[row][column]);
            }
            vectorSubtraction.push_back(vectorForRow);
            vectorForRow.clear();
        }
    }
    else {
        cout << "Not Possible" << endl;
    }
    return vectorSubtraction;
}

vvcd ComplexVectorCalculations::multiplication(vvcd complexVector1, vvcd complexVector2){
    complex<double> sumComplexNum(0,0);
    vcd vectorForRow;
    vvcd vectorMultiplication;
    
    if (complexVector1[0].size() == complexVector2.size()){
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
    else {
        cout << "Not Possible" << endl;
    }
    return vectorMultiplication;
}

vvcd ComplexVectorCalculations::scalarMultiplication(complex<double> scalarValue, vvcd complexVector){
    vcd vectorForRow;
    vvcd vectorMultiplication;
    
    for (int row = 0; row < complexVector.size(); row++){
        for (int column = 0; column < complexVector[row].size(); column++){
            vectorForRow.push_back(scalarValue * complexVector[row][column]);
        }
        vectorMultiplication.push_back(vectorForRow);
        vectorForRow.clear();
    }
    return vectorMultiplication;
}

vvcd ComplexVectorCalculations::tensor(vvcd complexVector1, vvcd complexVector2){
    vcd vectorForRow;
    vvcd vectorTensor;
    
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

vvcd ComplexVectorCalculations::conjugate(vvcd complexVector){
    vcd vectorForRow;
    vvcd complexVectorConjugate;
    
    for (int row = 0; row < complexVector.size(); row++){
        for (int column = 0; column < complexVector[row].size(); column++){
            vectorForRow.push_back(conj(complexVector[row][column]));
        }
        complexVectorConjugate.push_back(vectorForRow);
        vectorForRow.clear();
    }
    return complexVectorConjugate;
}

vvcd ComplexVectorCalculations::transpose(vvcd complexVector){
    vcd vectorForRow;
    vvcd complexVectorTranspose;
    
    for (int column = 0; column < complexVector[0].size(); column++){
        for (int row = 0; row < complexVector.size(); row++){
            vectorForRow.push_back(complexVector[row][column]);
        }
        complexVectorTranspose.push_back(vectorForRow);
        vectorForRow.clear();
    }
    return complexVectorTranspose;
}

vvcd ComplexVectorCalculations::adjoint(vvcd complexVector){
    return conjugate(transpose(complexVector));
}

bool ComplexVectorCalculations::equalSize(vvcd complexVector1, vvcd complexVector2){
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

void ComplexVectorCalculations::viewComplexVector(vvcd complexVector){
    for (int row = 0; row < complexVector.size(); row++){
        for (int column = 0; column < complexVector[row].size(); column++){
            cout << setw(6) << complexVector[row][column];
        }
        cout << endl;
    }
    cout << endl;
}
