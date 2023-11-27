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
    Usuario(std::string nombre, std:: string direccion, int contacto, int edad);

    std::string getNombre();
    std::string getDireccion();
    int getContacto();
    int getEdad();

    void setNombre(std::string);
    void setDireccion(std::string);
    void setContacto(int);
    void setEdad(int);

    
    void registrar_usuario();
    void registrar_cita();
    void registrar_papeles_oficiales();
};

#endif
