#ifndef REGISTRO_VACUNACION_HPP
#define REGISTRO_VACUNACION_HPP

#include <string>
#include <iostream>
#include <fstream>

class Registro_Vacunacion {
private:
    std::string fecha_registro;
    std::string nombre;
    std::string nombre_vacuna;
    std::string centro_vacunacion;

public:
    Registro_Vacunacion();
    std::string getFecha_registro() const;
    std::string getNombre() const;
    std::string getNombre_vacuna() const;
    std::string getCentro_vacunacion() const;
    void guardarUsuario();
    void mostrarInformacion() const;
};

#endif

