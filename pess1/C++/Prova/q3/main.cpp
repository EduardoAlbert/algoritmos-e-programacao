// Resposta Exercício 3 - Eduardo Albert da Costa
// PES - Turma A

#include <iostream>
#include <locale>

using namespace std;

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    int opt;
    float num1, num2;
    
    cout << "Escolha uma das Opções:\n";
    cout << "1 - para SUBTRAIR\n";
    cout << "2 - para SOMAR\n";
    cout << "3 - para DIVIDIR\n";
    cout << "4 - para MULTIPLICAR\n";
    cout << "5 - para SAIR\n\n";
    cout << "Informe a Opção Desejada: ";
    cin >> opt;
    
    if (opt >= 1 && opt <= 4)
    {
        cout << "\n\nDigite o primeiro número: ";
        cin >> num1;
        cout << "\nDigite o segundo número: ";
        cin >> num2;
    }
    
    cout << endl;
    switch (opt)
    {
        case 1:
            cout << "A subtração é: " << num1 - num2;
            break;
        case 2:
            cout << "A soma é: " << num1 + num2;
            break;
        case 3:
            cout << "A divisão é: " << num1 / num2;
            break;
        case 4:
            cout << "A multiplicação é: " << num1 * num2;
            break;
        case 5:
            cout << "Saindo...";
            break;
        default:
            cout << "Opção inválida.";
    }
    cout << "\n\n";
    
    return 0;
}