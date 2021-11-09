#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {
    string linha;

    ifstream arq_leitura ("nomes.txt");//ifstream – abre o arquivo apenas para leitura
    
    if (arq_leitura.is_open()) {

        while (! arq_leitura.eof() ) {  //eof() - retorna true ao atingir o fim do arquivo
            getline (arq_leitura, linha);
            cout << linha << endl;
        }
        arq_leitura.close();
    } else {
        cout << "ERRO: arquivo não foi aberto ou não existe" << endl;
    }
    return 0;
}
