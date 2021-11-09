#include <iostream>

using namespace std;

int main() 
{
    int sum = 0;
    
    for (int i = 100; i <= 200; i += 2)
    {
        sum += i;
    }
    cout << sum;
    
    return 0;
}

