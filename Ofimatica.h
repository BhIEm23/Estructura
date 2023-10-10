#include <iostream>
#include <string>

using namespace std;

class Ofimatica : public Software {
private:
    int archivosCreados;
public:
    Ofimatica(string ,string , int , bool ,int);
};
Ofimatica::Ofimatica(string nombre,string tipo,int edadMinima,bool accesoAdmin,int archivosCreados):Software(nombre,tipo,edadMinima,accesoAdmin){
    this->archivosCreados=archivosCreados;
}