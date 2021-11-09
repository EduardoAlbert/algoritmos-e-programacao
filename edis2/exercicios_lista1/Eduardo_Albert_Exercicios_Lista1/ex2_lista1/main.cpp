#include <cstdlib>
#include <iostream>
#include "calcExpressao.h"

using namespace std;

int main(int argc, char** argv) {

    calcExpressao obj;
    obj.lerDados();
    cout << obj.calcExp();
    
    return 0;
}