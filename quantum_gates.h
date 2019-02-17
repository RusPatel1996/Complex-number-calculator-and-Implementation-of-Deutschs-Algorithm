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
    ComplexVectorCalculations calc;
    vector<vector<complex<double>>> cnotGate(int, int);
    vector<vector<complex<double>>> toffoliGate(int, int, int);
    vector<vector<complex<double>>> fredkinGate(int, int, int);
    vector<vector<complex<double>>> deutschsAlgorithm(int, int);
    vector<vector<complex<double>>> initializeQubit(vector<vector<complex<double>>>, int);
protected:
private:
    vector<vector<complex<double>>> qubit1, qubit2, qubit3;
    vector<vector<complex<double>>> HadamardMatrix = {
        {{(1/sqrt(2)),0},{(1/sqrt(2)),0}},
        {{(1/sqrt(2)),0},{(-1/sqrt(2)),0}}
    };
    vector<vector<complex<double>>> identityMatrix = {
        {{1,0},{0,0}},
        {{0,0},{1,0}}
    };
    vector<vector<complex<double>>> cnotMatrix = {
        {{1,0},{0,0},{0,0},{0,0}},
        {{0,0},{1,0},{0,0},{0,0}},
        {{0,0},{0,0},{0,0},{1,0}},
        {{0,0},{0,0},{1,0},{0,0}}
    };
    vector<vector<complex<double>>> toffoliMatrix = {
        {{1,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
        {{0,0},{1,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
        {{0,0},{0,0},{1,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
        {{0,0},{0,0},{0,0},{1,0},{0,0},{0,0},{0,0},{0,0}},
        {{0,0},{0,0},{0,0},{0,0},{1,0},{0,0},{0,0},{0,0}},
        {{0,0},{0,0},{0,0},{0,0},{0,0},{1,0},{0,0},{0,0}},
        {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{1,0}},
        {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{1,0},{0,0}}
    };
    vector<vector<complex<double>>> fredkinMatrix = {
        {{1,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
        {{0,0},{1,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
        {{0,0},{0,0},{1,0},{0,0},{0,0},{0,0},{0,0},{0,0}},
        {{0,0},{0,0},{0,0},{1,0},{0,0},{0,0},{0,0},{0,0}},
        {{0,0},{0,0},{0,0},{0,0},{1,0},{0,0},{0,0},{0,0}},
        {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{1,0},{0,0}},
        {{0,0},{0,0},{0,0},{0,0},{0,0},{1,0},{0,0},{0,0}},
        {{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{1,0}}
    };
};

#endif /* quantum_gates_h */
