#ifndef VACUNA_HPP
#define VACUNA_HPP
#include <string>

class Vacuna{

public:
    std::string nombre_vacuna;
    int lote;
    std::string vencimiento;
private:
    Vacuna();
    Vacuna( std::string nombre_vacuna, int lote, std::string vencimiento);

    std::string getNombre_vacuna();
    int getLote();
    std::string getVencimiento();

    void registrar_nueva_vacuna(std::string);
    void verificar_vencimiento(int);
    void reportar_efectividad(std::string);


};

#endif