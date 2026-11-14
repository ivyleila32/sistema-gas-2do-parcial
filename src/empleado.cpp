#include "Empleado.h"
#include <iostream>

Empleado::Empleado(int id, const std::string& nombre, const std::string& telefono, int legajo, const std::string& cargo)
    : Persona(id, nombre, telefono), legajo(legajo), cargo(cargo) {}

Empleado::~Empleado() {}

int Empleado::getLegajo() const {
    return legajo;
}

std::string Empleado::getCargo() const {
    return cargo;
}

void Empleado::mostrarInfo() const {
    std::cout << "Empleado Legajo [" << legajo << "]: " << nombre 
              << " | Cargo: " << cargo << "\n";
}