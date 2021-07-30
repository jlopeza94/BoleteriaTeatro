//
// Created by lopez on 27/7/2021.
//

#include "../nodo/Nodo.h"
#include "Lista.h"

Lista::Lista(int limite) {
    this->tamano = 0;
    this->cabeza = nullptr;
    this->limite = limite;
}

Lista::Lista(Nodo *cabeza, int tamano) : cabeza(cabeza), tamano(tamano) {}

Lista::~Lista() {

}

Nodo *Lista::getCabeza() const {
    return cabeza;
}

void Lista::setCabeza(Nodo *cabeza) {
    Lista::cabeza = cabeza;
}

int Lista::getTamano() const {
    return tamano;
}

void Lista::setTamano(int tamano) {
    Lista::tamano = tamano;
}

string Lista::mostrarValores() {
    Nodo* aux = cabeza;
    string datos = "";
    while (aux != nullptr){
        datos += aux->getInformacion().mostrarValores()+"\n";
        aux = aux->getSiguiente();
    }
    return datos;
}

bool Lista::agregarFinal(Asiento asiento) {
    Nodo *aux, *nuevo = new Nodo();
    aux = cabeza;
    nuevo->setInformacion(asiento);
    if (tamano == 0){
        cabeza= nuevo;
        tamano+=1;
        return true;
    } else {
        while (aux!= nullptr){
            if (aux->getSiguiente()== nullptr){
                aux->setSiguiente(nuevo);
                tamano += 1;
                return true;
            }else{
                aux= aux->getSiguiente();
            }
        }
    }
    return false;
}

bool Lista::agrgarPosicion(Asiento asiento) {
    Nodo *aux, *nuevo = new Nodo();
    aux = cabeza;
    nuevo->setInformacion(asiento);
    if (tamano == 0) {
        cabeza = nuevo;
        tamano += 1;
        return true;
    } else {
        while (aux != nullptr) {
            if (asiento.getId() > cabeza->getInformacion().getId()) {
                nuevo->setSiguiente(cabeza);
                cabeza = nuevo;
                tamano += 1;
                return true;
            } else if (aux->getSiguiente() == nullptr) {
                aux->setSiguiente(nuevo);
                tamano += 1;
                return true;
            } else if (asiento.getId() > aux->getInformacion().getId() &&
                       asiento.getId() < aux->getSiguiente()->getInformacion().getId()) {
                nuevo->setSiguiente(aux->getSiguiente());
                aux->setSiguiente(nuevo);
                tamano += 1;
                return true;
            } else {
                aux = aux->getSiguiente();
            }
        }
    }
    return false;
}

int Lista::getLimite() const {
    return limite;
}

void Lista::setLimite(int limite) {
    Lista::limite = limite;
}
