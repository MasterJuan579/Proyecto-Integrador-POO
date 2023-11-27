#include "Impresora.hpp"
#include <iostream>

Impresora::Impresora() {
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

