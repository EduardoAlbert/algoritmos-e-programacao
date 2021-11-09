#include <iostream>

using namespace std;

int main() 
{
    int option;
    cout << "Escolha uma opção:\n"
            << "1 - São Paulo\n"
            << "2 - Santos\n"
            << "3 - Palmeiras\n"
            << "4 - Corinthians\n";
    cin >> option;
    
    switch (option) 
    {
        case 1:
            cout << "São Paulo Futebol Clube foi fundado em 25 de janeiro de 1930.";
            break;
        case 2:
            cout << "Santos Futebol Clube foi fundado em 14 de abril de 1912.";
            break;
        case 3:
            cout << "Não tem Mundial.";
            break;
        case 4:
            cout << "O Sport Club Corinthians Paulista foi fundado como uma equipe de futebol no dia 1 de setembro de 1910.";
            break;
        default:
            cout << "Escolha uma opcão válida!";
    }
    return 0;
}
