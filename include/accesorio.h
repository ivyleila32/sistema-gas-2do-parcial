#ifndef ACCESORIO_H
#define ACCESORIO_H

#include "Articulo.h"

class Accesorio : public Articulo {
private:
    std::string tipo;

public:
    Accesorio(int id, const std::string& nombre, double precio, const std::string& tipo);
    ~Accesorio() override;

    std::string getTipo() const;
    void mostrarDetalle() const override;
};

#endif