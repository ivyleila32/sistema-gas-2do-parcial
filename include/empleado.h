#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Persona.h"

class Empleado : public Persona {
private:
    int legajo;
    std::string cargo;

public:
    Empleado(int id, const std::string& nombre, const std::string& telefono, int legajo, const std::string& cargo);
    ~Empleado() override;

    int getLegajo() const;
    std::string getCargo() const;
    void mostrarInfo() const override;
};

#endif