#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    ofstream arq;
    string nome;
    int idade;
    
    arq.open("pessoas.txt");
    arq << "nome, idade" << endl;
    
    for (int i = 1; i <= 3; i++)
    {
        cout << "Nome da Pessoa " << i << ": ";
        cin >> nome;
        cout << "Idade da Pessoa " << i << ": ";
        cin >> idade;
        arq << nome << ", " << idade << endl;
    }
    
    arq.close();
    
    return 0;
}

