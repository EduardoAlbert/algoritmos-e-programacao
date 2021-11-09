#include "numero.h"
#include <iostream>

using namespace std;

numero::numero() {
}

numero::numero(const numero& orig) {
}

numero::~numero() {
}

void numero::lerDados() {
    
    int n1, n2;
    
    cout << "Digite um número: ";
    cin >> n1;
    cout << "Digite outro número: ";
    cin >> n2;
    
    cout << this->retornarMenor(n1, n2);
    
}

int numero::retornarMenor(int n1, int n2) {
    
    if (n1 < n2)
        return n1;
    else
        return n2;
    
}