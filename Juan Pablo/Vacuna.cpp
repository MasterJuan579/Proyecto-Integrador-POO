#include "Vacuna.hpp"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Vacuna::Vacuna() : nombre_vacuna(""), lote(0), cantidad(0), vencimiento("") {}

Vacuna::Vacuna(string newVacuna, int newLote, int newCantidad, string newVencimiento): 
    nombre_vacuna(newVacuna), lote(newLote), cantidad{newCantidad}, vencimiento(newVencimiento) {}

string Vacuna::getNombre_vacuna(){return  nombre_vacuna;}
int Vacuna::getLote(){return lote;}
int Vacuna::getCantidad(){return cantidad;}
string Vacuna::getVencimiento(){return vencimiento;}

void Vacuna::setNombre_Vacuna(string newVacuna) { nombre_vacuna = newVacuna; }
void Vacuna::setLote(int newLote) { lote = newLote; }
void Vacuna::setCantidad(int newCantidad) { cantidad = newCantidad; }
void Vacuna::setVencimiento(string newVencimiento) { vencimiento = newVencimiento; }



void Vacuna::registrar_nueva_vacuna(std::string nombre_archivo) {
    // Abrir el archivo en modo de escritura (append)
    ofstream archivo_salida(nombre_archivo, std::ios::app);

    if (archivo_salida.is_open()) {
        // Escribir la información de la nueva vacuna en formato CSV
        archivo_salida << nombre_vacuna << "," << lote << "," << cantidad << "," << vencimiento << "\n";

        // Cerrar el archivo
        archivo_salida.close();
        cout << "Información de la nueva vacuna guardada en el archivo CSV." << std::endl;
    } 
    else {
        cerr << "Error al abrir el archivo para escritura." << std::endl;
    }
}


void Vacuna::reportar_efectividad() {
    cout << "¿La vacuna " << nombre_vacuna << " fue efectiva? (S/N): ";
    char respuesta;
    cin >> respuesta;

    if (respuesta == 'S' || respuesta == 's') {
        cout << "La vacuna fue efectiva." << endl;
    } else {
        cout << "La vacuna no fue efectiva." << endl;
    }
}