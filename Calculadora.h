#ifndef CALCULADORA_H
#define CALCULADORA_H
#include "Operacion.h"

class Calculadora {
private:
    double ultimoResultado;

public:
    Calculadora() : ultimoResultado(0.0) {}

    double ejecutarOperacion(Operacion* op, double a, double b = 0) {
        ultimoResultado = op->calcular(a, b);
        return ultimoResultado;
    }

    double getUltimoResultado() const {
        return ultimoResultado;
    }
};

#endif // CALCULADORA_H
