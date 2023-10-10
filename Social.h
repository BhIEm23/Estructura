#include <iostream>
#include <string>

using namespace std;

class Social : public Software {
private:
    int cantidadAmigos;
public:
    Social(string,string,int,bool,int);
};

Social::Social(string nombre,string tipo,int edadMinima,bool accesoAdmin,int cantidadAmigos):Software(nombre,tipo,edadMinima,accesoAdmin){
    this->cantidadAmigos=cantidadAmigos;
}