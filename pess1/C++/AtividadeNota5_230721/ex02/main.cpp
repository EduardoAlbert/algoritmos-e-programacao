/*
 * Uma Função Recursiva é aquela que faz referência a si própria, ou seja, chama a si mesma dentro de seu escopo.
 * Toda Função Recursiva tem pelo menos um Caso Base cujo resultado é conhecido e um Caso Recursivo.
 * O Caso Base tem o papel de fazer a função parar com as chamadas no momento adequado, evitando um loop infinito.
 * O Caso Recursivo é o que busca resolver um sub-problema do problema inicial utilizando a recursividade em si.
 */

#include <iostream>

using namespace std;

int fatorial(int);

int main() {
    
    int num;
    
    cout << "Calcular fatorial de qual número? ";
    cin >> num;
    
    cout << "O fatorial de " << num << " é " << fatorial(num);
    
}

int fatorial(int n)
{
    if (n > 1)
        return n * fatorial(n - 1);
    else
        return 1;
}
