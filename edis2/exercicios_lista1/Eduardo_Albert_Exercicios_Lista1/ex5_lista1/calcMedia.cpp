#include "calcMedia.h"
#include <iostream>

using namespace std;

calcMedia::calcMedia() {
}

calcMedia::calcMedia(const calcMedia& orig) {
}

calcMedia::~calcMedia() {
}

void calcMedia::lerDados() {
    
    cout << "Nota 1: ";
    cin >> this->nota1;
    cout << "Nota 2: ";
    cin >> this->nota2;
    cout << "Nota 3: ";
    cin >> this->nota3;
    
}

float calcMedia::calcMediaPonderada() {
    
    float mediaPonderada;
    mediaPonderada = (this->nota1*2 + this->nota2*3 + this->nota3*5) / 10;
    
    return mediaPonderada;
    
}