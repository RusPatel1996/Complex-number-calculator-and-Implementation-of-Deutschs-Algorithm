//
//  main.cpp
//  Quantum Computing Project
//
//

#include <iostream>
#include "complex_calculator.h"
#include "complex_vector_calculator.h"
#include "quantum_gates.h"
using namespace std;

void complexNumberCalculations();
void complexVectorCalculations();
void quantumGates();
complex<double> createComplexNumber(double real, double imag);
vector<vector<complex<double>>> createComplexVector(int rows, int cols);

int main(){
    int choice = 0;
    cout << "What would you like to do?" << endl;
    cout << "  1. Complex Number Calculations" << endl;
    cout << "  2. Complex Vector Calculations" << endl;
    cout << "  3. Work with Quantum Gates" << endl;
    cin >> choice;
    
    switch (choice) {
        case 1:
            complexNumberCalculations();
            break;
        case 2:
            complexVectorCalculations();
            break;
        case 3:
            quantumGates();
            break;
        default:
            break;
    }
    
    return 0;
}

void complexNumberCalculations(){
    ComplexCalculations cmplxCalc;
    int choice = 0;
    double real = 0;
    double imag = 0;
    
    cout << "You have chosen Complex Number Calculations, what would you like to do next?" << endl;
    cout << "  1. Addition" << endl;
    cout << "  2. Subtraction" << endl;
    cout << "  3. Multiplication" << endl;
    cout << "  4. Division" << endl;
    cout << "  5. Modulus" << endl;
    cout << "  6. Conjugate" << endl;
    cin >> choice;
    
    cout << "Input real value for the first complex number: ";
    cin >> real;
    cout << "Input imaginary value for the first complex number: ";
    cin >> imag;
    
    complex<double> complex1 = createComplexNumber(real, imag);
    complex<double> complex2;
    
    if (choice <= 4){
        cout << "Input real value for the second complex number: ";
        cin >> real;
        cout << "Input imaginary value for the second complex number: ";
        cin >> imag;
        complex2 = createComplexNumber(real, imag);
    }
    
    switch (choice) {
        case 1:
            cout << cmplxCalc.addition(complex1, complex2) << endl;
            break;
        case 2:
            cout << cmplxCalc.subtraction(complex1, complex2) << endl;
            break;
        case 3:
            cout << cmplxCalc.multiplication(complex1, complex2) << endl;
            break;
        case 4:
            cout << cmplxCalc.division(complex1, complex2) << endl;
            break;
        case 5:
            cout << cmplxCalc.modulus(complex1) << endl;
            break;
        case 6:
            cout << cmplxCalc.conjugate(complex1) << endl;
            break;
        default:
            break;
    }
    
    return;
}

void complexVectorCalculations(){
    ComplexVectorCalculations vecCalc;
    int choice = 0;
    int rows = 0;
    int cols = 0;
    complex<double> complexScalar;
    
    cout << "You have chosen Complex Vector Calculations, what would you like to do next?" << endl;
    cout << "  1. Addition" << endl;
    cout << "  2. Subtraction" << endl;
    cout << "  3. Multiplication" << endl;
    cout << "  4. Scalar Multiplication" << endl;
    cout << "  5. Conjugate" << endl;
    cout << "  6. Transpose" << endl;
    cout << "  7. Adjoint" << endl;
    cin >> choice;
    
    cout << "Please enter the rows and columns for the vector: ";
    cin >> rows;
    cin >> cols;
    vector<vector<complex<double>>> complexVector1 = createComplexVector(rows, cols);
    vector<vector<complex<double>>> complexVector2;
    
    vecCalc.viewComplexVector(complexVector1);
    if (choice < 4){
        cout << "Please enter the rows and columns for the vector: ";
        cin >> rows;
        cin >> cols;
        complexVector2 = createComplexVector(rows, cols);
        vecCalc.viewComplexVector(complexVector2);
    }
    else if (choice == 4){
        double real = 0;
        double imag = 0;
        cout << "Please enter the real and imaginary value for the complex scalar: ";
        cin >> real;
        cin >> imag;
        complexScalar = {real, imag};
    }
    
    switch (choice) {
        case 1:
            vecCalc.viewComplexVector(vecCalc.addition(complexVector1, complexVector2));
            break;
        case 2:
            vecCalc.viewComplexVector(vecCalc.subtraction(complexVector1, complexVector2));
            break;
        case 3:
            vecCalc.viewComplexVector(vecCalc.multiplication(complexVector1, complexVector2));
            break;
        case 4:
            vecCalc.viewComplexVector(vecCalc.scalarMultiplication(complexScalar, complexVector1));
            break;
        case 5:
            vecCalc.viewComplexVector(vecCalc.conjugate(complexVector1));
            break;
        case 6:
            vecCalc.viewComplexVector(vecCalc.transpose(complexVector1));
            break;
        case 7:
            vecCalc.viewComplexVector(vecCalc.adjoint(complexVector1));
            break;
        default:
            break;
    }
    
    return;
}

void quantumGates(){
    QuantumGates qGate;
    ComplexVectorCalculations vecCalc;
    int choice = 0;
    int q1 = 0, q2 = 0, q3 = 0;
    
    cout << "You have chosen to work with Quantum Gates, what would you like to do next?" << endl;
    cout << "  1. CNOT" << endl;
    cout << "  2. Toffoli" << endl;
    cout << "  3. Fredkin" << endl;
    cout << "  4. Deutsch's Algorithm" << endl;
    cin >> choice;
    
    cout << "Enter Value for Qubit 1: ";
    cin >> q1;
    cout << "Enter Value for Qubit 2: ";
    cin >> q2;
    
    if (choice == 2 || choice  == 3){
        cout << "Enter Value for Qubit 3: ";
        cin >> q3;
    }
    
    switch (choice) {
        case 1:
            vecCalc.viewComplexVector(qGate.cnotGate(q1, q2));
            break;
        case 2:
            vecCalc.viewComplexVector(qGate.toffoliGate(q1, q2, q3));
            break;
        case 3:
            vecCalc.viewComplexVector(qGate.fredkinGate(q1, q2, q3));
            break;
        case 4:
            vecCalc.viewComplexVector(qGate.deutschsAlgorithm(q1, q2));
            break;
        default:
            break;
    }
    
    return;
}

vector<vector<complex<double>>> createComplexVector(int rows, int cols){
    vector<complex<double>> rowInput;
    vector<vector<complex<double>>> cmplxVec;
    double real = 0;
    double imag = 0;
    
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << "Input real and imaginary value for the [" +  to_string(i) + "][" + to_string(j) + "] complex number: ";
            cin >> real;
            cin >> imag;
            rowInput.push_back(createComplexNumber(real, imag));
        }
        cmplxVec.push_back(rowInput);
        rowInput.clear();
    }
    
    return cmplxVec;
}

complex<double> createComplexNumber(double real, double imag){
    complex<double> complexNum(real, imag);
    return complexNum;
}
