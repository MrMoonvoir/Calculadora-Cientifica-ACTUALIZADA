#include <iostream>
#include <cstdlib>
#include <cmath>
#include <thread>
#include <chrono>
#include "Calculadora.h"

using namespace std;

void menu(){

    cout << "=== Calculadora Cientifica ===\n";
    cout << "Menu:\n";
    cout << "1. Suma. \n";
    cout << "2. Resta. \n";
    cout << "3. Multiplicación. \n";
    cout << "4. División. \n";
    cout << "5. Raíz cuadrada\n";
    cout << "6. Potencia\n";
    cout << "7. Logaritmo natural\n";
    cout << "8. Salir \n";
}

int main() {
    Calculadora cientifica;
    int opcion;
    double a, b;

    do {
        menu();
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 6:
                cout << "Ingrese dos números:\n";
                cout << "a => ";
                cin >> a;
                cout << "b => ";
                cin >> b;
                break;
            case 5:
            case 7:
                cout << "Ingrese un número:\n";
                cout << "a => ";
                cin >> a;
                break;
        }

        switch (opcion) {
            case 1:
                cout << "Resultado: " << cientifica.suma(a, b) << "\n";
                break;
            case 2:
                cout << "Resultado: " << cientifica.resta(a, b) << "\n";
                break;
            case 3:
                cout << "Resultado: " << cientifica.multiplicacion(a, b) << "\n";
                break;
            case 4:
                cout << "Resultado: " << cientifica.division(a, b) << "\n";
                break;
            case 5:
                cout << "Resultado: " << cientifica.raizCuadrada(a) << "\n";
                break;
            case 6:
                cout << "Resultado: " << cientifica.potencia(a, b) << "\n";
                break;
            case 7:
                cout << "Resultado: " << cientifica.logaritmo(a) << "\n";
                break;
                
            case 8:
                cout << "Cerrando programa...\n";
                std::this_thread::sleep_for(std::chrono::seconds(3));
                break;
            default:
                cout << "Opción inválida. Intente de nuevo.\n";
        }

    } while (opcion != 8);

    return 0;
}
