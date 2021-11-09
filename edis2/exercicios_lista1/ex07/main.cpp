#include <iostream>

using namespace std;

int main() {
    
    float custoFabrica, valDistribuidor, valImpostos, custoConsumidor;
    
    cout << "Custo de fábrica: ";
    cin >> custoFabrica;
    
    valDistribuidor = custoFabrica + (custoFabrica * 28 / 100);
    valImpostos = custoFabrica + (custoFabrica * 45 / 100);
    
    custoConsumidor = custoFabrica + valDistribuidor + valImpostos;
    
    cout << "Custo ao consumidor: R$" << custoConsumidor;
    
    return 0;
}
