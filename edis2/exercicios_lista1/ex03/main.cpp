#include <iostream>

using namespace std;

int main() {
    
    int anos, meses, dias;
    
    cout << "Anos: ";
    cin >> anos;
    cout << "Meses: ";
    cin >> meses;
    cout << "Dias: ";
    cin >> dias;
    
    cout << "Idade em dias: " << anos * 365 + meses * 30 + dias;
    
    return 0;
}
