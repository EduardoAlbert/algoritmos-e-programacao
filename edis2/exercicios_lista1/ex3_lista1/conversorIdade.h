#ifndef CONVERSORIDADE_H
#define CONVERSORIDADE_H

class conversorIdade {
public:
    conversorIdade();
    conversorIdade(const conversorIdade& orig);
    virtual ~conversorIdade();
    
    int anos, meses, dias;
    
    void lerDados();
    int converterParaDias();
    
private:

};

#endif /* CONVERSORIDADE_H */

