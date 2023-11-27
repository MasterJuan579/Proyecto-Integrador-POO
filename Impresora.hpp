#ifndef IMPRESORA_HPP
#define IMPRESORA_HPP

#include "Usuario.hpp"

#include <string>

class Impresora {
private:
    Usuario listaUsuario;
    std::string vacuna_aplicada;
    int fecha_aplicacion;

public:
    // Constructor por defecto
    Impresora();

    // Métodos de la clase
    void registrar_vacunacion();
    void registrar_efectos_secundarios();
    void imprimir_certificado();
};

#endif
