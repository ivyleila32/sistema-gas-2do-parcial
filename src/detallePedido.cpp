#include "DetallePedido.h"
#include <iostream>
#include <iomanip>

DetallePedido::DetallePedido(Articulo* articulo, int cantidad)
    : articulo(articulo), cantidad(cantidad) {}

DetallePedido::~DetallePedido() {
    articulo = nullptr; 
}

double DetallePedido::calcularSubtotal() const {
    return (articulo != nullptr) ? (articulo->getPrecio() * cantidad) : 0.0;
}

void DetallePedido::mostrarLinea() const {
    if (articulo != nullptr) {
        std::cout << "    * ";
        articulo->mostrarDetalle();
        std::cout << " x " << cantidad 
                  << " Unidades -> Subtotal: $" 
                  << std::fixed << std::setprecision(2) << calcularSubtotal() << "\n";
    }
}

Articulo* DetallePedido::getArticulo() const {
    return articulo;
}

int DetallePedido::getCantidad() const {
    return cantidad;
}