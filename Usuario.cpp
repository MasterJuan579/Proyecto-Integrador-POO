#include "Usuario.hpp"
#include <iostream>
#include <fstream>

Usuario::Usuario() {
}

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
        std::cout << "Ingrese el día del mes para la cita: ";
        std::cin >> dia;

        std::cout << "Cita registrada para el día " << dia << " del mes.\n";
    } else {
        std::cout << "No se registró ninguna cita.\n";
    }
}

void Usuario::registrar_papeles_oficiales() {
    std::string respuesta;
    std::cout << "¿El usuario ha cumplido con los papeles oficiales? (Sí/No): ";
    std::cin >> respuesta;

    if (respuesta == "Sí" || respuesta == "Si" || respuesta == "sí" || respuesta == "si") {
        int dia;
        std::cout << "¿En qué día del mes desea la cita para presentar los papeles oficiales? ";
        std::cin >> dia;

        std::cout << "Cita para presentar papeles oficiales registrada para el día " << dia << " del mes.\n";
    } else {
        std::cout << "No se registró ninguna cita para presentar papeles oficiales.\n";
    }
}