#include "Registro_Vacunacion.hpp"
#include <iostream>

Registro_Vacunacion::Registro_Vacunacion() {}

std::string Registro_Vacunacion::getFecha_registro() const {
    return fecha_registro;
}

std::string Registro_Vacunacion::getNombre() const {
    return nombre;
}

std::string Registro_Vacunacion::getNombre_vacuna() const {
    return nombre_vacuna;
}

std::string Registro_Vacunacion::getCentro_vacunacion() const {
    return centro_vacunacion;
}

void Registro_Vacunacion::guardarUsuario() {
    std::cout << "Ingrese la fecha de registro (YYYY-MM-DD): ";
    std::cin >> fecha_registro;
    std::cout << "Ingrese su nombre: ";
    std::cin.ignore();
    std::getline(std::cin, nombre);
    std::cout << "Ingrese el nombre de la vacuna aplicada: ";
    std::cin >> nombre_vacuna;

    // Pregunta por el centro de vacunación
    std::cout << "Seleccione el centro de vacunacion (1, 2, 3): ";
    int opcion_centro;
    std::cin >> opcion_centro;
    switch (opcion_centro) {
        case 1:
            centro_vacunacion = "Centro 1";
            break;
        case 2:
            centro_vacunacion = "Centro 2";
            break;
        case 3:
            centro_vacunacion = "Centro 3";
            break;
        default:
            centro_vacunacion = "Desconocido";
    }

    // Guardar en el archivo CSV
    std::ofstream archivo("registro.csv", std::ios::app);
    if (archivo.is_open()) {
        archivo << fecha_registro << "," << nombre << "," << nombre_vacuna << "," << centro_vacunacion << "\n";
        std::cout << "Datos guardados en registro.csv.\n";
        archivo.close();
    } else {
        std::cerr << "Error al abrir el archivo registro.csv\n";
    }
}

void Registro_Vacunacion::mostrarInformacion() const {
    std::cout << "\n-- Informacion del Registro --\n";
    std::cout << "1. Fecha de Registro: " << getFecha_registro() << "\n";
    std::cout << "2. Nombre: " << getNombre() << "\n";
    std::cout << "3. Nombre de la Vacuna: " << getNombre_vacuna() << "\n";
    std::cout << "4. Centro de Vacunacion: " << getCentro_vacunacion() << "\n";
}


