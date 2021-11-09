#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    int num, biggest;
    
    for (int i = 0; i < 3; i++)
    {
        cout << "Digite o " << i+1 << "º número: "; 
        cin >> num;
        
        if (i == 0 || num > biggest)
            biggest = num;
    }
    
    cout << "O maior número digitado foi " << biggest;
    
    return 0;
}
