// Sesi�n 6-7: Programaci�n orientada a objetos I y II - Definici�n de clase
#pragma once
#include <string>

class Medico {
private:
    // Sesi�n 6: Encapsulamiento - Atributos privados
    std::string nombre;
    std::string id;
    std::string especialidad;
    bool disponible;

public:
    // Sesi�n 6: Constructor y m�todos p�blicos
    Medico(const std::string& nombre, const std::string& id, const std::string& especialidad);

    // Sesi�n 6: M�todos de acceso (getters)
    std::string getNombre() const;
    std::string getId() const;
    std::string getEspecialidad() const;
    bool estaDisponible() const;

    // Sesi�n 6: M�todos modificadores (setters)
    void setDisponibilidad(bool estado);
};