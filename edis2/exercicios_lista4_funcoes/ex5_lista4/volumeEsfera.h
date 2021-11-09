#ifndef VOLUMEESFERA_H
#define VOLUMEESFERA_H

class volumeEsfera {
public:
    volumeEsfera();
    volumeEsfera(const volumeEsfera& orig);
    virtual ~volumeEsfera();
    
    void lerDados();
    float calcularVolume(float raio);
    
private:

};

#endif /* VOLUMEESFERA_H */
