//
// Created by lopez on 29/7/2021.
//

#ifndef PROYECTOINDIVIDUAL_DAO_H
#define PROYECTOINDIVIDUAL_DAO_H
#include "../bl/entities/listaSimple/Lista.h"
#include "../bl/entities/pila/Pila.h"
#include "../bl/entities/cola/Cola.h"

class Dao {
private:
    Lista *preferencialVIP;
    Pila *preferencialH1;
    Pila *preferencialH2;
    Pila *preferencialH3;
    Pila *preferencialH4;
    Lista *general;
    Cola *listaEspera;
public:
    Dao();

    virtual ~Dao();

    Lista *getPreferencialVip() const;

    void setPreferencialVip(Lista *preferencialVip);

    Pila *getPreferencialH1() const;

    void setPreferencialH1(Pila *preferencialH1);

    Pila *getPreferencialH2() const;

    void setPreferencialH2(Pila *preferencialH2);

    Pila *getPreferencialH3() const;

    void setPreferencialH3(Pila *preferencialH3);

    Pila *getPreferencialH4() const;

    void setPreferencialH4(Pila *preferencialH4);

    Lista *getGeneral() const;

    void setGeneral(Lista *general);

    Cola *getListaEspera() const;

    void setListaEspera(Cola *listaEspera);
};


#endif //PROYECTOINDIVIDUAL_DAO_H
