//
// Created by lopez on 27/7/2021.
//

#ifndef LISTA_H
#define LISTA_H

#include "../nodo/Nodo.h"

class Lista{

private:
    Nodo *cabeza;
    int tamano;
    int limite;

public:
    Lista();

    Lista(Nodo *cabeza, int tamano);

    virtual ~Lista();

    Nodo *getCabeza() const;

    void setCabeza(Nodo *cabeza);

    int getTamano() const;

    void setTamano(int tamano);

    int getLimite() const;

    void setLimite(int limite);

    string mostrarValores();
    bool agregarFinal(Asiento asiento);
    bool agrgarPosicion(Asiento);

};

#endif //LISTA_H
