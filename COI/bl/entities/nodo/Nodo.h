//
// Created by lopez on 27/7/2021.
//

#ifndef NODO_H
#define NODO_H

#include "../asiento/Asiento.h"

class Nodo{
private:
    Asiento informacion;
    Nodo *siguiente;

public:
    Nodo();

    Nodo(const Asiento &informacion, Nodo *siguiente);

    virtual ~Nodo();

    Asiento getInformacion() const;

    void setInformacion(const Asiento &informacion);

    Nodo *getSiguiente() const;

    void setSiguiente(Nodo *siguiente);
};
#endif //NODO_H
