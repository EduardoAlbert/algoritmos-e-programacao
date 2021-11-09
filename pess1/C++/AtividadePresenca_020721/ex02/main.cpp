#include <iostream>

using namespace std;

int main() 
{
    int n = 3;
    int matriz[n][n];
    
    for (int lin = 0; lin < n; lin++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << "Digite um valor para a posição [" << lin << "][" << col << "]: ";
            cin >> matriz[lin][col];
        }
    }
    
    for (int lin = 0; lin < n; lin++)
    {
        for (int col = 0; col < n; col++)
        {
            if (lin == col)
            {
                cout << matriz[lin][col] << " ";
            } 
        }
        cout << endl;
    }

    return 0;
}