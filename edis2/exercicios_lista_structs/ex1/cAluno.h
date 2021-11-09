#ifndef CALUNO_H
#define CALUNO_H

class cAluno {
public:
    cAluno();
    cAluno(const cAluno& orig);
    virtual ~cAluno();
    
    struct Aluno {
        char nome[40];
        long int matricula;
        float nota1, nota2;
    };
    
    Aluno DadosAlunos[5];
    
    void lerDados();
    void imprimirDados(int n);
    
private:

};

#endif /* CALUNO_H */

