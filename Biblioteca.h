
#define BIBLIOTECA_H

#include <iostream>
#include <string>
#include "Software.h"
#include "Usuario.h"

using namespace std;

class Biblioteca {
public:
    Usuario* primerUsuario;
    Software* primerSoftware;

    Biblioteca() : primerUsuario(nullptr), primerSoftware(nullptr) {
        // Constructor de Biblioteca
    }

    void agregarUsuario(string nombre, int edad, bool esAdmin,string pasword) {
        Usuario* nuevoUsuario = new Usuario(nombre, edad, esAdmin,pasword);
        nuevoUsuario->siguiente = primerUsuario;
        primerUsuario = nuevoUsuario;
    }

    void agregarSoftware(Software* software) {
        software->siguiente = primerSoftware;
        primerSoftware = software;
    }

    Usuario* buscarUsuario(string nombre){
        Usuario* actual = primerUsuario;
        while(actual != nullptr){
            if(actual->getNombre()==nombre){
                return actual;
            }
            actual = actual->siguiente;
        }
        return nullptr;
    }

    // Implementa métodos para eliminar usuarios y software, verificar permisos, acceder a logs, etc.
};