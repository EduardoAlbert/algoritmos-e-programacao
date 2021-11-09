#ifndef CALCMEDIA_H
#define CALCMEDIA_H

class calcMedia {
public:
    calcMedia();
    calcMedia(const calcMedia& orig);
    virtual ~calcMedia();
    
    float nota1, nota2, nota3;
    
    void lerDados();
    float calcMediaPonderada();
    
private:

};

#endif /* CALCMEDIA_H */

