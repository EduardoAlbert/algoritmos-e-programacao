#ifndef CALCCUSTO_H
#define CALCCUSTO_H

class calcCusto {
public:
    calcCusto();
    calcCusto(const calcCusto& orig);
    virtual ~calcCusto();
    
    float custoDeFabrica;
    
    void lerDados();
    float calcCustoAoConsumidor();
    
private:

};

#endif /* CALCCUSTO_H */

