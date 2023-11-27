#include "Usuario.hpp"
#include "Impresora.hpp"
#include "Centro_Vacunacion.hpp"
#include "Vacuna.hpp"
#include <iostream>
#include <limits>  // Necesario para limpiar el búfer después de leer enteros

int main() {
    int opcion;

    do {
        std::cout << "\nMenu Principal:\n";
        std::cout << "1. Registrar Usuario\n";
        std::cout << "2. Registrar Impresora\n";
        std::cout << "3. Registrar Centro de Vacunacion\n";
        std::cout << "4. Registrar Nueva Vacuna\n";
        std::cout << "5. Salir\n";
        std::cout << "Elija una opción: ";

        if (!(std::cin >> opcion)) {
            std::cin.clear();  // Limpiar el estado de error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Limpiar el búfer
            std::cout << "Entrada no válida. Intente de nuevo.\n";
            continue;
        }

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
            case 4: {
                Vacuna vacuna;
                vacuna.registrar_nueva_vacuna();
                vacuna.reportar_efectividad();
                break;
            }
            case 5:
                std::cout << "Saliendo del programa. ¡Hasta luego!\n";
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
        }

    } while (opcion != 5);

    return 0;
}
