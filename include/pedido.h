#ifndef PEDIDO_H
#define PEDIDO_H

#include "Cliente.h"
#include "Empleado.h"
#include "DetallePedido.h"

class Pedido {
private:
    int idPedido;
    Cliente* cliente;         
    Empleado* empleado;       
    DetallePedido** detalles; 
    int cantItems;
    int capItems;

public:
    Pedido(int idPedido, Cliente* cliente, Empleado* empleado, int capacidad = 10);
    ~Pedido();

    bool agregarArticulo(Articulo* art, int cantidad);
    double calcularTotal() const;
    void mostrarPedido() const;
    int getIdPedido() const;
};

#endif