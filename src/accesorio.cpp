#include "Accesorio.h"
#include <iostream>
#include <iomanip>

Accesorio::Accesorio(int id, const std::string& nombre, double precio, const std::string& tipo)
    : Articulo(id, nombre, precio), tipo(tipo) {}

Accesorio::~Accesorio() {}

std::string Accesorio::getTipo() const {
    return tipo;
}

void Accesorio::mostrarDetalle() const {
    std::cout << "[Accesorio #" << id << "] " << nombre 
              << " (" << tipo << ") | Precio: $" 
              << std::fixed << std::setprecision(2) << getPrecio();
}