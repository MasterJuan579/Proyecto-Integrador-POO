#ifndef IMPRESORA_HPP
#define IMPRESORA_HPP

#include <string>

class Impresora {
private:
    std::string nombre;
    std::string vacuna_aplicada;
    int fecha_aplicacion;

public:
    Impresora();
    void registrar_vacunacion();
    void registrar_efectos_secundarios();
    void imprimir_certificado();
};

#endif

