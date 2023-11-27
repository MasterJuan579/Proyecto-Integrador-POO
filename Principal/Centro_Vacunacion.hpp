#ifndef CENTRO_VACUNACION_HPP
#define CENTRO_VACUNACION_HPP

#include <string>

class CentroVacunacion {
private:
    std::string nombre;
    std::string ubicacion;
    int capacidad;
    // Puedes agregar más atributos según tus necesidades

public:
    // Constructor
    CentroVacunacion();

    // Métodos de acceso
    std::string getNombre();
    std::string getUbicacion();
    int getCapacidad();

    // Métodos de modificación
    void setNombre(std::string);
    void setUbicacion(std::string);
    void setCapacidad(int);

    // Otros métodos que podrían ser útiles
    void registrarCentroVacunacion();
    void mostrarInformacion();
};

#endif
