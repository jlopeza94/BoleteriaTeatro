//
// Created by lopez on 27/7/2021.
//

#ifndef GESTOR_H
#define GESTOR_H
#include "../../dao/Dao.h"

class Gestor{
private:
 Dao *datos;

public:
    Gestor();
    string agregarListaEspera(string tipo);
    string atenderListaEspera();
    string mostrarValoresListaEspera();
    string agregarListaGeneral();
    string agregarListaVIP(string tipo, bool estado, int precio, int posicion);
    string mostrarValoresListaGeneral();
    string mostrarValoresListaVIP();
    string pushPreferencial(string tipo, bool estado, int precio, int id);
    string popPreferencialH1();
    string popPreferencialH2();
    string popPreferencialH3();
    string popPreferencialH4();
    string mostrarValoresPreferencialH1();
    string mostrarValoresPreferencialH2();
    string mostrarValoresPreferencialH3();
    string mostrarValoresPreferencialH4();


};



#endif //GESTOR_H
