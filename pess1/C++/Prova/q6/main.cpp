// Resposta Exercício 6 - Eduardo Albert da Costa
// PES - Turma A

#include <iostream>
#include <locale>

using namespace std;

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    int vetA[5], vetB[5], vetC[5];
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o valor da posição " << i+1 << " do vetor A: ";
        cin >> vetA[i];
        cout << "Digite o valor da posição " << i+1 << " do vetor B: ";
        cin >> vetB[i];
        
        vetC[i] = vetA[i] + vetB[i];
        
        cout << endl << endl;
    }
    
    cout << "A soma de cada posição do vetor pode ser visualizada abaixo:\n";
    
    for (int i = 0; i < 5; i++)
    {
        cout << vetC[i] << " ";
    }
    cout << endl;
    
    return 0;
}