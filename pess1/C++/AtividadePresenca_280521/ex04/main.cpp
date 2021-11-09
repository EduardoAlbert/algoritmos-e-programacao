#include <iostream>

using namespace std;

int main(void)
{
    int num1, num2;
    
    cout << "Digite um número: ";
    cin >> num1;
    
    cout << "Digite outro número: ";
    cin >> num2;
    
    if (num1 > num2)
        cout << num1 << " é o maior.";
    else if (num2 > num1)
        cout << num2 << " é o maior.";
    else
        cout << "Números iguais.";
    
    return 0;
}
