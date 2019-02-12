//
//  quantum_gates.cpp
//  Quantum Computing Project
//
//

#include "quantum_gates.h"

vector<vector<complex<double>>> QuantumGates::toffoliGate(vector<vector<complex<double>>>, vector<vector<complex<double>>>, vector<vector<complex<double>>>){
    ComplexVectorCalculations calculate;
    vector<vector<complex<double>>> toffoli = calculate.tensor(calculate.tensor(identityMatrix, identityMatrix), cnotGate);
    
    return toffoli;
}

void QuantumGates::initializeQubit(int bit, vector<vector<complex<double>>> qubit){
    if (bit == 0){
        qubit.push_back({1,0});
        qubit.push_back({0,0});
    }
    if (bit == 1){
        qubit.push_back({0,0});
        qubit.push_back({1,0});
    }
}
