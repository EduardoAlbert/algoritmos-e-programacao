#include <cstdlib>
#include <iostream>
#include "calcDistanciaEuclidiana.h"

using namespace std;


int main(int argc, char** argv) {
    
    calcDistanciaEuclidiana obj;
    obj.lerDados();
    cout << obj.calcularDE();
    
    return 0;
}

