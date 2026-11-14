#ifndef GARRAFA_H
#define GARRAFA_H

#include "Articulo.h"

class Garrafa : public Articulo {
private:
    double capacidadKg;

public:
    Garrafa(int id, const std::string& nombre, double precio, double capacidadKg);
    ~Garrafa() override;

    double getCapacidadKg() const;
    void mostrarDetalle() const override;
};

#endif