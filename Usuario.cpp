#include "Usuario.hpp"
#include <iostream>

Usuario::Usuario() : nombre(""), direccion(""), contacto(0), edad(0) {}

void Usuario::registrar_usuario() {
    std::cout << "Registrando usuario..." << std::endl;
}

void Usuario::registrar_cita() {
    std::cout << "Registrando cita..." << std::endl;
}

void Usuario::registrar_papeles_oficiales() {
    std::cout << "Registrando papeles oficiales..." << std::endl;
}

std::string Usuario::getNombre() {
    return nombre;
}

std::string Usuario::getDireccion() {
    return direccion;
}

int Usuario::getContacto() {
    return contacto;
}

int Usuario::getEdad() {
    return edad;
}

void Usuario::setNombre(std::string nuevoNombre) {
    nombre = nuevoNombre;
}

void Usuario::setDireccion(std::string nuevaDireccion) {
    direccion = nuevaDireccion;
}

void Usuario::setContacto(int nuevoContacto) {
    contacto = nuevoContacto;
}

void Usuario::setEdad(int nuevaEdad) {
    edad = nuevaEdad;
}
