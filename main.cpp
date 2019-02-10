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
    
    vector<vector<complex<double>>> vec1;
    vector<vector<complex<double>>> vec2;
    
    vec1.push_back({{3,2},{0,0},{5,-6}});
    vec1.push_back({{1,0},{4,2},{0,1}});
    vec1.push_back({{4,-1},{0,0},{4,0}});
    vec2.push_back({{5,0},{2,-1},{6,-4}});
    vec2.push_back({{0,0},{4,5},{2,0}});
    vec2.push_back({{7,-4},{2,7},{0,0}});
    
    ComplexVectorCalculations calculate;
    cout<< calculate.multiplication(vec1, vec2)[1][1] << endl;
    
    return 0;
}
