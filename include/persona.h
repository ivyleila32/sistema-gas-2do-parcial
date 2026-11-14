#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona {
protected:
    int id;
    std::string nombre;
    std::string telefono;

public:
    Persona(int id, const std::string& nombre, const std::string& telefono);
    virtual ~Persona();

    int getId() const;
    std::string getNombre() const;
    std::string getTelefono() const;
    virtual void mostrarInfo() const = 0;
};

#endif