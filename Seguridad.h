#include <iostream>
#include <string>

using namespace std;

class Seguridad : public Software {
private:
    string tipoMalware;
public:
    Seguridad(string,string,int,bool,string);
};
Seguridad::Seguridad(string nombre,string tipo,int edadMinima,bool accesoAdmin,string tipoMalware):Software(nombre,tipo,edadMinima,accesoAdmin){
    this->tipoMalware=tipoMalware;
}