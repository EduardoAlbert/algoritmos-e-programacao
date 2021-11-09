#include <iostream>

using namespace std;

int main()
{
    int age;
    
    cout << "Qual é a idade do nadador? ";
    cin >> age;
    
    cout << "Categoria: ";
    
    if ((age >= 5) && (age <= 7))
        cout << "Infantil A";
    else if ((age >= 8) && (age <= 10))
        cout << "Infantil B";
    else if ((age >= 11) && (age <= 13))
        cout << "Juvenil A";
    else if ((age >= 14) && (age <= 17))
        cout << "Juvenil B";
    else if (age >= 18)
        cout << "Adulto";
    else
        cout << "Não especificada...";

    return 0;
}
