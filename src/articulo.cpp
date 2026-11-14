#include "Articulo.h"
#include <iostream>
#include <iomanip>

Articulo::Articulo(int id, const std::string& nombre, double precioUnitario)
    : id(id), nombre(nombre), precioUnitario(precioUnitario) {}

Articulo::~Articulo() {}

int Articulo::getId() const {
    return id;
}

std::string Articulo::getNombre() const {
    return nombre;
}

double Articulo::getPrecio() const {
    return precioUnitario;
}

void Articulo::mostrarDetalle() const {
    std::cout << "[Articulo #" << id << "] " << nombre 
              << " | Precio: $" << std::fixed << std::setprecision(2) << getPrecio();
}