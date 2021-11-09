#ifndef EQUACAOSEGUNDOGRAU_H
#define EQUACAOSEGUNDOGRAU_H

class equacaoSegundoGrau {
public:
    equacaoSegundoGrau();
    equacaoSegundoGrau(const equacaoSegundoGrau& orig);
    virtual ~equacaoSegundoGrau();
    
    void lerCoeficientes();
    int calcDelta(int a, int b, int c);
    
private:

};

#endif /* EQUACAOSEGUNDOGRAU_H */

