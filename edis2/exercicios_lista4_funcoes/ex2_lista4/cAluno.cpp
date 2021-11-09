#include "cAluno.h"
#include <cstdlib>
#include <iostream>

using namespace std;

cAluno::cAluno() {
}

cAluno::cAluno(const cAluno& orig) {
}

cAluno::~cAluno() {
}

void cAluno::lerDados() {
    
    float n1, n2, n3;
    char tipoDeMedia;
    
    cout << "Nota 1: ";
    cin >> n1;
    cout << "Nota 2: ";
    cin >> n2;
    cout << "Nota 3: ";
    cin >> n3;
    cout << "Tipo de Média (Aritmética[A] ou Ponderada[P]:";
    cin >> tipoDeMedia;
    
    cout << this->media(n1, n2, n3, tipoDeMedia);
    
}

float cAluno::media(float n1, float n2, float n3, char tipoDeMedia) {
    
    float media;
    
    if (tipoDeMedia == 'A') 
    {
        media = (n1 + n2 + n3) / 3;
    } 
    else 
    {
        media = (n1*5 + n2*3 + n3*2) / 10;
    }
    
    return media;
}