//
//  quantum_gates.cpp
//  Quantum Computing Project
//
//

#include "quantum_gates.h"

vector<vector<complex<double>>> QuantumGates::initializeQubit(vector<vector<complex<double>>> qubit, int bit){
    if (bit == 0){
        qubit.push_back({{1,0}});
        qubit.push_back({{0,0}});
    }
    else if (bit == 1){
        qubit.push_back({{0,0}});
        qubit.push_back({{1,0}});
    }
    
    return qubit;
}

vector<vector<complex<double>>> QuantumGates::cnotGate(int bit1, int bit2){
    qubit1 = initializeQubit(qubit1, bit1);
    qubit2 = initializeQubit(qubit2, bit2);
    
    return calc.multiplication(cnotMatrix, calc.tensor(qubit1, qubit2));
}

vector<vector<complex<double>>> QuantumGates::toffoliGate(int bit1, int bit2, int bit3){
    qubit1 = initializeQubit(qubit1, bit1);
    qubit2 = initializeQubit(qubit2, bit2);
    qubit3 = initializeQubit(qubit3, bit3);
    
    return calc.multiplication(toffoliMatrix, calc.tensor(calc.tensor(qubit1, qubit2), qubit3));
}

/*
vector<vector<complex<double>>> QuantumGates::fredkinGate(int bit1, int bit2, int bit3){
    qubit1 = initializeQubit(qubit1, bit1);
    qubit2 = initializeQubit(qubit2, bit2);
    qubit3 = initializeQubit(qubit3, bit3);
 
    return calc.tensor(calc.tensor(qubit1, calc.multiplication(calc.conjugate(qubit1),qubit2.) xor calc.multiplication(qubit1, qubit3)), calc.multiplication(calc.conjugate(qubit1),qubit3) xor calc.multiplication(qubit1, qubit2)));
}
*/

vector<vector<complex<double>>> QuantumGates::deutschsAlgorithm(int uf0, int uf1){
    qubit1 = initializeQubit(qubit1, 0);
    qubit2 = initializeQubit(qubit2, 1);
    
    vector<vector<complex<double>>> ufMatrix;
    
    if (uf0 == 0 && uf1 == 1){
        
    }
    else if (uf0 == 1 && uf1 == 0){
        
    }
    else if (uf0 == 0 && uf1 == 0){
        
    }
    else if (uf0 == 1 && uf1 == 1){
        
    }
    
    return calc.multiplication(calc.multiplication(calc.tensor(qubit1, qubit2), calc.tensor(HadamardMatrix, HadamardMatrix)), calc.tensor(HadamardMatrix, identityMatrix));
}
