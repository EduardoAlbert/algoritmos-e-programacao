#include <iostream>
#include <cstring>
#define ESTOQUE 2
using namespace std;

int main(){
    
    struct EstruturaSmartphone {
        char marca[15];
        char modelo[15];
        char sistemaOperacional[15];
        char cor[15];
        int memoriaArmazenamento;
        int memoriaRAM;
        float tamanhoTela;
        float resolucaoCameraTraseira;
        float capacidadeBateria;
        bool dualChip;
    } strSmartphone[ESTOQUE];

    for (int i; i < ESTOQUE; i++)
    {
        cout << "Informe a Marca do Smartphone: ";
        cin.getline(strSmartphone[i].marca, 15);
        cout << "Informe o Modelo do Smartphone: ";
        cin.getline(strSmartphone[i].modelo, 15);
        cout << "Informe o Sistema Operacional do Smartphone: "; 
        cin.getline(strSmartphone[i].sistemaOperacional, 15);
        cout << "Informe a Cor do Smartphone: "; 
        cin.getline(strSmartphone[i].cor, 15);
        cout << "Informe a Quantidade de Memória de Armazenamento do Smartphone (GB): ";
        cin >> strSmartphone[i].memoriaArmazenamento;
        cout << "Informe a Quantidade de Memória RAM do Smartphone (GB): ";
        cin >> strSmartphone[i].memoriaRAM;
        cout << "Informe o Tamanho da Tela do Smartphone (Polegadas): ";
        cin >> strSmartphone[i].tamanhoTela;
        cout << "Informe a Resolução da Câmera Traseira do Smartphone (MP): ";
        cin >> strSmartphone[i].resolucaoCameraTraseira;
        cout << "Informe a Capacidade da Bateria do Smartphone (mAh): "; 
        cin >> strSmartphone[i].capacidadeBateria;
        cout << "Informe se o Smartphone é Dual Chip (Digite 1) ou Não (Digite 0): "; 
        cin >> strSmartphone[i].dualChip;
        cout << endl;
        getchar();
    }
    
    cout << "Smartphones Cadastrados!\n";
    for (int i = 0; i < ESTOQUE; i++)
    {
        cout << "+--------------------------+\n";
        cout << strSmartphone[i].marca << " " << strSmartphone[i].modelo << endl;
        cout << "Memória de Armazenamento: " << strSmartphone[i].memoriaArmazenamento << "GB" << endl;
        cout << "Memória RAM: " << strSmartphone[i].memoriaRAM << "GB" << endl;
        cout << "Tamanho da Tela: " << strSmartphone[i].tamanhoTela << " Polegadas" << endl;
        cout << "Resolução da Câmera Traseira: " << strSmartphone[i].resolucaoCameraTraseira << "MP" << endl;
        cout << "Capacidade da Bateria: " << strSmartphone[i].capacidadeBateria << "mAh" << endl;
        cout << "2 Chips: ";
        if (strSmartphone[i].dualChip)
            cout << "Sim" << endl;
        else
            cout << "Não" << endl;
        cout << "Sistema Operacional: " << strSmartphone[i].sistemaOperacional << endl;
        cout << "Cor: " << strSmartphone[i].cor << endl;
        cout << "+--------------------------+\n";
    }
    
    return 0;
}