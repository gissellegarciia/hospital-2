// Sesión 6-7: Programación orientada a objetos - Definición de clase
#pragma once 
#include <string>  // usar cadena de texto
#include <vector> // guardar historial médico




// Definimos paciente, un molde que define como será cada paciente en el sistema
  // Sesión 6: Encapsulamiento - Atributos privados
class Paciente {
private:
    // Atributos correspondientes
    std::string nombre; 
    std::string id;
    std::string fechaNacimiento;


    // Sesión 3: Uso de vectores para el historial médico -  Guarda una lista con los registros médicos del paciente.
    std::vector<std::string> historialMedico; 





    // Sesión 6: Constructor y métodos públicos
public:
    
    Paciente(const std::string& nombre, const std::string& id, const std::string& fechaNac);





    // Sesión 6: Métodos de acceso (getters)
    std::string getNombre() const;
    std::string getId() const;
    std::string getFechaNacimiento() const;
   //Permiten consultar los datos del paciente sin modificar nada.
   // La palabra clave `const` al final indica que estas funciones NO pueden cambiar los datos de la clase.





    // Sesión 3 y 6: Gestión del historial médico
    void agregarRegistroMedico(const std::string& registro);
    // Permite agregar un nuevo registro al historial del paciente.
    // Recibe un `std::string` con el nuevo registro médico y lo añade al `vector historialMedico`.



    const std::vector<std::string>& getHistorialMedico() const;
};
// Permite obtener la lista completa del historial médico de un paciente.
//  Devuelve un vector de cadenas con todos los registros.