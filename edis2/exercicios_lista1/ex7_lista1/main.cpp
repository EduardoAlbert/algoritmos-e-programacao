#include <iostream>
#include "calcCusto.h"

using namespace std;

int main() {
    
    calcCusto obj;
    obj.lerDados();
    cout << "Custo ao consumidor: R$" << obj.calcCustoAoConsumidor();
    
    return 0;
}
