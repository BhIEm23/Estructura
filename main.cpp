#include <iostream>
#include <string>
#include <stdlib.h>
#include"Biblioteca.h"
#include"Software.h"
#include "Usuario.h"
#include "Navegador.h"
#include "Ofimatica.h"
#include "Produccion.h"
#include "Seguridad.h"
#include "Social.h"
#include "Juego.h"
using namespace std;

void rellenarBaseDeDatos(Biblioteca &biblioteca);
void menuContextual(Biblioteca &biblioteca, Usuario* usuario);
void agregarSoftwareALaBiblioteca(Biblioteca &biblioteca, Usuario* usuarioActual);
void login(Biblioteca &biblioteca);
void logout(Biblioteca &biblioteca, Usuario* usuario);
void menuLogin(Biblioteca &biblioteca);

int main() {
    // Crear una instancia de la Biblioteca
    Biblioteca biblioteca;
    rellenarBaseDeDatos(biblioteca);
    // Implementar el sistema de login y logout
    menuLogin(biblioteca);
    // Crear un menú contextual por consola para permitir al usuario realizar acciones

    // Dentro del bucle del menú, implementar lógica para agregar/eliminar software, acceder a logs, etc.

    // Al realizar logout, ofrecer opciones de logear con otro usuario o terminar el programa

    return 0;
}
void rellenarBaseDeDatos(Biblioteca &biblioteca){
    biblioteca.agregarUsuario("administrador",30,true,"pasword1");
    biblioteca.agregarUsuario("Niño1", 8, false,"pasword2");
    biblioteca.agregarUsuario("Niño2", 9, false,"pasword3");
    biblioteca.agregarUsuario("Niño3", 7, false,"pasword4");
    biblioteca.agregarUsuario("Niño4", 6, false,"pasword5");
    biblioteca.agregarUsuario("Usuario1", 25, false,"pasword6");
    biblioteca.agregarUsuario("Usuario2", 35, false,"pasword7");
    biblioteca.agregarUsuario("Usuario3", 28, false,"pasword8");
    biblioteca.agregarUsuario("Usuario4", 40, false,"pasword9");
    biblioteca.agregarUsuario("Usuario5", 22, false,"pasword10");
    biblioteca.agregarUsuario("Usuario6", 18, false,"pasword11");
    biblioteca.agregarUsuario("Usuario7", 32, false,"pasword12");
    biblioteca.agregarUsuario("Usuario8", 27, false,"pasword13");
    biblioteca.agregarUsuario("Usuario9", 21, false,"pasword14");
    biblioteca.agregarUsuario("Usuario10", 23, false,"pasword15");

    Juego* juego1= new Juego("ApexLegends","Juego",18,false,"Fps");
    Juego* juego2= new Juego("CS2","Juego",18,false,"Fps");
    Juego* juego3= new Juego("Warframe","Juego",18,false,"Mmo");
    Juego* juego4= new Juego("Destiny2","Juego",18,false,"Mmo");
    Juego* juego5= new Juego("Fez","Juego",0,false,"Puzzle");
    Juego* juego6= new Juego("Portal","Juego",0,false,"Puzzle");
    Juego* juego7= new Juego("TheLegendOfZelda","Juego",0,false,"Aventura");
    Juego* juego8= new Juego("GodOFWar","Juego",18,false,"Aventura");
    Juego* juego9= new Juego("Hades","Juego",0,false,"Roguelike");
    Juego* juego10= new Juego("DeadCells","Juego",0,false,"Roguelike");
    Juego* juego11= new Juego("Osu","Juego",0,false,"Musical");
    Juego* juego12= new Juego("MuseDash","Juego",0,false,"Musical");
    Juego* juego13= new Juego("CubeWorld","Juego",0,false,"MundoAbierto");
    Juego* juego14= new Juego("NoMansSky","Juego",0,false,"MundoAbierto");
    Juego* juego15= new Juego("StardewValley","Juego",0,false,"Simulador");
    Juego* juego16= new Juego("TheSims","Juego",0,false,"Simulador");
    Juego* juego17= new Juego("StarCraft","Juego",18,false,"Estrategia");
    Juego* juego18= new Juego("AdvanceWar","Juego",0,false,"Estrategia");
    Juego* juego19= new Juego("Celeste","Juego",0,false,"Plataforma");
    Juego* juego20= new Juego("Bread&Fred","Juego",0,false,"Plataforma");

    biblioteca.agregarSoftware(juego1);
    biblioteca.agregarSoftware(juego2);
    biblioteca.agregarSoftware(juego3);
    biblioteca.agregarSoftware(juego4);
    biblioteca.agregarSoftware(juego5);
    biblioteca.agregarSoftware(juego6);
    biblioteca.agregarSoftware(juego7);
    biblioteca.agregarSoftware(juego8);
    biblioteca.agregarSoftware(juego9);
    biblioteca.agregarSoftware(juego10);
    biblioteca.agregarSoftware(juego11);
    biblioteca.agregarSoftware(juego12);
    biblioteca.agregarSoftware(juego13);
    biblioteca.agregarSoftware(juego14);
    biblioteca.agregarSoftware(juego15);
    biblioteca.agregarSoftware(juego16);
    biblioteca.agregarSoftware(juego17);
    biblioteca.agregarSoftware(juego18);
    biblioteca.agregarSoftware(juego19);
    biblioteca.agregarSoftware(juego20);

    Ofimatica* ofimatica1 = new Ofimatica("MicrosoftWord","Ofimatica",0,false,47);
    Ofimatica* ofimatica2 = new Ofimatica("MicrosoftPowerPoint","Ofimatica",0,false,2);
    Ofimatica* ofimatica3 = new Ofimatica("MicrosoftExcel","Ofimatica",0,false,84);
    Ofimatica* ofimatica4 = new Ofimatica("MicrosoftOneNote","Ofimatica",0,false,86);
    Ofimatica* ofimatica5 = new Ofimatica("Outlook","Ofimatica",0,false,37);
    
    biblioteca.agregarSoftware(ofimatica1);
    biblioteca.agregarSoftware(ofimatica2);
    biblioteca.agregarSoftware(ofimatica3);
    biblioteca.agregarSoftware(ofimatica4);
    biblioteca.agregarSoftware(ofimatica5);

    Produccion* produccion1 = new Produccion("AdobeAudition","Produccion",18,false,"Musica");
    Produccion* produccion2 = new Produccion("Filmora","Produccion",18,false,"Video");
    Produccion* produccion3 = new Produccion("ObsStudio","Produccion",18,false,"Streaming");
    Produccion* produccion4 = new Produccion("PicsArt","Produccion",18,false,"Fotos");

    biblioteca.agregarSoftware(produccion1);
    biblioteca.agregarSoftware(produccion2);
    biblioteca.agregarSoftware(produccion3);
    biblioteca.agregarSoftware(produccion4);

    Navegador* navegador1 = new Navegador("GoogleChrome");
    navegador1->agregarPaginaAlHistorial("https://www.twitch.tv");
    navegador1->agregarPaginaAlHistorial("https://discord.com");
    navegador1->agregarPaginaAlHistorial("https://www.paris.cl");
    navegador1->agregarPaginaAlHistorial("https://www.youtube.com");
    navegador1->agregarPaginaAlHistorial("https://www.booking.com");
    navegador1->agregarPaginaAlHistorial("https://best.aliexpress.com");
    navegador1->agregarPaginaAlHistorial("https://www.eneba.com");
    navegador1->agregarPaginaAlHistorial("https://www.starplus.com");
    navegador1->agregarPaginaAlHistorial("https://www.amazon.com");
    navegador1->agregarPaginaAlHistorial("https://www.nike.cl");

    Navegador* navegador2 = new Navegador("FireFox");
    navegador2->agregarPaginaAlHistorial("https://www.twitch.tv");
    navegador2->agregarPaginaAlHistorial("https://discord.com");
    navegador2->agregarPaginaAlHistorial("https://www.paris.cl");
    navegador2->agregarPaginaAlHistorial("https://www.youtube.com");
    navegador2->agregarPaginaAlHistorial("https://www.booking.com");
    navegador2->agregarPaginaAlHistorial("https://best.aliexpress.com");
    navegador2->agregarPaginaAlHistorial("https://www.eneba.com");
    navegador2->agregarPaginaAlHistorial("https://www.starplus.com");
    navegador2->agregarPaginaAlHistorial("https://www.amazon.com");
    navegador2->agregarPaginaAlHistorial("https://www.nike.cl");
    
    biblioteca.agregarSoftware(navegador1);
    biblioteca.agregarSoftware(navegador2);

    Seguridad* seguridad1 = new Seguridad("AvastFreeAntivirus","Seguridad",0,true,"Ransomware");
    Seguridad* seguridad2 = new Seguridad("MalwarebytesAnti-MalwareFree","Seguridad",0,true,"Spyware");
    Seguridad* seguridad3 = new Seguridad("AVGAntivirus","Seguridad",0,true,"Botnets");
    Seguridad* seguridad4 = new Seguridad("KasperskySecurityCloud","Seguridad",0,true,"Rootkits");
    Seguridad* seguridad5 = new Seguridad("MicrosoftWindowsDefender","Seguridad",0,true,"Gusanos");
    Seguridad* seguridad6 = new Seguridad("Bitdefender Antivirus","Seguridad",0,true,"Troyanos");

    biblioteca.agregarSoftware(seguridad1);
    biblioteca.agregarSoftware(seguridad2);
    biblioteca.agregarSoftware(seguridad3);
    biblioteca.agregarSoftware(seguridad4);
    biblioteca.agregarSoftware(seguridad5);
    biblioteca.agregarSoftware(seguridad6);

    Social* social1 = new Social("Facebook","Social",0,false,96);
    Social* social2 = new Social("Twitter","Social",18,false,459);

    biblioteca.agregarSoftware(social1);
    biblioteca.agregarSoftware(social2);
    return;
}
void menuLogin(Biblioteca &biblioteca){
    while(true){
        cout<<"Menu de inicio de sesion:"<<endl;
        cout<<"1. Iniciar sesion"<<endl;
        cout<<"2. Salir"<<endl;
        cout<<"Ingrese una opcion: ";


        int opcion;
        cin>>opcion;
        switch(opcion){
            case 1:
                login(biblioteca);
                break;
            case 2:
                cout<<"Saliendo del programa..."<<endl;
                exit(1);
                break;
            default:
                cout<<"opcion no valida. Intentelo denuevo."<<endl;
            
        }
    }
}
void menuContextual(Biblioteca &biblioteca, Usuario* usuario){
    while (true) {
        cout << "\nMenu Contextual:\n";
        cout << "1. Agregar software a la biblioteca\n";
        cout << "2. Eliminar software de la biblioteca\n";
        cout << "3. Acceder al log de uso de un software\n";
        cout << "4. Realizar logout\n";
        cout << "Ingrese una opción: ";

        int opcion;
        cin >> opcion;

        switch (opcion) {
            case 1: {
                agregarSoftwareALaBiblioteca(biblioteca,usuario);
                break;
            }
            case 2: {
                // Lógica para eliminar software (verificando permisos)
                break;
            }
            case 3: {
                // Lógica para acceder al log de uso de un software (verificando permisos)
                break;
            }
            case 4: {
                logout(biblioteca, usuario);
                return;
            }
            default: {
                cout << "Opción no válida. Inténtelo de nuevo.\n";
                break;
            }
        }
    }
}
void agregarSoftwareALaBiblioteca(Biblioteca &biblioteca, Usuario* usuario){
    string nombreSoftware, tipo;
    cout << "Ingrese el nombre del software: "<<endl;
    cin>>nombreSoftware;
    if(nombreSoftware == "Juego"){
        int edadMinima;
        string genero;
        cout << "Ingrese el genero del Juego: "<<endl;
        cin>>genero;
        cout << "Ingrese el tipo del software: "<<endl;
        cin>>tipo;
        cout << "Ingrese la edad mínima requerida para acceder: "<<endl;
        cin >> edadMinima;
        Juego* nuevojuego = new Juego(nombreSoftware,tipo,edadMinima,false,genero);
        biblioteca.agregarSoftware(nuevojuego);
    }
    if(nombreSoftware == "Ofimatica"){
        int edadMinima;
        int cantArch;
        cout << "Ingrese el numero de archivos creados: "<<endl;
        cin>>cantArch;
        cout << "Ingrese el tipo del software: "<<endl;
        cin>>tipo;
        cout << "Ingrese la edad mínima requerida para acceder: "<<endl;
        cin >> edadMinima;
        Ofimatica* nuevoOfimatica = new Ofimatica(nombreSoftware,tipo,edadMinima,false,cantArch);
        biblioteca.agregarSoftware(nuevoOfimatica);
    }
    if(nombreSoftware == "Produccion"){
        int edadMinima;
        string tipoSolucion;
        cout << "Ingrese el tipo de solucion(video, música, streaming, fotos): "<<endl;
        cin>>tipoSolucion;
        cout << "Ingrese el tipo del software: "<<endl;
        cin>>tipo;
        cout << "Ingrese la edad mínima requerida para acceder: "<<endl;
        cin >> edadMinima;
        Produccion* nuevaProduccion = new Produccion(nombreSoftware,tipo,edadMinima,false,tipoSolucion);
        biblioteca.agregarSoftware(nuevaProduccion);
    }
    if(nombreSoftware == "Navegador"){
        int edadMinima;
        string nombreNavegador;
        cout<< "Ingrese el nombre del navegador: "<<endl;
        cin>>nombreNavegador;
        cout << "Ingrese el tipo del software: "<<endl;
        cin>>tipo;
        cout << "Ingrese la edad mínima requerida para acceder: "<<endl;
        cin >> edadMinima;
        Navegador* nuevoNavegador = new Navegador(nombreNavegador);
        biblioteca.agregarSoftware(nuevoNavegador);
    }
    if(nombreSoftware == "Seguridad"){
        int edadMinima;
        string tipoMalware;
        cout<< "Ingrese el tipo de malware: "<<endl;
        cin>>tipoMalware;
        cout << "Ingrese el tipo del software: "<<endl;
        cin>>tipo;
        cout << "Ingrese la edad mínima requerida para acceder: "<<endl;
        cin >> edadMinima;
        Seguridad* nuevaSeguridad = new Seguridad(nombreSoftware,tipo,edadMinima,true,tipoMalware);
        biblioteca.agregarSoftware(nuevaSeguridad);
    }
    if(nombreSoftware == "Social"){
        int edadMinima;
        int numeroDeAmigos;
        cout<< "Ingrese el nombre de la red social"<<endl;
        cin>>numeroDeAmigos;
        cout << "Ingrese el tipo del software: "<<endl;
        cin>>tipo;
        cout << "Ingrese la edad mínima requerida para acceder: "<<endl;
        cin >> edadMinima;
        Social* nuevaSocial = new Social(nombreSoftware,tipo,edadMinima,false,numeroDeAmigos);
        biblioteca.agregarSoftware(nuevaSocial);
    }
    cout<< "El Software fue agregado correctamente"<< endl;
    return;
}
void login(Biblioteca &biblioteca){
    string nombreDeUsuario;
    string paswordDeUsuario;
    cout<<"ingrese su nombre de usuario: "<<endl;
    cin>>nombreDeUsuario;
    cout<<"ingrese su contraseña: "<<endl;
    cin>>paswordDeUsuario;

    Usuario* usuario = biblioteca.buscarUsuario(nombreDeUsuario);

    if(usuario != nullptr && usuario->getPasword()==paswordDeUsuario){

        cout<<"Inicio de sesion existoso."<<endl;
        menuContextual(biblioteca, usuario);
    }else{
        cout<<"Nombre o contraseña incorrectos,intentelo denuevo"<<endl;
        
    }
   
}
void logout(Biblioteca &biblioteca, Usuario* usuario){
    usuario = nullptr;

    cout << "Has cerrado sesión exitosamente." << endl;
    while (true) {
        cout << "Opciones adicionales:\n";
        cout << "1. Iniciar sesión con otro usuario\n";
        cout << "2. Salir del programa\n";
        cout << "Ingrese una opción: ";

        int opcion;
        cin >> opcion;

        switch (opcion) {
            case 1:
                menuLogin(biblioteca);
                return; 
            case 2:
                cout << "Saliendo del programa..." << endl;
                exit(0); 
            default:
                cout << "Opción no válida. Inténtelo de nuevo." << endl;
        }
    }
}

