#ifndef CLIENTE_H
#define CLIENTE_H

#include "Persona.h"

class Cliente : public Persona {
private:
    std::string direccionEntrega;

public:
    Cliente(int id, const std::string& nombre, const std::string& telefono, const std::string& direccionEntrega);
    ~Cliente() override;

    std::string getDireccion() const;
    void mostrarInfo() const override;
};

#endif