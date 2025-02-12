// Sesi�n 6-7: Programaci�n orientada a objetos I y II - Definici�n de clase
#pragma once
#include <string>
#include <vector>

class Paciente {
private:
    // Sesi�n 6: Encapsulamiento - Atributos privados
    std::string nombre;
    std::string id;
    std::string fechaNacimiento;
    // Sesi�n 3: Uso de vectores para el historial m�dico
    std::vector<std::string> historialMedico;

public:
    // Sesi�n 6: Constructor y m�todos p�blicos
    Paciente(const std::string& nombre, const std::string& id, const std::string& fechaNac);

    // Sesi�n 6: M�todos de acceso (getters)
    std::string getNombre() const;
    std::string getId() const;
    std::string getFechaNacimiento() const;

    // Sesi�n 3 y 6: Gesti�n del historial m�dico
    void agregarRegistroMedico(const std::string& registro);
    const std::vector<std::string>& getHistorialMedico() const;
};
