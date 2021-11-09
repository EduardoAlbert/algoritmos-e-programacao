#include "cPessoa.h"
#include <iostream>
#include <math.h>

using namespace std;

cPessoa::cPessoa() {
}

cPessoa::cPessoa(const cPessoa& orig) {
}

cPessoa::~cPessoa() {
}

void cPessoa::lerDados() {
    
    char opcao;
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Nome: ";
        cin >> this->DadosPessoas[i].nome;
        
        cout << "Altura: ";
        cin >> this->DadosPessoas[i].altura;
        
        cout << "Peso: ";
        cin >> this->DadosPessoas[i].peso;
        
        cout << "CPF: ";
        cin >> this->DadosPessoas[i].cpf;
        
        cout << "Sexo: ";
        cin >> this->DadosPessoas[i].sexo;
        
        if (i < 4) {
            cout << "Deseja continuar cadastrando? Digite 's' ou 'n': ";
            cin >> opcao;
            if (opcao == 'n') break;
        }
        
        cout << endl;
    }
}

void cPessoa::imprimirIMC() {
    
    int cpf;
    cout << "Digite o CPF: ";
    cin >> cpf;
    
    for (int i = 0; i < 5; i++)
    {
        if (cpf == this->DadosPessoas[i].cpf)
        {
            float IMC = this->DadosPessoas[i].peso / pow(this->DadosPessoas[i].altura, 2);
            
            cout << "IMC: " << IMC;
            break;
        }
    }
}