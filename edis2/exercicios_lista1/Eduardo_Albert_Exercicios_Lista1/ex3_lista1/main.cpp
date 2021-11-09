#include <cstdlib>
#include "conversorIdade.h"
#include <iostream>

using namespace std;


int main(int argc, char** argv) {

    conversorIdade obj;
    obj.lerDados();
    cout << obj.converterParaDias();
    
    return 0;
}
