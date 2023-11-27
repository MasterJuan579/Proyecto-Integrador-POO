#include "Usuario.hpp"
#include "Impresora.hpp"
#include <iostream>

int main() {
    // Pruebas para Usuario
    Usuario usuario1;

    std::cout << "Ingrese los datos del usuario:" << std::endl;
    usuario1.registrar_usuario();
    usuario1.imprimir_datos();
    usuario1.guardar_datos();

    // Pruebas para Impresora
    Impresora impresora1;

    std::cout << "Ingrese la información de la vacunación:" << std::endl;
    impresora1.registrar_vacunacion();
    impresora1.registrar_efectos_secundarios();
    impresora1.imprimir_certificado();

    return 0;
}
