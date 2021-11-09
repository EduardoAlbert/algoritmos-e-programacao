#include <iostream>

using namespace std;

int main() {
    
    int anos, meses, dias;
    
    cout << "Idade em dias: ";
    cin >> dias;
    
    anos = dias / 365;
    meses = (dias % 365) / 30;
    dias = (dias % 365) % 30;
    
    cout << anos << " anos, " << meses << " meses e " << dias << " dias.";
    
    return 0;
}
