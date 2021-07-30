//
// Created by lopez on 27/7/2021.
//

#ifndef COLA_H
#define COLA_H

class Cola{
private:
    Nodo *frente;
    Nodo *final;
    int tamano;
    int limite;
public:
    Cola();

    Cola(Nodo *frente, Nodo *final, int size);

    virtual ~Cola();

    Nodo *getFrente() const;

    void setFrente(Nodo *frente);

    Nodo *getFinal() const;

    void setFinal(Nodo *final);

    int getTamano() const;

    void setTamano(int size);

    int getLimite() const;

    void setLimite(int limite);

    bool agregar(Asiento asiento);

    bool atender();

    string mostrarValores();

};

#endif //COLA_H
