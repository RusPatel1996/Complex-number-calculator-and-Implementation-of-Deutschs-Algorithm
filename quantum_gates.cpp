//
//  quantum_gates.cpp
//  Quantum Computing Project
//
//

#include "quantum_gates.h"

vvcd QuantumGates::initializeQubit(vvcd qubit, int bit){
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

vvcd QuantumGates::cnotGate(int bit1, int bit2){
    qubit1 = initializeQubit(qubit1, bit1);
    qubit2 = initializeQubit(qubit2, bit2);
    
    return calc.multiplication(cnotMatrix, calc.tensor(qubit1, qubit2));
}

vvcd QuantumGates::toffoliGate(int bit1, int bit2, int bit3){
    qubit1 = initializeQubit(qubit1, bit1);
    qubit2 = initializeQubit(qubit2, bit2);
    qubit3 = initializeQubit(qubit3, bit3);
    
    return calc.multiplication(toffoliMatrix, calc.tensor(calc.tensor(qubit1, qubit2), qubit3));
}

vvcd QuantumGates::fredkinGate(int bit1, int bit2, int bit3){
    qubit1 = initializeQubit(qubit1, bit1);
    qubit2 = initializeQubit(qubit2, bit2);
    qubit3 = initializeQubit(qubit3, bit3);
 
    return calc.multiplication(fredkinMatrix, calc.tensor(calc.tensor(qubit1, qubit2), qubit3));
}

vvcd QuantumGates::deutschsAlgorithm(int uf0, int uf1){
    qubit1 = initializeQubit(qubit1, 0);
    qubit2 = initializeQubit(qubit2, 1);
    
    vvcd ufMatrix;
    
    if (uf0 == 0 && uf1 == 1){
        ufMatrix = {
            {{1,0},{0,0},{0,0},{0,0}},
            {{0,0},{1,0},{0,0},{0,0}},
            {{0,0},{0,0},{0,0},{1,0}},
            {{0,0},{0,0},{1,0},{0,0}}
        };
    }
    else if (uf0 == 1 && uf1 == 0){
        ufMatrix = {
            {{0,0},{1,0},{0,0},{0,0}},
            {{1,0},{0,0},{0,0},{0,0}},
            {{0,0},{0,0},{1,0},{0,0}},
            {{0,0},{0,0},{0,0},{1,0}}
        };
    }
    else if (uf0 == 0 && uf1 == 0){
        ufMatrix = {
            {{1,0},{0,0},{0,0},{0,0}},
            {{0,0},{1,0},{0,0},{0,0}},
            {{0,0},{0,0},{1,0},{0,0}},
            {{0,0},{0,0},{0,0},{1,0}}
        };
    }
    else if (uf0 == 1 && uf1 == 1){
        ufMatrix = {
            {{0,0},{1,0},{0,0},{0,0}},
            {{1,0},{0,0},{0,0},{0,0}},
            {{0,0},{0,0},{0,0},{1,0}},
            {{0,0},{0,0},{1,0},{0,0}}
        };
    }
    
    return calc.multiplication(calc.multiplication(calc.tensor(HadamardMatrix, identityMatrix), ufMatrix), calc.multiplication(calc.tensor(HadamardMatrix, HadamardMatrix), calc.tensor(qubit1, qubit2)));
}
