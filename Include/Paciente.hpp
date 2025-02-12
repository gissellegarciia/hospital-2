// Sesión 6-7: Programación orientada a objetos I y II - Definición de clase
#pragma once
#include <string>
#include <vector>

class Paciente {
private:
    // Sesión 6: Encapsulamiento - Atributos privados
    std::string nombre;
    std::string id;
    std::string fechaNacimiento;
    // Sesión 3: Uso de vectores para el historial médico
    std::vector<std::string> historialMedico;

public:
    // Sesión 6: Constructor y métodos públicos
    Paciente(const std::string& nombre, const std::string& id, const std::string& fechaNac);

    // Sesión 6: Métodos de acceso (getters)
    std::string getNombre() const;
    std::string getId() const;
    std::string getFechaNacimiento() const;

    // Sesión 3 y 6: Gestión del historial médico
    void agregarRegistroMedico(const std::string& registro);
    const std::vector<std::string>& getHistorialMedico() const;
};
