#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>

using namespace std;

class Usuario {
public:
    string nombre;
    int edad;
    bool esAdmin;
    string pasword;
    Usuario* siguiente;
    Usuario(string , int ,bool,string);
    ~Usuario();
    string getNombre();
    int getEdad();
    void setNombre(string nombre);
    void setEdad(int edad);
    void setPasword(string pasword);
    string getPasword();
};
Usuario::Usuario(string nombre,int edad,bool esAdmin,string pasword){
    this->nombre=nombre;
    this->edad=edad;
    this->esAdmin=esAdmin;
    this->pasword=pasword;
}
Usuario::~Usuario(){

};

string Usuario::getNombre(){
    return this->nombre;
}
int Usuario::getEdad(){
    return this->edad;
}
string Usuario::getPasword(){
    return this->pasword;
}
void Usuario::setNombre(string nombre){
    this->nombre=nombre;
}
void Usuario::setEdad(int edad){
    this->edad=edad;
}
void Usuario::setPasword(string pasword){
    this->pasword=pasword;
}
#endif // USUARIO_H