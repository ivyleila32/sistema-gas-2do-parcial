#ifndef ARTICULO_H
#define ARTICULO_H

#include <string>

class Articulo {
protected:
    int id;
    std::string nombre;
    double precioUnitario;

public:
    Articulo(int id, const std::string& nombre, double precioUnitario);
    virtual ~Articulo();

    int getId() const;
    std::string getNombre() const;
    virtual double getPrecio() const;
    virtual void mostrarDetalle() const;
};

#endif