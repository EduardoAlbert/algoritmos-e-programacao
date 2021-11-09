#include <iostream>

using namespace std;

int main(void) 
{
    int equals = 0, biggest;
    
    for (int i = 0, num; i < 3; i++)
    {
        cout << "Digite o " << i+1 << "º número: "; 
        cin >> num;
        
        if ((i == 0) || (num > biggest))
            biggest = num;
        else if (num == biggest)
            equals++;
    }
    
    if (equals != 2)
        cout << "O maior número digitado foi " << biggest;
    else
        cout << "Números iguais.";
     
    return 0;
}
