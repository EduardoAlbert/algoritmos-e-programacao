#include <iostream>

using namespace std;

int main() {
    
    float n1, n2, n3, med;
    
    cout << "Nota 1: ";
    cin >> n1;
    cout << "Nota 2: ";
    cin >> n2;
    cout << "Nota 3: ";
    cin >> n3;
    
    med = (n1*2 + n2*3 + n3*5) / 10;
    
    cout << "A média é " << med;
    
    return 0;
}
