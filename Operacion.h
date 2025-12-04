#ifndef OPERACION_H
#define OPERACION_H
#include <iostream>
#include <cmath>

class Operacion {
public:
    virtual double calcular(double a, double b = 0) = 0;
    virtual ~Operacion() {}
};

class Suma : public Operacion {
public:
    double calcular(double a, double b) override { return a + b; }
};

class Resta : public Operacion {
public:
    double calcular(double a, double b) override { return a - b; }
};

class Multiplicacion : public Operacion {
public:
    double calcular(double a, double b) override { return a * b; }
};

class Division : public Operacion {
public:
    double calcular(double a, double b) override {
        if (b == 0) {
            std::cerr << "Error: División por cero.\n";
            return 0;
        }
        return a / b;
    }
};

class RaizCuadrada : public Operacion {
public:
    double calcular(double a, double b = 0) override {
        if (a < 0) {
            std::cerr << "Error: Raíz cuadrada de número negativo.\n";
            return 0;
        }
        return sqrt(a);
    }
};

class Potencia : public Operacion {
public:
    double calcular(double base, double exponente) override {
        return pow(base, exponente);
    }
};

class Logaritmo : public Operacion {
public:
    double calcular(double a, double b = 0) override {
        if (a <= 0) {
            std::cerr << "Error: Logaritmo de número no positivo.\n";
            return 0;
        }
        return log(a);
    }
};

class Seno : public Operacion {
public:
    double calcular(double a, double b = 0) override {
        return sin(a);
    }
};

class Coseno : public Operacion {
public:
    double calcular(double a, double b = 0) override {
        return cos(a);
    }
};

class Tangente : public Operacion {
public:
    double calcular(double a, double b = 0) override {
        return tan(a);
    }
};

class Arcoseno : public Operacion {
public:
    double calcular(double a, double b = 0) override {
        if (a < -1 || a > 1) {
            std::cerr << "Error: dominio inválido para arcsin.\n";
            return 0;
        }
        return asin(a);
    }
};

class Arcocoseno : public Operacion {
public:
    double calcular(double a, double b = 0) override {
        if (a < -1 || a > 1) {
            std::cerr << "Error: dominio inválido para arccos.\n";
            return 0;
        }
        return acos(a);
    }
};

class Arcotangente : public Operacion {
public:
    double calcular(double a, double b = 0) override {
        return atan(a);
    }
};

class Exponencial : public Operacion {
public:
    double calcular(double a, double b = 0) override {
        return exp(a);
    }
};

class LogaritmoBase10 : public Operacion {
public:
    double calcular(double a, double b = 0) override {
        if (a <= 0) {
            std::cerr << "Error: log10 de número no positivo.\n";
            return 0;
        }
        return log10(a);
    }
};

class ValorAbsoluto : public Operacion {
public:
    double calcular(double a, double b = 0) override {
        return fabs(a);
    }
};

class Factorial : public Operacion {
public:
    double calcular(double a, double b = 0) override {
        if (a < 0) {
            std::cerr << "Error: factorial de número negativo.\n";
            return 0;
        }
        unsigned long long resultado = 1;
        for (int i = 1; i <= (int)a; ++i) {
            resultado *= i;
        }
        return (double)resultado;
    }
};
#endif // OPERACION_H
