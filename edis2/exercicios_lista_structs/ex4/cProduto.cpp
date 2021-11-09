#include "cProduto.h"
#include <iostream>

using namespace std;

cProduto::cProduto() {
}

cProduto::cProduto(const cProduto& orig) {
}

cProduto::~cProduto() {
}

void cProduto::cadastrarProdutos() {
    
    char opcao;
    int i = 0;
    do {
        
        cout << "Código: ";
        cin >> this->DadosProdutos[i].codigo;
        
        cout << "Nome: ";
        cin >> this->DadosProdutos[i].nome;
        
        cout << "Preço: R$";
        cin >> this->DadosProdutos[i].preco;
        
        cout << endl;
        
        i++;
        
        cout << "Continuar? 's' ou 'n': ";
        cin >> opcao;
        
    } while (opcao == 's' && i < 5);
    
    this->imprimirProdutos(i);
    
}

void cProduto::imprimirProdutos(int n) {
    
    for (int i = 0; i < n; i++)
    {
        cout << "Código: " << this->DadosProdutos[i].codigo << " - Nome: " << this->DadosProdutos[i].nome << endl;
    }
    
}

void cProduto::consultarPrecoPorCodigo() {
    
    int codigo;
    cout << "Digite o código do produto que deseja consultar o preço: ";
    cin >> codigo;
    
    for (int i = 0; i < 5; i++)
    {
        if (codigo == this->DadosProdutos[i].codigo)
        {
            cout << "Preço: R$" << this->DadosProdutos[i].preco;
            break;
        }
            
    }
    
}