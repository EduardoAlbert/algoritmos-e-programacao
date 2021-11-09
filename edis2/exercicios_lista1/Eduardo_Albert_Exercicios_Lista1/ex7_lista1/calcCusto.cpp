#include "calcCusto.h"
#include <iostream>

using namespace std;

calcCusto::calcCusto() {
}

calcCusto::calcCusto(const calcCusto& orig) {
}

calcCusto::~calcCusto() {
}

void calcCusto::lerDados() {
    
    cout << "Custo de fábrica: ";
    cin >> this->custoDeFabrica;
    
}

float calcCusto::calcCustoAoConsumidor() {
    
    float valDistribuidor, valImpostos, custoAoConsumidor;
    
    valDistribuidor = this->custoDeFabrica + (this->custoDeFabrica * 28 / 100);
    valImpostos = this->custoDeFabrica + (this->custoDeFabrica * 45 / 100);
    
    custoAoConsumidor = this->custoDeFabrica + valDistribuidor + valImpostos;
    
    return custoAoConsumidor;
    
}