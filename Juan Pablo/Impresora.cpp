#include "Impresora.hpp"
#include <iostream>

Impresora::Impresora() : nombre(""), vacuna_aplicada(""), fecha_aplicacion(0) {}

Impresora::Impresora(std::string newNombre, std::string newVacuna, int newFecha)
    : nombre(newNombre), vacuna_aplicada(newVacuna), fecha_aplicacion(newFecha) {}

std::string Impresora::getNombre() {
    return nombre;
}

std::string Impresora::getVacuna_aplicada() {
    return vacuna_aplicada;
}

int Impresora::getFecha_aplicacion() {
    return fecha_aplicacion;
}

void Impresora::setNombre(std::string newNombre) {
    nombre = newNombre;
}

void Impresora::setVacuna_aplicada(std::string newVacuna) {
    vacuna_aplicada = newVacuna;
}

void Impresora::setFecha_aplicacion(int newFecha) {
    fecha_aplicacion = newFecha;
}

void Impresora::registrar_vacunacion() {
    std::cout << "Ingrese su nombre: ";
    std::cin >> nombre;
    
    std::cout << "Ingrese el nombre de la vacuna aplicada: ";
    std::cin >> vacuna_aplicada;

    std::cout << "Ingrese la fecha de aplicación (formato AAAAMMDD): ";
    std::cin >> fecha_aplicacion;

    std::string respuesta;
    std::cout << "¿Se vacunó? (Sí/No): ";
    std::cin >> respuesta;

    if (respuesta == "Sí" || respuesta == "Si" || respuesta == "sí" || respuesta == "si") {
        registrar_efectos_secundarios();
        std::string imprimirCertificado;
        std::cout << "¿Desea imprimir el certificado? (Sí/No): ";
        std::cin >> imprimirCertificado;

        if (imprimirCertificado == "Sí" || imprimirCertificado == "Si" || imprimirCertificado == "sí" || imprimirCertificado == "si") {
            imprimir_certificado();
        }
    }
}

void Impresora::registrar_efectos_secundarios() {
    std::string respuesta;
    std::cout << "¿Hubo efectos secundarios? (Sí/No): ";
    std::cin >> respuesta;

    if (respuesta == "Sí" || respuesta == "Si" || respuesta == "sí" || respuesta == "si") {
        std::cout << "Efectos secundarios registrados.\n";
    } else {
        std::cout << "No hubo efectos secundarios registrados.\n";
    }
}

void Impresora::imprimir_certificado() {
    // Imprimir el certificado en la terminal
    std::cout << "\nCertificado de Vacunación:\n";
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Fecha de aplicación: " << fecha_aplicacion << "\n";
    std::cout << "Vacuna aplicada: " << vacuna_aplicada << "\n";
}
