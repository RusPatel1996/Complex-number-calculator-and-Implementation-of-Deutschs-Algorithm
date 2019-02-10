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
    //vector<complex<double>> x = {{1,2},{2,3}};
    //vec.push_back(x);
    
    vec1.push_back({{1,2},{2,3}});
    vec1.push_back({{3,4},{4.5}});
    vec2.push_back({{1,2},{2,3}});
    vec2.push_back({{3,4},{4.5}});
    //cout << vec[1][0] << endl;
    
    ComplexVectorCalculations calculate;
    cout << calculate.verifySize(vec1, vec2) << endl;
    cout << calculate.addition(vec1, vec2)[0][1]
    
    
    
    return 0;
}
