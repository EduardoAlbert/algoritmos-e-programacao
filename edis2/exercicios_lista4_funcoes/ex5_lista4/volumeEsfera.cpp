#include "volumeEsfera.h"
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

volumeEsfera::volumeEsfera() {
}

volumeEsfera::volumeEsfera(const volumeEsfera& orig) {
}

volumeEsfera::~volumeEsfera() {
}

void volumeEsfera::lerDados() {
    
    float raio;
    cout << "Raio da esfera: ";
    cin >> raio;
    
    cout << this->calcularVolume(raio);
    
}

float volumeEsfera::calcularVolume(float raio) {
    
    float volume = 4/3 * 3.14 * pow(raio, 3);
    return volume;
    
}