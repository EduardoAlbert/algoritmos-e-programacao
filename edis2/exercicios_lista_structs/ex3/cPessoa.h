#ifndef CPESSOA_H
#define CPESSOA_H

class cPessoa {
public:
    cPessoa();
    cPessoa(const cPessoa& orig);
    virtual ~cPessoa();
    
    struct Pessoa {
        char nome[40];
        int CPF;
    };
    
    Pessoa DadosPessoas[9];
    
    void lerDados();
    void pesquisaSequencial(int CPF);
    void bublesort(int n);
    void pesquisaBinaria(int CPF, int n);
    
private:

};

#endif /* CPESSOA_H */

