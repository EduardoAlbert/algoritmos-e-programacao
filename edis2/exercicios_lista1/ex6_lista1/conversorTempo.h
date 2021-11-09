#ifndef CONVERSORTEMPO_H
#define CONVERSORTEMPO_H

class conversorTempo {
public:
    conversorTempo();
    conversorTempo(const conversorTempo& orig);
    virtual ~conversorTempo();
    
    int segundos;
    
    void lerDados();
    void converterParaHorasMinutosSegundos();
    
private:

};

#endif /* CONVERSORTEMPO_H */

