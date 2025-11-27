#ifndef CALCULADORA.H
#define CALCULADORA.H

#include <string>
#include <iostream>
#include <cmath>

class Calculadora {
private:
    double ultimoResultado;

public:
    Calculadora() : ultimoResultado(0.0) {}

    double getUltimoResultado() const {
        return ultimoResultado;
    }

    void setUltimoResultado(double valor) {
        ultimoResultado = valor;
    }

    double suma(double a, double b) {
        ultimoResultado = a + b;
        return ultimoResultado;
    }

    double resta(double a, double b) {
        ultimoResultado = a - b;
        return ultimoResultado;
    }

    double multiplicacion(double a, double b) {
        ultimoResultado = a * b;
        return ultimoResultado;
    }

    double division(double a, double b) {
        if (b == 0) {
            std::cerr << "Error: División por cero.\n";
            ultimoResultado = 0;
        } else {
            ultimoResultado = a / b;
        }
        return ultimoResultado;
    }
    double raizCuadrada(double a) {
        if (a < 0) {
            std::cerr << "Error: Raíz cuadrada de número negativo.\n";
            ultimoResultado = 0;
        } else {
            ultimoResultado = sqrt(a);
        }
        return ultimoResultado;
    }

    double potencia(double base, double exponente) {
        ultimoResultado = pow(base, exponente);
        return ultimoResultado;
    }

    double logaritmo(double a) {
        if (a <= 0) {
            std::cerr << "Error: Logaritmo de número no positivo.\n";
            ultimoResultado = 0;
        } else {
            ultimoResultado = log(a);
        }
        return ultimoResultado;
    }
};

#endif // CALCULADORA_H
