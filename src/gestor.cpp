#include "Gestor.h"
#include <iostream>

Gestor::Gestor(int capA, int capC, int capE, int capP)
    : cantArticulos(0), capArticulos(capA),
      cantClientes(0), capClientes(capC),
      cantEmpleados(0), capEmpleados(capE),
      cantPedidos(0), capPedidos(capP) {

    
    catalogo  = new Articulo*[capArticulos];
    clientes  = new Cliente*[capClientes];
    empleados = new Empleado*[capEmpleados];
    pedidos   = new Pedido*[capPedidos];

    for (int i = 0; i < capArticulos; ++i) catalogo[i] = nullptr;
    for (int i = 0; i < capClientes; ++i)  clientes[i] = nullptr;
    for (int i = 0; i < capEmpleados; ++i) empleados[i] = nullptr;
    for (int i = 0; i < capPedidos; ++i)   pedidos[i] = nullptr;
}

Gestor::~Gestor() {
    
    for (int i = 0; i < cantPedidos; ++i) delete pedidos[i];
    delete[] pedidos;

    for (int i = 0; i < cantEmpleados; ++i) delete empleados[i];
    delete[] empleados;

    for (int i = 0; i < cantClientes; ++i) delete clientes[i];
    delete[] clientes;

    for (int i = 0; i < cantArticulos; ++i) delete catalogo[i];
    delete[] catalogo;
}

void Gestor::cargarArticulos() {
    catalogo[cantArticulos++] = new Garrafa(101, "Garrafa Comercial", 14500.0, 10.0);
    catalogo[cantArticulos++] = new Garrafa(102, "Garrafa Familiar", 21500.0, 15.0);
    catalogo[cantArticulos++] = new Garrafa(103, "Cilindro Industrial", 58000.0, 45.0);
    catalogo[cantArticulos++] = new Accesorio(201, "Regulador con Manometro", 12300.0, "Gas Envasado");
}

void Gestor::cargarClientes() {
    clientes[cantClientes++] = new Cliente(1, "Distribuidora San Martin", "223-4559871", "Av. Constitucion 5500");
    clientes[cantClientes++] = new Cliente(2, "Valeria Morales", "223-6112233", "Calle Alvarado 3120");
}

void Gestor::cargarEmpleados() {
    empleados[cantEmpleados++] = new Empleado(10, "Esteban Gomez", "223-5001122", 501, "Operador de Despacho");
    empleados[cantEmpleados++] = new Empleado(11, "Lucia Benitez", "223-5887744", 502, "Ventas de Mostrador");
}

void Gestor::cargarPedidos() {
   
    pedidos[0] = new Pedido(7001, clientes[0], empleados[0]);
    pedidos[0]->agregarArticulo(catalogo[1], 4);
    pedidos[0]->agregarArticulo(catalogo[2], 2);
    cantPedidos++;

    
    pedidos[1] = new Pedido(7002, clientes[1], empleados[1]);
    pedidos[1]->agregarArticulo(catalogo[0], 1);
    pedidos[1]->agregarArticulo(catalogo[3], 1);
    cantPedidos++;
}

void Gestor::mostrarPedidos() const {
    std::cout << "\n>>> LISTADO DE PEDIDOS REGISTRADOS - DISTRIBUIDORA DE GAS <<<\n";
    for (int i = 0; i < cantPedidos; ++i) {
        pedidos[i]->mostrarPedido();
    }
}

void Gestor::iniciarSistema() {
    cargarArticulos();
    cargarClientes();
    cargarEmpleados();
    cargarPedidos();
    mostrarPedidos();
}