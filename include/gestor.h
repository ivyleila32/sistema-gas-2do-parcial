#ifndef GESTOR_H
#define GESTOR_H

#include "Articulo.h"
#include "Garrafa.h"
#include "Accesorio.h"
#include "Cliente.h"
#include "Empleado.h"
#include "Pedido.h"

class Gestor {
private:
    Articulo** catalogo;
    int cantArticulos;
    int capArticulos;

    Cliente** clientes;
    int cantClientes;
    int capClientes;

    Empleado** empleados;
    int cantEmpleados;
    int capEmpleados;

    Pedido** pedidos;
    int cantPedidos;
    int capPedidos;

public:
    Gestor(int capA = 10, int capC = 10, int capE = 10, int capP = 10);
    ~Gestor();

    void cargarArticulos();
    void cargarClientes();
    void cargarEmpleados();
    void cargarPedidos();
    void mostrarPedidos() const;

    // Método principal que llama el main
    void iniciarSistema();
};

#endif