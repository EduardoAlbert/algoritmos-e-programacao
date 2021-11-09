#include <iostream>

using namespace std;

int main() 
{   
    int m = 2;
    int n = 3;
    
    int matrizA[m][n];
    int matrizB[m][n];
    int matrizS[m][n];
    
    for (int lin = 0; lin < m; lin++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << "Digite um valor para a posição [" << lin << "][" << col << "] da Matriz A: ";
            cin >> matrizA[lin][col];
            cout << "Digite um valor para a posição [" << lin << "][" << col << "] da Matriz B: ";
            cin >> matrizB[lin][col];
            matrizS[lin][col] = matrizA[lin][col] + matrizB[lin][col];
        }
    }
    
    for (int lin = 0; lin < m; lin++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << matrizS[lin][col] << " ";
        }
        cout << endl;
    }
    
    return 0;
}