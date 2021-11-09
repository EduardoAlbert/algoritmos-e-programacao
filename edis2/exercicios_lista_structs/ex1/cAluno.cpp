#include "cAluno.h"
#include <iostream>

using namespace std;

cAluno::cAluno() {
}

cAluno::cAluno(const cAluno& orig) {
}

cAluno::~cAluno() {
}

void cAluno::lerDados() {
    
    char opcao;
    int i;
    do
    {
        cout << "Nome: ";
        cin >> this->DadosAlunos[i].nome;
        cout << "Matrícula: ";
        cin >> this->DadosAlunos[i].matricula;
        cout << "Nota 1: ";
        cin >> this->DadosAlunos[i].nota1;
        cout << "Nota 2: ";
        cin >> this->DadosAlunos[i].nota2;
        cout << endl;
        
        i++;
        
        cout << "Continuar? 's' ou 'n': ";
        cin >> opcao;
        
    } while (opcao == 's' && i < 5);
    
    this->imprimirDados(i);
    
}

void cAluno::imprimirDados(int n) {
    
    for (int i = 0; i < n; i++)
    {
        cout << "Matrícula: " << this->DadosAlunos[i].matricula << endl;
        cout << "Nome: " << this->DadosAlunos[i].nome << endl;
        cout << "Média: " << (this->DadosAlunos[i].nota1 + this->DadosAlunos[i].nota2) / 2 << endl;
        cout << endl;
    }
    
}