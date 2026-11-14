#include "Gestor.h"

int main() {
   
    Gestor* sistema = new Gestor();
    
    sistema->iniciarSistema();

    delete sistema;

    return 0;
}