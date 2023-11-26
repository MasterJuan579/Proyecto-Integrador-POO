#include "Usuario.hpp"
#include <iostream>

int main() {
    Usuario usuario1;

    usuario1.setNombre("Juan");
    usuario1.setDireccion("Calle A");
    usuario1.setContacto(123456789);
    usuario1.setEdad(19);

    std::cout << "Datos del usuario:" << std::endl;
    std::cout << "Nombre: " << usuario1.getNombre() << std::endl;
    std::cout << "Dirección: " << usuario1.getDireccion() << std::endl;
    std::cout << "Contacto: " << usuario1.getContacto() << std::endl;
    std::cout << "Edad: " << usuario1.getEdad() << std::endl;

    usuario1.registrar_usuario();
    usuario1.registrar_cita();
    usuario1.registrar_papeles_oficiales();

    return 0;
}
