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
    Impresora(std::string nombre, std::string vacuna_aplicada, int fecha_aplicacion);

    std::string getNombre();
    std::string getVacuna_aplicada();
    int getFecha_aplicacion();

    void setNombre(std::string);
    void setVacuna_aplicada(std::string);
    void setFecha_aplicacion(int);

    void registrar_vacunacion();
    void registrar_efectos_secundarios();
    void imprimir_certificado();
};

#endif