//
// Created by lopez on 27/7/2021.
//

#include "dl.h"
#include "../COI/bl/entities/listaSimple/Lista.h"
#include "../COI/bl/entities/pila/Pila.h"
#include "../COI/bl/entities/cola/Cola.h"

dl::dl() {
    this->preferencial = new Lista();
    this->preferencialVIP = new Lista();
    this->general = new Pila();
    this->listaEspera = new Cola();
}

