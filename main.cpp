#include <iostream>
#include <stdexcept>
#include "Calculadora.h"

using namespace std;

int main() {
    Calculadora calc;
    int opcion;
    double a, b;

    cout << "=== Calculadora Cientifica ===\n";

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion == 12) break;

        try {
            switch(opcion) {
                case 1:
                    cout << "Ingrese dos numeros: ";
                    cin >> a >> b;
                    cout << "Resultado: " << calc.suma(a,b) << "\n";
                    break;
                case 2:
                    cout << "Ingrese dos numeros: ";
                    cin >> a >> b;
                    cout << "Resultado: " << calc.resta(a,b) << "\n";
                    break;
                case 3:
                    cout << "Ingrese dos numeros: ";
                    cin >> a >> b;
                    cout << "Resultado: " << calc.multiplicacion(a,b) << "\n";
                    break;
                case 4:
                    cout << "Ingrese dos numeros: ";
                    cin >> a >> b;
                    cout << "Resultado: " << calc.division(a,b) << "\n";
                    break;
                default:
                    cout << "Opcion invalida.\n";
            }
        } catch (invalid_argument& e) {
            cout << e.what() << "\n";
        }
    }

    cout << "Gracias por usar la calculadora.\n";
    return 0;
}
