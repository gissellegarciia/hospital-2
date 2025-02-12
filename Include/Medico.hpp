// Sesión 6-7: Programación orientada a objetos I y II - Definición de clase
#pragma once
#include <string>

class Medico {
private:
    // Sesión 6: Encapsulamiento - Atributos privados
    std::string nombre;
    std::string id;
    std::string especialidad;
    bool disponible;

public:
    // Sesión 6: Constructor y métodos públicos
    Medico(const std::string& nombre, const std::string& id, const std::string& especialidad);

    // Sesión 6: Métodos de acceso (getters)
    std::string getNombre() const;
    std::string getId() const;
    std::string getEspecialidad() const;
    bool estaDisponible() const;

    // Sesión 6: Métodos modificadores (setters)
    void setDisponibilidad(bool estado);
};