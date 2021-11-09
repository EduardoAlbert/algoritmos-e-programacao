#ifndef NUMERO_H
#define NUMERO_H

class numero {
public:
    numero();
    numero(const numero& orig);
    virtual ~numero();
    
    void lerDados();
    int retornarMenor(int n1, int n2);
    
private:

};

#endif /* NUMERO_H */