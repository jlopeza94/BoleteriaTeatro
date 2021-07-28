//
// Created by lopez on 27/7/2021.
//

#include "../nodo/Nodo.h"
#include "Pila.h"

Pila::Pila() {
    this->tamano = 0;
    this->tope = nullptr;
    this->limite = 0;
}

Pila::Pila(Nodo *tope, int tamano, int limite) : tope(tope), tamano(tamano), limite(limite) {}

Pila::~Pila() {

}

Nodo *Pila::getTope() const {
    return tope;
}

void Pila::setTope(Nodo *tope) {
    Pila::tope = tope;
}

int Pila::getTamano() const {
    return tamano;
}

void Pila::setTamano(int tamano) {
    Pila::tamano = tamano;
}

int Pila::getLimite() const {
    return limite;
}

void Pila::setLimite(int limite) {
    Pila::limite = limite;
}

bool Pila::push(Asiento asiento) {
    Nodo *aux = new Nodo();
    aux->setInformacion(asiento);
    if (tamano == 0 ) {
        setTope(aux);
        tope->setSiguiente(nullptr);
        tamano= tamano+1;
        return true;
    } else if (tamano >0 ){
        aux->setSiguiente(tope);
        setTope(aux);
        tamano= tamano+1;
        return true;
    }else{
        return false;
    }

}

bool Pila::pop() {
    if (tamano == 0 ) {
        return false;
    } else if (tamano >0 ){
        Nodo *sig = tope->getSiguiente();
        tope->setSiguiente(sig->getSiguiente());
        tope = sig;
        tamano= tamano-1;;
        return true;
    }else{
        return false;
    }
}