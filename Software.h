#ifndef SOFTWARE_H
#define SOFTWARE_H

#include <iostream>
#include<string>

using namespace std;

class Software {
public:
    string nombre;
    string tipo;
    int edadMinima;
    bool accesoAdmin;
    Software* siguiente;

    Software(string ,string , int , bool );
    ~Software();

};


Software::Software(string nombre,string tipo,int edadMinima,bool accesoAdmin){
    this->nombre=nombre;
    this->tipo=tipo;
    this->edadMinima=edadMinima;
    this->accesoAdmin=accesoAdmin;
}
Software::~Software(){

};
#endif // SOFTWARE_H