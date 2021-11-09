#ifndef VERIFICATRIANGULO_H
#define VERIFICATRIANGULO_H

class verificaTriangulo {
public:
    verificaTriangulo();
    verificaTriangulo(const verificaTriangulo& orig);
    virtual ~verificaTriangulo();
    
    void lerDados();
    void verificarTriangulo(float x, float y, float z);
    
private:

};

#endif /* VERIFICATRIANGULO_H */

