#include <iostream>

using namespace std;

int main() 
{
    char name[30];
    float sal, irpf;
    
    cout << "Nome: ";
    cin >> name;
    cout << "Salário: ";
    cin >> sal;
    
    if (sal < 2000) {
        cout << name << ", você tem isenção de pagamento do IRPF.";
        return 0;
    }
    else if (sal < 3000)
        irpf = sal * 0.15;
    else if (sal < 5000)
        irpf = sal * 0.20;
    else if (sal < 10000)
        irpf = sal * 0.23;
    else
        irpf = sal * 0.27;
    
    cout << name << ", você deverá pagar R$" << irpf << " de IRPF.";
   
    return 0;
}
