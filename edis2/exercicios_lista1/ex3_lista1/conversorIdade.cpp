#include "conversorIdade.h"
#include <iostream>

using namespace std;

conversorIdade::conversorIdade() {
}

conversorIdade::conversorIdade(const conversorIdade& orig) {
}

conversorIdade::~conversorIdade() {
}

void conversorIdade::lerDados() {
    
    cout << "Anos: ";
    cin >> this->anos;
    cout << "Meses: ";
    cin >> this->meses;
    cout << "Dias: ";
    cin >> this->dias;
    
}

int conversorIdade::converterParaDias() {
    
    return this->anos * 365 + this->meses * 30 + this->dias;
    
}