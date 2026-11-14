#include "Persona.h"

Persona::Persona(int id, const std::string& nombre, const std::string& telefono)
    : id(id), nombre(nombre), telefono(telefono) {}

Persona::~Persona() {}

int Persona::getId() const {
    return id;
}

std::string Persona::getNombre() const {
    return nombre;
}

std::string Persona::getTelefono() const {
    return telefono;
}