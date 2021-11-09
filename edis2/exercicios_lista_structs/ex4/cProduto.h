#ifndef CPRODUTO_H
#define CPRODUTO_H

class cProduto {
public:
    cProduto();
    cProduto(const cProduto& orig);
    virtual ~cProduto();
    
    struct Produto {
        int codigo;
        char nome[40];
        float preco;
    };
    
    Produto DadosProdutos[5];
    
    void cadastrarProdutos();
    void imprimirProdutos(int n);
    void consultarPrecoPorCodigo();
    
private:

};

#endif /* CPRODUTO_H */

