#include "verificaTriangulo.h"
#include <iostream>

using namespace std;

verificaTriangulo::verificaTriangulo() {
}

verificaTriangulo::verificaTriangulo(const verificaTriangulo& orig) {
}

verificaTriangulo::~verificaTriangulo() {
}

void verificaTriangulo::lerDados() {
    
    float x, y, z;
    
    cout << "Valor de x: ";
    cin >> x;
    cout << "Valor de y: ";
    cin >> y;
    cout << "Valor de z: ";
    cin >> z;
    
    this->verificarTriangulo(x, y, z);
    
}

void verificaTriangulo::verificarTriangulo(float x, float y, float z) {
    
    if ((x < y+z) && (y < x+z) && (z < x+y))
    {
        if ((x == y) && (y == z))
            cout << "Triângulo Equilátero.";
        else if ((x == y) || (x == z) || (y == z))
            cout << "Triângulo Isósceles.";
        else
            cout << "Triângulo Escaleno.";
    }
    else
    {
        cout << "Não forma triângulo.";
    }
    
}