#include <cstdlib>
#include "conversorIdade.h"

using namespace std;
    
int main(int argc, char** argv) {

    conversorIdade obj;
    obj.lerDados();
    obj.converterParaAnosMesesDias();
    
    return 0;
}
