#ifndef CCLIENTE_H
#define CCLIENTE_H

class cConta {
public:
    cConta();
    cConta(const cConta& orig);
    virtual ~cConta();
    
    struct Conta {
        float saldo;
        char nome[40];
        int CPF;
    };
    
    Conta DadosContas[3];
    
    void criarContas();
    void depositar(float valor, int CPF);
    void sacar(float valor, int CPF);
    
    
private:

};

#endif /* CCLIENTE_H */

