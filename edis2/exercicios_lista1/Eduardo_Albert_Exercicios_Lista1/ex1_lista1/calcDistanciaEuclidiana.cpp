#include "calcDistanciaEuclidiana.h"
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

calcDistanciaEuclidiana::calcDistanciaEuclidiana() {
}

calcDistanciaEuclidiana::calcDistanciaEuclidiana(const calcDistanciaEuclidiana& orig) {
}

calcDistanciaEuclidiana::~calcDistanciaEuclidiana() {
}

void calcDistanciaEuclidiana::lerDados() {
    
    cout << "Digite o valor de x1" << endl;
    cin >> this->x1;
    cout << "Digite o valor de y1" << endl;
    cin >> this->y1;
    cout << "Digite o valor de x2" << endl;
    cin >> this->x2;
    cout << "Digite o valor de y2" << endl;
    cin >> this->y2;
    
}

float calcDistanciaEuclidiana::calcularDE() {
    
    float d;
    d = sqrt( pow(this->x2 - this->x1, 2) + pow(this->y2 - this->y1, 2) );
    return d;
    
}