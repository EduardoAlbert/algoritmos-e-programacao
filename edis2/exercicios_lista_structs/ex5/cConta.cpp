#include "cConta.h"
#include <iostream>

using namespace std;

cConta::cConta() {
}

cConta::cConta(const cConta& orig) {
}

cConta::~cConta() {
}

void cConta::criarContas() {
    
    float depoInicial;
    
    for (int i = 0; i < 3; i++)
    {
        cout << "Conta " << i+1 << endl;
        
        cout << "Nome: ";
        cin >> this->DadosContas[i].nome;
        
        cout << "CPF: ";
        cin >> this->DadosContas[i].CPF;
        
        cout << "Valor do Depósito Inicial: R$";
        cin >> depoInicial;
        this->depositar(depoInicial, this->DadosContas[i].CPF);
        
        cout << endl;
    }
    
    int opcao, CPF;
    float valor;
    
    while (true)
    {
        cout << "Selecione uma Opção:" << endl;
        cout << "[1] Depósito" << endl;
        cout << "[2] Saque" << endl;
        cout << "[3] Sair" << endl;
        cin >> opcao;

        if (opcao == 1 || opcao == 2)
        {
            cout << "Valor: R$";
            cin >> valor;
            cout << "CPF: ";
            cin >> CPF;

            if (opcao == 1)
                this->depositar(valor, CPF);
            else if (opcao == 2)
                this->sacar(valor, CPF);   
        }
        else if (opcao == 3)
        {
            cout << "Saindo...";
            break;
        }
        else
        {
            cout << "Opção Inválida..." << endl;
        }
    }
}

void cConta::depositar(float valor, int CPF) {
    
    for (int i = 0; i < 3; i++)
    {
        if (CPF == this->DadosContas[i].CPF)
        {
            this->DadosContas[i].saldo += valor;
            cout << "Depósito Realizado." << endl;
            cout << "Nome do Titular: " << this->DadosContas[i].nome << endl;
            cout << "Saldo Final: R$" << this->DadosContas[i].saldo << endl;
            cout << endl;
        }
    }
}

void cConta::sacar(float valor, int CPF) {
    
    for (int i = 0; i < 3; i++)
    {
        if (CPF == this->DadosContas[i].CPF)
        {
            this->DadosContas[i].saldo -= valor;
            cout << "Saque Realizado." << endl;
            cout << "Nome do Titular: " << this->DadosContas[i].nome << endl;
            cout << "Saldo Final: R$" << this->DadosContas[i].saldo << endl;
            cout << endl;
        }
    }
}