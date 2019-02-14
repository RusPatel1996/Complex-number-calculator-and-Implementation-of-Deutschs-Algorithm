//
//  quantum_gates.h
//  Quantum Computing Project
//
//

#ifndef quantum_gates_h
#define quantum_gates_h

#include <stdio.h>
#include "complex_vector_calculator.h"

class QuantumGates
{
public:
    vector<vector<complex<double>>> identityMatrix = {
        {{1,0},{0,0}},
        {{0,0},{1,0}}
    };
    vector<vector<complex<double>>> cnotGate = {
        {{1,0},{0,0},{0,0},{0,0}},
        {{0,0},{1,0},{0,0},{0,0}},
        {{0,0},{0,0},{0,0},{1,0}},
        {{0,0},{0,0},{1,0},{0,0}}
    };
    vector<vector<complex<double>>> toffoliGate = {
        {{1,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
        {{0,0},{1,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
        {{0,0},{0,0},{1,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
        {{0,0},{0,0},{0,0},{1,0},{0,0},{0,0},{0,0},{0,0}},
        {{0,0},{0,0},{0,0},{0,0},{1,0},{0,0},{0,0},{0,0}},
        {{0,0},{0,0},{0,0},{0,0},{0,0},{1,0},{0,0},{0,0}},
        {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{1,0}},
        {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{1,0},{0,0}}
    };
    
    
protected:
private:
};

#endif /* quantum_gates_h */
