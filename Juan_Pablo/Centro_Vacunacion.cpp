#include "Centro_Vacunacion.hpp"
#include <iostream>
#include <fstream>

CentroVacunacion::CentroVacunacion() : nombre(""), ubicacion(""), capacidad(0) {}

// Métodos de acceso
std::string CentroVacunacion::getNombre() {
    return nombre;
}

std::string CentroVacunacion::getUbicacion() {
    return ubicacion;
}

int CentroVacunacion::getCapacidad() {
    return capacidad;
}

// Métodos de modificación
void CentroVacunacion::setNombre(std::string nuevoNombre) {
    nombre = nuevoNombre;
}

void CentroVacunacion::setUbicacion(std::string nuevaUbicacion) {
    ubicacion = nuevaUbicacion;
}

void CentroVacunacion::setCapacidad(int nuevaCapacidad) {
    capacidad = nuevaCapacidad;
}

// Otros métodos
void CentroVacunacion::registrarCentroVacunacion() {
    std::cout << "Ingrese el nombre del centro de vacunacion: ";
    std::cin.ignore(); // Ignorar el salto de línea pendiente
    std::getline(std::cin, nombre);

    std::cout << "Ingrese la ubicacion del centro de vacunacion: ";
    std::getline(std::cin, ubicacion);

    std::cout << "Ingrese la capacidad del centro de vacunacion: ";
    std::cin >> capacidad;
    // Podrías agregar más campos según tus necesidades

    // Guardar la información en un archivo o realizar otras operaciones según tus requerimientos
    std::ofstream archivo("CentrosVacunacion.csv", std::ios::app);
    if (archivo.is_open()) {
        archivo << nombre << "," << ubicacion << "," << capacidad << "\n";
        std::cout << "Centro de vacunación registrado correctamente.\n";
        archivo.close();
    } else {
        std::cerr << "Error al abrir el archivo CentrosVacunacion.csv\n";
    }
}

void CentroVacunacion::mostrarInformacion() {
    std::cout << "\nInformacion del centro de vacunacion:\n";
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Ubicacion: " << ubicacion << "\n";
    std::cout << "Capacidad: " << capacidad << "\n";
    // Puedes agregar más campos según tus necesidades
}
