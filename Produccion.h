#include <iostream>
#include <string>

using namespace std;
class Produccion : public Software {
private:
    string tipoSolucion;
public:
    Produccion(string,string,int,bool,string);
};

Produccion::Produccion(string nombre,string tipo,int edadMinima,bool accesoAdmin,string tipoSolucion):Software(nombre,tipo,edadMinima,accesoAdmin){
    this->tipoSolucion=tipoSolucion;
}
