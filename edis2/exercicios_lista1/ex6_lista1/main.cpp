#include <iostream>

#include "conversorTempo.h"

using namespace std;

int main() {
    
    conversorTempo obj;
    obj.lerDados();
    obj.converterParaHorasMinutosSegundos();
    
    return 0;
}
