#include "Usuario.hpp"
#include "Impresora.hpp"
#include "Centro_Vacunacion.hpp"
#include "Vacuna.hpp"
#include <iostream>

int main() {
    // Crear un usuario
    Usuario usuario;
    usuario.registrar_usuario();
    usuario.registrar_cita();
    usuario.registrar_papeles_oficiales();

    // Crear una impresora
    Impresora impresora;
    impresora.registrar_vacunacion();
    impresora.registrar_efectos_secundarios();
    impresora.imprimir_certificado();

    // Crear un centro de vacunación
    CentroVacunacion centroVacunacion;
    centroVacunacion.registrarCentroVacunacion();
    centroVacunacion.mostrarInformacion();

    Vacuna vacuna;
    vacuna.registrar_nueva_vacuna();
    vacuna.reportar_efectividad();

    return 0;
}
