//
// Created by lopez on 29/7/2021.
//

#include "Dao.h"

Dao::Dao() {
    this->preferencialH1 = new Pila();
    this->preferencialH2 = new Pila();
    this->preferencialH3 = new Pila();
    this->preferencialH4 = new Pila();
    this->preferencialVIP = new Lista(10);
    this->general = new Lista(20);
    this->listaEspera = new Cola();
}

Dao::~Dao() {

}

Lista *Dao::getPreferencialVip() const {
    return preferencialVIP;
}

void Dao::setPreferencialVip(Lista *preferencialVip) {
    preferencialVIP = preferencialVip;
}

Lista *Dao::getGeneral() const {
    return general;
}

void Dao::setGeneral(Lista *general) {
    Dao::general = general;
}

Cola *Dao::getListaEspera() const {
    return listaEspera;
}

void Dao::setListaEspera(Cola *listaEspera) {
    Dao::listaEspera = listaEspera;
}

Pila *Dao::getPreferencialH1() const {
    return preferencialH1;
}

void Dao::setPreferencialH1(Pila *preferencialH1) {
    Dao::preferencialH1 = preferencialH1;
}

Pila *Dao::getPreferencialH2() const {
    return preferencialH2;
}

void Dao::setPreferencialH2(Pila *preferencialH2) {
    Dao::preferencialH2 = preferencialH2;
}

Pila *Dao::getPreferencialH3() const {
    return preferencialH3;
}

void Dao::setPreferencialH3(Pila *preferencialH3) {
    Dao::preferencialH3 = preferencialH3;
}

Pila *Dao::getPreferencialH4() const {
    return preferencialH4;
}

void Dao::setPreferencialH4(Pila *preferencialH4) {
    Dao::preferencialH4 = preferencialH4;
}

