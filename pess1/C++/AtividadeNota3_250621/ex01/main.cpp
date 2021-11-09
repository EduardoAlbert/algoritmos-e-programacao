#include <iostream>

using namespace std;

int main() {
    
    int n = 15;
    int vetor[n];
    
    for (int i = 0; i < n; i++)
    {
        cout << "Valor da Posição [" << i << "]: ";
        cin >> vetor[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            cout << vetor[i] << " é par.\n";
        } else {
            cout << vetor[i] << " é ímpar.\n";
        }
    }
    
    return 0;
}
