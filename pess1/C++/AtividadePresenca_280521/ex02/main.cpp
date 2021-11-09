#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    char name[30];
    float sum = 0, grade, average;
    
    cout << "Nome: ";
    cin.getline(name, sizeof(name));
    
    for (int i = 0; i < 3; i++)
    {
        cout << "Nota " << i+1 << ": ";
        cin >> grade;
        sum += grade;
    }
    
    average = sum / 3;
    
    cout << name << " possui média ";
    cout << fixed << setprecision(1) << average;
    
    return 0;
}
