// Sesi�n 6-7: Programaci�n orientada a objetos - Definici�n de clase
#pragma once 
#include <string>  // usar cadena de texto
#include <vector> // guardar historial m�dico




// Definimos paciente, un molde que define como ser� cada paciente en el sistema
  // Sesi�n 6: Encapsulamiento - Atributos privados
class Paciente {
private:
    // Atributos correspondientes
    std::string nombre; 
    std::string id;
    std::string fechaNacimiento;


    // Sesi�n 3: Uso de vectores para el historial m�dico -  Guarda una lista con los registros m�dicos del paciente.
    std::vector<std::string> historialMedico; 





    // Sesi�n 6: Constructor y m�todos p�blicos
public:
    
    Paciente(const std::string& nombre, const std::string& id, const std::string& fechaNac);





    // Sesi�n 6: M�todos de acceso (getters)
    std::string getNombre() const;
    std::string getId() const;
    std::string getFechaNacimiento() const;
   //Permiten consultar los datos del paciente sin modificar nada.
   // La palabra clave `const` al final indica que estas funciones NO pueden cambiar los datos de la clase.





    // Sesi�n 3 y 6: Gesti�n del historial m�dico
    void agregarRegistroMedico(const std::string& registro);
    // Permite agregar un nuevo registro al historial del paciente.
    // Recibe un `std::string` con el nuevo registro m�dico y lo a�ade al `vector historialMedico`.



    const std::vector<std::string>& getHistorialMedico() const;
};
// Permite obtener la lista completa del historial m�dico de un paciente.
//  Devuelve un vector de cadenas con todos los registros.