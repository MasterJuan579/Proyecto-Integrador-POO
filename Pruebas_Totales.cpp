#include "Usuario.hpp"
#include "Impresora.hpp"
#include <iostream>

int main() {
    // Pruebas para la clase Usuario
    Usuario usuario1;

    usuario1.registrar_usuario();
    std::cout << "Datos del usuario después de registrar:" << std::endl;
    usuario1.imprimir_datos();
    std::cout << std::endl;

    usuario1.leer_datos();
    std::cout << "Datos del usuario después de leer desde archivo:" << std::endl;
    usuario1.imprimir_datos();
    std::cout << std::endl;

    // Pruebas para la clase Impresora
    Impresora impresora1;

    impresora1.registrar_vacunacion();
    impresora1.registrar_efectos_secundarios();
    std::cout << "Certificado de vacunación:" << std::endl;
    impresora1.imprimir_certificado();

    return 0;
}
