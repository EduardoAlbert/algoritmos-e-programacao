#include "valor.h"
#include <iostream>

using namespace std;

valor::valor() {
}

valor::valor(const valor& orig) {
}

valor::~valor() {
}

void valor::lerDados() {
    
    int valor;
    
    cout << "Digite um valor: ";
    cin >> valor;
    
    cout << this->verificaValor(valor);
    
}

int valor::verificaValor(int valor) {
    
    if (valor > 0)
        return 1;
    else if (valor < 0)
        return -1;
    else
        return 0;
    
}