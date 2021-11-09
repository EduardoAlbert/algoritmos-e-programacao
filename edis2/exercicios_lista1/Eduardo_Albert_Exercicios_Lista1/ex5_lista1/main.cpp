#include <iostream>
#include "calcMedia.h"

using namespace std;

int main() {
    
    calcMedia obj;
    obj.lerDados();
    cout << obj.calcMediaPonderada();
    
    return 0;
}
