#include "Usuario.hpp"
#include "Impresora.hpp"
#include "Centro_Vacunacion.hpp"
#include <iostream>

int main() {
    int opcion;

    do {
        std::cout << "\nMenu Principal:\n";
        std::cout << "1. Registrar Usuario\n";
        std::cout << "2. Registrar Impresora\n";
        std::cout << "3. Registrar Centro de Vacunación\n";
        std::cout << "4. Salir\n";
        std::cout << "Elija una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                Usuario usuario;
                usuario.registrar_usuario();
                usuario.registrar_cita();
                usuario.registrar_papeles_oficiales();
                break;
            }
            case 2: {
                Impresora impresora;
                impresora.registrar_vacunacion();
                impresora.registrar_efectos_secundarios();
                impresora.imprimir_certificado();
                break;
            }
            case 3: {
                CentroVacunacion centroVacunacion;
                centroVacunacion.registrarCentroVacunacion();
                centroVacunacion.mostrarInformacion();
                break;
            }
            case 4:
                std::cout << "Saliendo del programa. ¡Hasta luego!\n";
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
        }

    } while (opcion != 4);

    return 0;
}
