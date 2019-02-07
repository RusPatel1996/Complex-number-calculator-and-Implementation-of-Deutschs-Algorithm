//
//  main.cpp
//  Quantum Computing Project
//
//

#include <iostream>
#include <complex>
using namespace std;

int main(){
    complex<double> complex1(3,2), complex2(1,7);
    complex<double> complexResult = complex1*complex2;
    cout << complexResult.real() << " + " << complexResult.imag() << "i" << endl;
    cout << conj(complexResult) << endl;
    
    return 0;
}
