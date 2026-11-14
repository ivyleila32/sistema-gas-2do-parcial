#include "Cliente.h"
#include <iostream>

Cliente::Cliente(int id, const std::string& nombre, const std::string& telefono, const std::string& direccionEntrega)
    : Persona(id, nombre, telefono), direccionEntrega(direccionEntrega) {}

Cliente::~Cliente() {}

std::string Cliente::getDireccion() const {
    return direccionEntrega;
}

void Cliente::mostrarInfo() const {
    std::cout << "Cliente #" << id << ": " << nombre 
              << " | Tel: " << telefono 
              << " | Entrega: " << direccionEntrega << "\n";
}