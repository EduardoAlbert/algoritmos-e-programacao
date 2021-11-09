#include "conversorTempo.h"
#include <iostream>

using namespace std;

conversorTempo::conversorTempo() {
}

conversorTempo::conversorTempo(const conversorTempo& orig) {
}

conversorTempo::~conversorTempo() {
}

void conversorTempo::lerDados() {
    
    cout << "Duração do evento em segundos: ";
    cin >> this->segundos;
    
}

void conversorTempo::converterParaHorasMinutosSegundos() {
    
    int horas, minutos, segundos;
    
    horas = this->segundos / 3600;
    minutos = (this->segundos % 3600) / 60;
    segundos = (this->segundos % 3600) % 60;
    
    cout << horas << " horas, " << minutos << " minutos e " << segundos << " segundos.";
    
}
