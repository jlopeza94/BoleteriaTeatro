//
// Created by lopez on 27/7/2021.
//

#include "../../dao/Dao.h"
#include "Gestor.h"

Gestor::Gestor(){
    this->datos = new Dao();
}

string Gestor::agregarListaEspera(string tipo) {
    try {
        Asiento *nuevo = new Asiento(tipo, true, 0, datos->getListaEspera()->getTamano()+1);
        datos->getListaEspera()->agregar(*nuevo);
        return "¡Cliente agregado a la lista de espera de numero: "+(datos->getListaEspera()->getTamano()+1);
    }catch(...) {
        return "No se pudo agregar el cliente a la lista de espera. Contacte al administrador del sistema.";
    }
}

string Gestor::atenderListaEspera() {
    try {
        datos->getListaEspera()->atender();
        return "¡Primer cliente en cola atendido con exito! ";
    }catch (...){
        return "No se pudo atender el cliente de la lista de espera. Contacte al administrador del sistema.";
    }
}

string Gestor::mostrarValoresListaEspera() {
    try {
        return datos->getListaEspera()->mostrarValores();
    }catch (...){
        return "No se pudo mostrar la informacion de la lista de espera.Contacte al administrador del sistema.";
    }
}

string Gestor::agregarListaGeneral() {
    try {
        if (datos->getGeneral()->getTamano()==20){
            return "Butacas generales llenas. Se agregara a la lista de espera...\n"+agregarListaEspera("General");;
        } else {
            Asiento *nuevo = new Asiento("General", true, 4000, datos->getGeneral()->getTamano() + 1);
            datos->getGeneral()->agregarFinal(*nuevo);
            return "Cliente agregado con exito a las butacas generales. Su asiento es el numero: " +
                   (datos->getGeneral()->getTamano() + 1);
        }
    }catch (...){
        return "No se pudo reservar la butaca.Contacte al administrador del sistema.";
    }
}

string Gestor::mostrarValoresListaGeneral() {
    try {
        return datos->getGeneral()->mostrarValores();
    }catch (...){
        return "No se pudo mostrar la informacion de las butacas generales.Contacte al administrador del sistema.";
    }
}

string Gestor::agregarListaVIP(string tipo, bool estado, int precio, int posicion) {
    try {
        if (datos->getPreferencialVip()->getTamano()==10){
            return "Butacas preferenciales VIP llenas. Se agregara a la lista de espera...\n"+agregarListaEspera("VIP");;
        } else {
            Asiento *nuevo = new Asiento("VIP", true, 7000, datos->getPreferencialVip()->getTamano() + 1);
            datos->getGeneral()->agregarFinal(*nuevo);
            return "Cliente agregado con exito a las butacas preferencial VIP. Su asiento es el numero: " +
                   (datos->getPreferencialVip()->getTamano() + 1);
        }
    }catch (...){
        return "No se pudo reservar la butaca.Contacte al administrador del sistema.";
    }
}

string Gestor::mostrarValoresListaVIP() {
    try {
        return datos->getPreferencialVip()->mostrarValores();
    }catch (...){
        return "No se pudo mostrar la informacion de las butacas preferenciales VIP.Contacte al administrador del sistema.";
    }
}

string Gestor::pushPreferencial(string tipo, bool estado, int precio, int id) {
    try {
        Asiento *nuevo = new Asiento("Preferencial", true, 5500, 0);
        if (datos->getPreferencialH1()->getTamano()<5){
            nuevo->setId(datos->getPreferencialH1()->getTamano()+1);
            datos->getPreferencialH1()->push(*nuevo);
            return"Cliente agregado con exito a las butacas preferencial H1. Su asiento es el numero: " +
                (datos->getPreferencialH1()->getTamano() + 1);
        } else if(datos->getPreferencialH2()->getTamano()<5){
            nuevo->setId(datos->getPreferencialH2()->getTamano()+1);
            datos->getPreferencialH2()->push(*nuevo);
            return"Cliente agregado con exito a las butacas preferencial H2. Su asiento es el numero: " +
                  (datos->getPreferencialH2()->getTamano() + 1);
    } else if(datos->getPreferencialH3()->getTamano()<5){
            nuevo->setId(datos->getPreferencialH3()->getTamano()+1);
            datos->getPreferencialH3()->push(*nuevo);
            return"Cliente agregado con exito a las butacas preferencial H3. Su asiento es el numero: " +
                  (datos->getPreferencialH3()->getTamano() + 1);
    }else if(datos->getPreferencialH4()->getTamano()<5){
            nuevo->setId(datos->getPreferencialH4()->getTamano()+1);
            datos->getPreferencialH4()->push(*nuevo);
            return"Cliente agregado con exito a las butacas preferencial H4. Su asiento es el numero: " +
                  (datos->getPreferencialH4()->getTamano() + 1);
        } else{
            return "Butacas preferenciales VIP llenas. Se agregara a la lista de espera...\n"+agregarListaEspera("Preferencial");
        }
    }catch (...){
        return "No se pudo reservar la butaca.Contacte al administrador del sistema.";
    }
}

string Gestor::popPreferencialH1() {
    try {
        datos->getPreferencialH1()->pop();
        return "Se ha liberado un asiento de la fila preferencial H1";
    }catch (...){
        return "No se pudo liberar la butaca.Contacte al administrador del sistema.";
    }
}
string Gestor::popPreferencialH2() {
    try {
        datos->getPreferencialH2()->pop();
        return "Se ha liberado un asiento de la fila preferencial H2";
    }catch (...){
        return "No se pudo liberar la butaca.Contacte al administrador del sistema.";
    }
}

string Gestor::popPreferencialH3() {
    try {
        datos->getPreferencialH3()->pop();
        return "Se ha liberado un asiento de la fila preferencial H3";
    }catch (...){
        return "No se pudo liberar la butaca.Contacte al administrador del sistema.";
    }
}

string Gestor::popPreferencialH4() {
    try {
        datos->getPreferencialH4()->pop();
        return "Se ha liberado un asiento de la fila preferencial H4";
    }catch (...){
        return "No se pudo liberar la butaca.Contacte al administrador del sistema.";
    }
}

string Gestor::mostrarValoresPreferencialH1() {
    try {
        return datos->getPreferencialH1()->mostrarValores();
    }catch (...){
        return "No se pudo mostrar la informacion de las butacas preferenciales H1.Contacte al administrador del sistema.";
    }
}
string Gestor::mostrarValoresPreferencialH2() {
    try {
        return datos->getPreferencialH2()->mostrarValores();
    }catch (...){
        return "No se pudo mostrar la informacion de las butacas preferenciales H2.Contacte al administrador del sistema.";
    }
}
string Gestor::mostrarValoresPreferencialH3() {
    try {
        return datos->getPreferencialH3()->mostrarValores();
    }catch (...){
        return "No se pudo mostrar la informacion de las butacas preferenciales H3.Contacte al administrador del sistema.";
    }
}

string Gestor::mostrarValoresPreferencialH4() {
    try {
        return datos->getPreferencialH4()->mostrarValores();
    }catch (...){
        return "No se pudo mostrar la informacion de las butacas preferenciales H4.Contacte al administrador del sistema.";
    }
}
