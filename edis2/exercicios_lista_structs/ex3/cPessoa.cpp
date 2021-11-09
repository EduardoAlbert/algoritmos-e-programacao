#include "cPessoa.h"
#include <iostream>

using namespace std;

cPessoa::cPessoa() {
}

cPessoa::cPessoa(const cPessoa& orig) {
}

cPessoa::~cPessoa() {
}

void cPessoa::lerDados() {
    
    char opcao;
    
    int i;
    do {
        cout << "Nome: ";
        cin >> this->DadosPessoas[i].nome;
        cout << "CPF: ";
        cin >> this->DadosPessoas[i].CPF;
        
        i++;
        
        cout << "Continuar? 's' ou 'n': ";
        cin >> opcao;
        
    } while (opcao == 's' && i < 9);
    
    int CPF;
    cout << "CPF para pesquisar: ";
    cin >> CPF;
    cout << "Resultado da Pesquisa Sequencial: ";
    this->pesquisaSequencial(CPF);
    cout << "Resultado da Pesquisa Binária: ";
    this->bublesort(i);
    this->pesquisaBinaria(CPF, i);
    
}

void cPessoa::pesquisaSequencial(int CPF) {
    
    for (int i = 0; i < 9; i++)
    {
        if (CPF == this->DadosPessoas[i].CPF)
            cout << this->DadosPessoas[i].nome << endl;
    }
    
}

void cPessoa::pesquisaBinaria(int CPF, int n) {
    
    int inf, sup, meio;
    inf = 0;
    sup = n-1;
    
    while (inf <= sup) {
        
        meio = (inf+sup)/2;
        if (CPF == this->DadosPessoas[meio].CPF)
        {
            cout << this->DadosPessoas[meio].nome;
            break;
        } 
        else if (CPF < this->DadosPessoas[meio].CPF)
            sup = meio-1;
        else
            inf = meio+1;
    }
    
}

void cPessoa::bublesort(int n) {
    
    Pessoa temp;
    
    for (int i = n-1; i >= 1; i--) 
    {
        for (int j = 0; j < i; j++)
        {
            if (this->DadosPessoas[j].CPF > this->DadosPessoas[j+1].CPF)
            {
                temp = this->DadosPessoas[j];
                this->DadosPessoas[j] = this->DadosPessoas[j+1];
                this->DadosPessoas[j+1] = temp;
            }
        }
    }
}