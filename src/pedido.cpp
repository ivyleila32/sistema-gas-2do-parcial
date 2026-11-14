#include "Pedido.h"
#include <iostream>
#include <iomanip>

Pedido::Pedido(int idPedido, Cliente* cliente, Empleado* empleado, int capacidad)
    : idPedido(idPedido), cliente(cliente), empleado(empleado), cantItems(0), capItems(capacidad) {
    detalles = new DetallePedido*[capItems];
    for (int i = 0; i < capItems; ++i) {
        detalles[i] = nullptr;
    }
}

Pedido::~Pedido() {
    for (int i = 0; i < cantItems; ++i) {
        delete detalles[i];
        detalles[i] = nullptr;
    }
    delete[] detalles;
    detalles = nullptr;

    cliente = nullptr;  
    empleado = nullptr;
}

bool Pedido::agregarArticulo(Articulo* art, int cantidad) {
    if (art == nullptr || cantidad <= 0 || cantItems >= capItems) {
        return false;
    }
    detalles[cantItems] = new DetallePedido(art, cantidad);
    cantItems++;
    return true;
}

double Pedido::calcularTotal() const {
    double total = 0.0;
    for (int i = 0; i < cantItems; ++i) {
        if (detalles[i] != nullptr) {
            total += detalles[i]->calcularSubtotal();
        }
    }
    return total;
}

int Pedido::getIdPedido() const {
    return idPedido;
}

void Pedido::mostrarPedido() const {
    std::cout << "\n====================================================================\n";
    std::cout << " REGISTRO DE PEDIDO DE GAS NRO: #" << idPedido << "\n";
    std::cout << "--------------------------------------------------------------------\n";
    if (cliente != nullptr) {
        std::cout << " CLIENTE: ";
        cliente->mostrarInfo();
    }
    if (empleado != nullptr) {
        std::cout << " ATENDIDO POR: ";
        empleado->mostrarInfo();
    }
    std::cout << "--------------------------------------------------------------------\n";
    std::cout << " ITEMS SOLICITADOS:\n";
    for (int i = 0; i < cantItems; ++i) {
        detalles[i]->mostrarLinea();
    }
    std::cout << "--------------------------------------------------------------------\n";
    std::cout << " TOTAL A COBRAR: $" << std::fixed << std::setprecision(2) << calcularTotal() << "\n";
    std::cout << "====================================================================\n";
}