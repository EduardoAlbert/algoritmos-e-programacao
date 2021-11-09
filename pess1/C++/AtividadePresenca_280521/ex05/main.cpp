#include <iostream>

using namespace std;

int main(void) 
{
    int num1, num2, num3;
    
    cout << "Digite o 1º número: "; 
    cin >> num1;
    
    cout << "Digite o 2º número: "; 
    cin >> num2;
    
    cout << "Digite o 3º número: "; 
    cin >> num3;
    
    if ((num1 > num2) && (num1 > num3))
        cout << num1 << " é o maior.";
    else if ((num2 > num1) && (num2 > num3))
        cout << num2 << " é o maior.";
    else if ((num3 > num1) && (num3 > num2))
        cout << num3 << " é o maior.";
    else
        cout << "Números iguais.";
        
    return 0;
}
