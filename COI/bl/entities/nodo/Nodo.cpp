//
// Created by lopez on 27/7/2021.
//

#include "../asiento/Asiento.h"
#include "Nodo.h"

Nodo::Nodo() {}

Nodo::Nodo(const Asiento &informacion, Nodo *siguiente) : informacion(informacion), siguiente(siguiente) {}

Nodo::~Nodo() {

}

Asiento Nodo::getInformacion() const {
    return informacion;
}

void Nodo::setInformacion(const Asiento &informacion) {
    Nodo::informacion = informacion;
}

Nodo *Nodo::getSiguiente() const {
    return siguiente;
}

void Nodo::setSiguiente(Nodo *siguiente) {
    Nodo::siguiente = siguiente;
}
