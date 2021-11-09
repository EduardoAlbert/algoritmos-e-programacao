#include <iostream>
#include <fstream>

using namespace std;

int main () {
    
    ofstream arq1; // ofstream - Arquivo apenas para saída de dados.
    
    arq1.open("nomes.txt"); // Abre o arquivo. Cria o arquivo caso ele não exista.
    arq1 << "Clara" << endl; // Insere nomes no arquivo (operador "<<").
    arq1 << "Arthur" << endl;
    arq1.close(); // Fecha o arquivo.
    
    return 0;
}
