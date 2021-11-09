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
    
    cout << "Idade em dias: ";
    cin >> this->dias;
    
}

void conversorIdade::converterParaAnosMesesDias() {
    
    int anos, meses, dias;
    
    anos = this->dias / 365;
    meses = (this->dias % 365) / 30;
    dias = (this->dias % 365) % 30;
    
    cout << anos << " anos, " << meses << " meses e " << dias << " dias.";
    
}