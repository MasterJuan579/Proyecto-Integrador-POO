#ifndef VACUNA_HPP
#define VACUNA_HPP
#include <string>

class Vacuna{

private:
    std::string nombre_vacuna;
    int lote;
    int cantidad;
    std::string vencimiento;
public:
    Vacuna();
    Vacuna( std::string nombre_vacuna, int lote,int cantidad, std::string vencimiento);

    std::string getNombre_vacuna();
    int getLote();
    int getCantidad();
    std::string getVencimiento();

    void setNombre_Vacuna(std::string);
    void setLote(int);
    void setCantidad(int);
    void setVencimiento(std::string);
    

    void registrar_nueva_vacuna();
    void reportar_efectividad();


};

#endif