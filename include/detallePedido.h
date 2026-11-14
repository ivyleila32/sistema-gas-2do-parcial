#ifndef DETALLEPEDIDO_H
#define DETALLEPEDIDO_H

#include "Articulo.h"

class DetallePedido {
private:
    Articulo* articulo; 
    int cantidad;

public:
    DetallePedido(Articulo* articulo, int cantidad);
    ~DetallePedido();

    double calcularSubtotal() const;
    void mostrarLinea() const;
    Articulo* getArticulo() const;
    int getCantidad() const;
};

#endif