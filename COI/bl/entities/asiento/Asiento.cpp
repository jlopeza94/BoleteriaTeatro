//
// Created by lopez on 27/7/2021.
//

#include "Asiento.h"


Asiento::~Asiento() {
    this->precio = 0;
    this->tipo = "";
    this->estado = false;
    this->id = 0;
}

const string &Asiento::getTipo() const {
    return tipo;
}

void Asiento::setTipo(const string &tipo) {
    Asiento::tipo = tipo;
}

bool Asiento::isEstado() const {
    return estado;
}

void Asiento::setEstado(bool estado) {
    Asiento::estado = estado;
}

int Asiento::getPrecio() const {
    return precio;
}

void Asiento::setPrecio(int precio) {
    Asiento::precio = precio;
}

string Asiento::mostrarValores() {
    string datos;
    datos = "Tipo de asiento: "+tipo+"\nEstado: "+ to_string(estado)+"\nPrecio: "+ to_string(precio)+"\nNumero de asiento: "+
                                                                                                     to_string(id)+"\n";
    return datos;
}

Asiento::Asiento() {
    this->estado= false;
    this->tipo = "";
    this->precio = 0;
}

Asiento::Asiento(const string &tipo, bool estado, int precio, int id) : tipo(tipo), estado(estado), precio(precio),
                                                                        id(id) {}

int Asiento::getId() const {
    return id;
}

void Asiento::setId(int id) {
    Asiento::id = id;
}
