#include "Usuario.hpp"
#include <iostream>
#include <fstream>

Usuario::Usuario() : nombre(""), direccion(""), contacto(0), edad(0) {}

Usuario::Usuario(std::string nombre, std::string direccion, int contacto, int edad)
    : nombre(nombre), direccion(direccion), contacto(contacto), edad(edad) {}

std::string Usuario::getNombre() {return nombre;}

std::string Usuario::getDireccion() {return direccion;}

int Usuario::getContacto() {return contacto;}

int Usuario::getEdad() {return edad;}

void Usuario::setNombre(std::string nuevoNombre) {nombre = nuevoNombre;}

void Usuario::setDireccion(std::string nuevaDireccion) {direccion = nuevaDireccion;}

void Usuario::setContacto(int nuevoContacto) {contacto = nuevoContacto;}

void Usuario::setEdad(int nuevaEdad) {edad = nuevaEdad;}

void Usuario::registrar_usuario() {
    std::cout << "Ingrese el nombre del usuario: ";
    std::cin >> nombre;
    std::cout << "Ingrese la dirección del usuario: ";
    std::cin >> direccion;
    std::cout << "Ingrese el contacto del usuario: ";
    std::cin >> contacto;
    std::cout << "Ingrese la edad del usuario: ";
    std::cin >> edad;

    std::ofstream archivo("Usuario.csv", std::ios::app); // Abrir el archivo en modo de adjuntar
    if (archivo.is_open()) {
        archivo << nombre << "," << direccion << "," << contacto << "," << edad << "\n";
        std::cout << "Usuario registrado correctamente.\n";
        archivo.close();
    } else {
        std::cerr << "Error al abrir el archivo Usuario.csv\n";
    }
}

void Usuario::registrar_cita() {
    std::string respuesta;
    std::cout << "¿Desea registrar una cita? (Sí/No): ";
    std::cin >> respuesta;

    if (respuesta == "Sí" || respuesta == "Si" || respuesta == "sí" || respuesta == "si") {
        int dia;
        std::cout << "Ingrese el dia del mes para la cita: ";
        std::cin >> dia;

        std::cout << "Cita registrada para el dia " << dia << " del mes.\n";
    } else {
        std::cout << "No se registro ninguna cita.\n";
    }
}

void Usuario::registrar_papeles_oficiales() {
    std::string respuesta;
    std::cout << "¿El usuario ha cumplido con los papeles oficiales? (Sí/No): ";
    std::cin >> respuesta;

    if (respuesta == "Sí" || respuesta == "Si" || respuesta == "sí" || respuesta == "si") {
        int dia;
        std::cout << "¿En qué dia del mes desea la cita para presentar los papeles oficiales? ";
        std::cin >> dia;

        std::cout << "Cita para presentar papeles oficiales registrada para el dia " << dia << " del mes.\n";
    } else {
        std::cout << "No se registro ninguna cita para presentar papeles oficiales.\n";
    }
}
