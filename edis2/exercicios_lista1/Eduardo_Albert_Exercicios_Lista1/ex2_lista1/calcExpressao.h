#ifndef CALCEXPRESSAO_H
#define CALCEXPRESSAO_H

class calcExpressao {
public:
    calcExpressao();
    calcExpressao(const calcExpressao& orig);
    virtual ~calcExpressao();
    
    int A, B, C;
    
    void lerDados();
    float calcExp();
    
private:

};

#endif /* CALCEXPRESSAO_H */

