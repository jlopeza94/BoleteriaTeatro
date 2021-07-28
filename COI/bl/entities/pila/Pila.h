//
// Created by lopez on 27/7/2021.
//

#ifndef PILA_H
#define PILA_H

class Pila{
private:
    Nodo *tope;
    int tamano;
    int limite;
public:
    Pila();

    Pila(Nodo *tope, int tamano, int limite);

    virtual ~Pila();

    Nodo *getTope() const;

    void setTope(Nodo *tope);

    int getTamano() const;

    void setTamano(int tamano);

    int getLimite() const;

    void setLimite(int limite);

    bool push(Asiento asiento);

    bool pop();
};


#endif //PILA_H
