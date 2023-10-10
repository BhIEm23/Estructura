#include <iostream>
#include <string>

using namespace std;

class Navegador : public Software {
public:
    struct Pagina {
        string url;
        Pagina* siguiente;

        Pagina(const string& url) : url(url), siguiente(nullptr) {}
    };

    Pagina* historialNavegacion;

    Navegador(string nombre) : Software(nombre, "Navegadores", 0, false), historialNavegacion(nullptr) {
    }

    void agregarPaginaAlHistorial(const string& url) {
        Pagina* nuevaPagina = new Pagina(url);
        nuevaPagina->siguiente = historialNavegacion;
        historialNavegacion = nuevaPagina;
    }

};