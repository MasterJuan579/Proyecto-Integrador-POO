#include "Vacuna.hpp"
#include <iostream>
#include <vector>

using namespace std;


int main() {
    // Crear instancias de Vacuna
    Vacuna vacuna1("VacunaA", 1, 100, "2023-01-01");
    Vacuna vacuna2("VacunaB", 2, 150, "2023-02-01");

    // Mostrar información de las vacunas
    cout << "Información de la Vacuna 1:" << endl;
    cout << "Nombre: " << vacuna1.getNombre_vacuna() << endl;
    cout << "Lote: " << vacuna1.getLote() << endl;
    cout << "Cantidad: " << vacuna1.getCantidad() << endl;
    cout << "Fecha de vencimiento: " << vacuna1.getVencimiento() << endl;

    cout << "\nInformación de la Vacuna 2:" << endl;
    cout << "Nombre: " << vacuna2.getNombre_vacuna() << endl;
    cout << "Lote: " << vacuna2.getLote() << endl;
    cout << "Cantidad: " << vacuna2.getCantidad() << endl;
    cout << "Fecha de vencimiento: " << vacuna2.getVencimiento() << endl;

    // Modificar datos de una vacuna
    vacuna1.setCantidad(120);
    vacuna1.setVencimiento("2023-03-01");

    // Mostrar la información actualizada
    cout << "\nInformación actualizada de la Vacuna 1:" << endl;
    cout << "Cantidad: " << vacuna1.getCantidad() << endl;
    cout << "Fecha de vencimiento: " << vacuna1.getVencimiento() << endl;

    // Registrar nuevas vacunas
    vacuna1.registrar_nueva_vacuna("Vacunas.csv");
    vacuna2.registrar_nueva_vacuna("Vacunas.csv");

    // Reportar efectividad
    vacuna1.reportar_efectividad();
    vacuna2.reportar_efectividad();

    return 0;
}
