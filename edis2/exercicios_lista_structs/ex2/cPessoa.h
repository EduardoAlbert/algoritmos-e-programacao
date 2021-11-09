#ifndef CPESSOA_H
#define CPESSOA_H

class cPessoa {
public:
    cPessoa();
    cPessoa(const cPessoa& orig);
    virtual ~cPessoa();
    
    struct Pessoa {
        char nome[40], sexo;
        float altura, peso;
        int cpf;
    };
    
    Pessoa DadosPessoas[5];
    
    void lerDados();
    void imprimirIMC();
    
private:

};

#endif /* CPESSOA_H */
