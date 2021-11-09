#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    // Mostra a tabuada dos números entre 2 e 9, inclusive.
    for (int k = 0; k <= 1; k++) // 2 iterações
    {
        // Mostra o título das tabuadas
        for (int i = 1; i <= 4; i++) // 4 iterações x2
            cout << "Tabuada do" << setw(3) << (i + 4 * k + 1) << "       ";
            // Na primeira das 2 iterações principais, o resultado de (i + 4 * k + 1) vai de 2 até 5,
            // pois (1 + 4 * 0 + 1) = 2 e (4 + 4 * 0 + 1) = 5, respeitando a ordem de precedência.
            // Na segunda das 2 iterações principais, o resultado de (i + 4 * k + 1) vai de 6 até 9,
            // pois (1 + 4 * 1 + 1) = 6 e (4 + 4 * 1 + 1) = 9, respeitando a ordem de precedência.
            
        cout << endl;
        
        // Mostra as multiplicações
        for (int i = 1; i <= 9; i++) // 9 iterações x2
        {
            for (int j = 2 + 4 * k; j <= 5 + 4 * k; j++) // 4 iterações x9 x2
                // Na primeira das 2 iterações principais, a variável j receberá o valor 2, pois (2 + 4 * 0) = 2
                // e a condição a ser respeitada será j <= 5, pois (5 + 4 * 0) = 5.
                // Na segunda das 2 iterações principais, a variável j receberá o valor 6, pois (2 + 4 * 1) = 6
                // e a condição a ser respeitada será j <= 9, pois (5 + 4 * 1) = 9.
                
                cout << setw(3) << j << " X" << setw(3) << i << " = " << setw(3) << j * i << "      ";
                // Na primeira das 2 iterações principais, para cada 1 das 9 iterações, exibe 4 multiplicações "j X i", 
                // em que j assume valores de 2 até 5 e i de 1 até 9.
                // Na segunda das 2 iterações principais, para cada 1 das 9 iterações, exibe 4 multiplicações "j X i",
                // em que j assume valores de 6 até 9 e i de 1 até 9.
                
            cout << endl;
        }
    }
    
    return 0;
}