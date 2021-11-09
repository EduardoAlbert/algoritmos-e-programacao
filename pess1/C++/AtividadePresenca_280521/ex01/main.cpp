#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    char name[30];
    float distance, time, average_speed;
    
    cout << "Nome: ";
    cin.getline(name, sizeof(name));
    
    cout << name << ", quantos quilômetros você pedalou? ";
    cin >> distance;
    
    cout << "Quantos minutos levou? ";
    cin >> time;
    
    average_speed = distance / ( time / 60 );
    cout << "Olá, " << name << ". Você percorreu " << distance << "km em " << time << " minutos, sua velocidade média foi: ";
    cout << fixed << setprecision( 1 ) << average_speed;
    
    return 0;
}
