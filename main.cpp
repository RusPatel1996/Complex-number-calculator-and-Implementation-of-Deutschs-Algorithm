//
//  main.cpp
//  Quantum Computing Project
//
//

#include <iostream>
#include "complex_calculator.h"
#include "complex_vector_calculator.h"
using namespace std;

int main(){
    complex<double> complex1(3,2), complex2(1,7);
    //complex<double> complexResult = complex1*complex2;
    //cout << complexResult.real() << " + " << complexResult.imag() << "i" << endl;
    //cout << conj(complexResult) << endl;
    
    vector<complex<double>> complexNumVector;
    complexNumVector.push_back(complex1);
    cout << complexNumVector.at(0) << endl;
    
    ComplexCalculations test;
    cout << test.addition(complex1, complex2) << endl;
    
    return 0;
}
