#ifndef USUARIO_HPP
#define USUARIO_HPP

#include <string>

class Usuario {
private:
    std::string nombre;
    std::string direccion;
    int contacto;
    int edad;

public:
    Usuario();
    void registrar_usuario();
    void registrar_cita();
    void registrar_papeles_oficiales();
};

#endif
