#include "metodosBasicos.h"
#include <cstdlib>
#include <iostream>

using namespace std;

metodosBasicos::metodosBasicos() {
}

metodosBasicos::metodosBasicos(const metodosBasicos& orig) {
}

metodosBasicos::~metodosBasicos() {
}

void metodosBasicos::leituraValorInteiro() {
    
    int n;
    cout << "Digite um valor: ";
    cin >> n;
    cout << n;
    
}

void metodosBasicos::leituraValorReal() {
    
    float n;
    cout << "Digite um valor: ";
    cin >> n;
    cout << n;
}