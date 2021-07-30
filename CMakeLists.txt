cmake_minimum_required(VERSION 3.19)
project(ProyectoIndividual)

set(CMAKE_CXX_STANDARD 14)

add_library(ProyectoIndividual "AaD/dl.h" AaD/dl.cpp COI/bl/entities/asiento/Asiento.h COI/bl/entities/asiento/Asiento.cpp COI/bl/entities/cola/Cola.h COI/bl/entities/cola/Cola.cpp COI/bl/entities/listaSimple/Lista.h COI/bl/entities/listaSimple/Lista.cpp COI/bl/entities/nodo/Nodo.h COI/bl/entities/nodo/Nodo.cpp COI/bl/entities/pila/Pila.h COI/bl/entities/pila/Pila.cpp COI/bl/logic/Gestor.h COI/bl/logic/Gestor.cpp COI/dao/Dao.cpp COI/dao/Dao.h)