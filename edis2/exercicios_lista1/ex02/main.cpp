#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    int A, B, C;
    float D, R, S;
    
    cout << "A: ";
    cin >> A;
    cout << "B: ";
    cin >> B;
    cout << "C: ";
    cin >> C;
    
    R = pow(A + B, 2);
    S = pow(B + C, 2);
    
    D = (R + S) / 2;
    
    cout << D;
    
    return 0;
}
