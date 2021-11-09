// Resposta Exercício 5 - Eduardo Albert da Costa
// PES - Turma A

#include <iostream>
#include <locale>

using namespace std;

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    int quantNotas;
    float somaNotas = 0, nota;
    
    cout << "Quantas notas você vai digitar? ";
    cin >> quantNotas;
    
    for (int i = 0; i < quantNotas; i++)
    {
        cout << "\nDigite a nota " << i+1 << ": ";
        cin >> nota;
        somaNotas += nota;
    }
    
    cout << "\n\nA Média foi: " << somaNotas / quantNotas << "\n\n\n";
    
    return 0;
}