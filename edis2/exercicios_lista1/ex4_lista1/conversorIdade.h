#ifndef CONVERSORIDADE_H
#define CONVERSORIDADE_H

class conversorIdade {
public:
    conversorIdade();
    conversorIdade(const conversorIdade& orig);
    virtual ~conversorIdade();
    
    int dias;
    
    void lerDados();
    void converterParaAnosMesesDias();
    
private:

};

#endif /* CONVERSORIDADE_H */

