#include "Garrafa.h"
#include <iostream>
#include <iomanip>

Garrafa::Garrafa(int id, const std::string& nombre, double precio, double capacidadKg)
    : Articulo(id, nombre, precio), capacidadKg(capacidadKg) {}

Garrafa::~Garrafa() {}

double Garrafa::getCapacidadKg() const {
    return capacidadKg;
}

void Garrafa::mostrarDetalle() const {
    std::cout << "[Garrafa #" << id << "] " << nombre 
              << " (" << capacidadKg << " Kg) | Precio: $" 
              << std::fixed << std::setprecision(2) << getPrecio();
}