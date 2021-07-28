//
// Created by lopez on 27/7/2021.
//

#include "../nodo/Nodo.h"
#include "Cola.h"

Cola::Cola() {
    this->tamano = 0;
    this->final= nullptr;
    this->frente = nullptr;
    this->limite = 0;
}

Cola::Cola(Nodo *frente, Nodo *final, int size) : frente(frente), final(final), tamano(size) {}

Cola::~Cola() {

}

Nodo *Cola::getFrente() const {
    return frente;
}

void Cola::setFrente(Nodo *frente) {
    Cola::frente = frente;
}

Nodo *Cola::getFinal() const {
    return final;
}

void Cola::setFinal(Nodo *final) {
    Cola::final = final;
}

int Cola::getTamano() const {
    return tamano;
}

void Cola::setTamano(int size) {
    Cola::tamano = size;
}
int Cola::getLimite() const {
    return limite;
}

void Cola::setLimite(int limite) {
    Cola::limite = limite;
}

bool Cola::agregar(Asiento asiento) {
    Nodo *aux = new Nodo();
    aux->setInformacion(asiento);
    if (frente == nullptr && final == nullptr){
        setFrente(aux);
        setFinal(aux);
        tamano= tamano + 1;;
        ;
        return true;
    } else if(frente != nullptr && final != nullptr){
        aux->setSiguiente(final);
        setFinal(aux);
        tamano= tamano + 1;
    } else{
        return false;
    }
}

bool Cola::atender() {
    Nodo *aux;
    aux = final;
    if (frente == nullptr && final == nullptr){
        return false;
    }else {
        for (int i = 0; i < tamano; ++i) {
            if (i = (tamano - 2)) {
                frente = aux;
                tamano= tamano - 1;
                i = tamano;
                return true;
            } else {
                aux = aux->getSiguiente();
            }
        }
    }
}
