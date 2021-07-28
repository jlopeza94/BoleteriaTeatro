//
// Created by lopez on 27/7/2021.
//

#ifndef ASIENTO_H
#define ASIENTO_H
#include "iostream"
using namespace std;
#include <string>

class Asiento {
private:
    string tipo;
    bool estado;
    int precio;
    int id;
public:
    Asiento();

    Asiento(const string &tipo, bool estado, int precio, int id);

    virtual ~Asiento();

    const string &getTipo() const;

    void setTipo(const string &tipo);

    bool isEstado() const;

    void setEstado(bool estado);

    int getPrecio() const;

    void setPrecio(int precio);

    int getId() const;

    void setId(int id);

    string mostrarValores();
};

#endif //ASIENTO_H
