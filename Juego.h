#include <iostream>
#include <string>

using namespace std;

class Juego : public Software {
private:
    string genero;
public:
    Juego(string , string , int , bool ,string);
};

Juego::Juego(string nombre,string tipo,int edadMinima,bool accesoAdmin,string genero):Software(nombre,tipo,edadMinima,accesoAdmin){
    this->genero=genero;
}