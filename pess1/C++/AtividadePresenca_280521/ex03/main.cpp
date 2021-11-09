#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float faht, cels;
    
    cout << "Valor em graus Fahrenheit: ";
    cin >> faht;
    
    cels = (faht - 32) * (5.0 / 9.0);
    cout << "Convertendo...\n";
    
    cout << "Valor em graus Celsius: ";
    cout << fixed << setprecision( 1 ) << cels;

    return 0;
}
