#include <iostream>

using namespace std;

int main() 
{
    char name[10];
    int age, sum_age;
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Primeiro Nome: ";
        cin >> name;
        cout << "Idade: ";
        cin >> age;
        
        sum_age += age;
    }
    
    cout << "Soma das Idades: " << sum_age;

    return 0;
}
