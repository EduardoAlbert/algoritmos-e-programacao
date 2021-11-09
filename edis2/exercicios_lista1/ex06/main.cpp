#include <iostream>

using namespace std;

int main() {
    
    int horas, minutos, segundos;
    
    cout << "Duração do evento em segundos: ";
    cin >> segundos;
    
    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = (segundos % 3600) % 60;
    
    cout << horas << " horas, " << minutos << " minutos e " << segundos << " segundos.";
    
    return 0;
}
