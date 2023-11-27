#include "Impresora.hpp"
#include <iostream>
#include <fstream>

Impresora::Impresora() : vacuna_aplicada(""), fecha_aplicacion(0) {}

void Impresora::registrar_vacunacion() {
    std::cout << "Ingrese la vacuna aplicada: ";
    std::getline(std::cin, vacuna_aplicada);
    std::cout << "Ingrese la fecha de aplicación: ";
    std::cin >> fecha_aplicacion;
    std::cin.ignore(); // Ignorar el salto de línea
}

void Impresora::registrar_efectos_secundarios() {
    std::cout << "Registrando efectos secundarios..." << std::endl;
}

void Impresora::imprimir_certificado() {
    std::cout << "Vacuna aplicada: " << vacuna_aplicada << std::endl;
    std::cout << "Fecha de aplicación: " << fecha_aplicacion << std::endl;
}

