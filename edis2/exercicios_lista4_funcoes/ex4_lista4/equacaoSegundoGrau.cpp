#include "equacaoSegundoGrau.h"
#include <cstdlib>
#include <iostream>

using namespace std;

equacaoSegundoGrau::equacaoSegundoGrau() {
}

equacaoSegundoGrau::equacaoSegundoGrau(const equacaoSegundoGrau& orig) {
}

equacaoSegundoGrau::~equacaoSegundoGrau() {
}

void equacaoSegundoGrau::lerCoeficientes() {
    
    int a, b, c;
    
    cout << "Valor de a:";
    cin >> a;
    cout << "Valor de b:";
    cin >> b;
    cout << "Valor de c:";
    cin >> c;
    
    
    cout << this->calcDelta(a, b, c);
    
}

int equacaoSegundoGrau::calcDelta(int a, int b, int c) {
    
    int delta;
    delta = (b*b) - (4*a*c);
    
    return delta;
    
}