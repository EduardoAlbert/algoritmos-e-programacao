#include <iostream>
#include <stdlib.h>

using namespace std;

int main() 
{
    int option, num1, num2;
    
    cout << "Escolha uma opção:\n" 
            << "1 - Somar\n" 
            << "2 - Subtrair\n"
            << "3 - Sair\n"; cin >> option;
    
    switch (option)
    {
        case 1:
            cout << "Informe um número: ";
            cin >> num1;
            cout << "Informe outro número: ";
            cin >> num2;
            cout << "Resultado da Soma: " << num1 + num2;
            break;
        case 2:
            cout << "Informe um número: ";
            cin >> num1;
            cout << "Informe outro número: ";
            cin >> num2;
            cout << "Resultado da Subtração: " << num1 - num2;
            break;
        case 3:
            cout << "Saindo...";
            return 0;
        default:
            system("clear||cls");
            cout << "Escolha uma opção válida!\n";
            main();
    }
    return 0;
}
