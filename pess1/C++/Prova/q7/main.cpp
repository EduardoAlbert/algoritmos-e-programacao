// Resposta Exercício 7 - Eduardo Albert da Costa
// PES - Turma A

#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

float calcArea(float, float);

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    int quantComodos;
    float largura, comprimento, area, somaMedidas = 0.0;
    
    cout << "Quantos cômodos tem o imóvel? ";
    cin >> quantComodos;
    
    cout << endl;
    for (int i = 0; i < quantComodos; i++)
    {
        cout << "Digite a largura do cômodo " << i+1 << ": ";
        cin >> largura;
        cout << "Digite o comprimento do cômodo " << i+1 << ": ";
        cin >> comprimento;
        
        area = truncf(calcArea(largura, comprimento));
        cout << "\nO cômodo " << i+1 << " possui " << area << " metros de construção.";
        
        somaMedidas += area;
        
        cout << endl << endl << endl;
    }
    
    cout << "O imóvel possui ao menos: " << somaMedidas << endl << endl;
    
    return 0;
}

float calcArea(float larg, float comp)
{
    return larg * comp;
}