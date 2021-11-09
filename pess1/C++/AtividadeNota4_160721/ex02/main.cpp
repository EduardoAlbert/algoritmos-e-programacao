#include <iostream>
#include <cstring>

using namespace std;

float dividir(float n1, float n2)
{
    return n1 / n2;
}

int main() {
    
    float num1, num2, result;
    
    cout << "Digite um número: ";
    cin >> num1;
    cout << "Digite outro número: ";
    cin >> num2;
    
    result = dividir(num1, num2);
    
    cout << num1 << " dividido por " << num2 << " é igual a " << result;
    
    return 0;
}