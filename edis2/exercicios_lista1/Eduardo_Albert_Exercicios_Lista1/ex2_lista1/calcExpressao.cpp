#include "calcExpressao.h"
#include <iostream>
#include <math.h>

using namespace std;

calcExpressao::calcExpressao() {
}

calcExpressao::calcExpressao(const calcExpressao& orig) {
}

calcExpressao::~calcExpressao() {
}

void calcExpressao::lerDados() {
    
    cout << "Digite o valor de A: ";
    cin >> this->A;
    cout << "Digite o valor de B: ";
    cin >> this->B;
    cout << "Digite o valor de C: ";
    cin >> this->C;
    
}

float calcExpressao::calcExp() {
     
    float R, S, D;
    
    R = pow(this->A + this->B, 2);
    S = pow(this->B + this->C, 2);
    D = (R + S) / 2;
    
    return D;
    
}