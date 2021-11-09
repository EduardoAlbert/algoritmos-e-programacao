// Resposta Exercício 4 - Eduardo Albert da Costa
// PES - Turma A

#include <iostream>
#include <locale>

using namespace std;

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    int idade;
    
    cout << "Digite a sua idade:\n";
    cin >> idade;
    
    if (idade >= 65)
    {
        cout << "Você pode ser atendido em fila preferencial.\n\n\n";
        cout << "Dirija-se ao caixa 1.\n\n";
    }
    else
    {
        cout << "Você será atendido nos caixas convencionais.\n";
        cout << "Dirija-se a um dos caixas:\n";
        cout << "Caixa 2;\n";
        cout << "Caixa 3;\n";
        cout << "Caixa 4;\n\n";
    }
    
    return 0;
}