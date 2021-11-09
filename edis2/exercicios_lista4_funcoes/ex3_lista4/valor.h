#ifndef VALOR_H
#define VALOR_H

class valor {
public:
    valor();
    valor(const valor& orig);
    virtual ~valor();
    
    void lerDados();
    int verificaValor(int valor);
    
private:

};

#endif /* VALOR_H */

