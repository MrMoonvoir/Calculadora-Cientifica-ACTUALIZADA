#include <iostream>
#include <thread>
#include <chrono>
#include "Calculadora.h"
#include "Operacion.h"

using namespace std;

void menu() {
    cout << "\n\n=== Calculadora Cientifica ===\n";
    cout << "Menu:\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "5. Raiz cuadrada\n";
    cout << "6. Potencia\n";
    cout << "7. Logaritmo natural\n";
    cout << "8. Seno\n";
    cout << "9. Coseno\n";
    cout << "10. Tangente\n";
    cout << "11. Arcoseno\n";
    cout << "12. Arcocoseno\n";
    cout << "13. Arcotangente\n";
    cout << "14. Exponencial\n";
    cout << "15. Logaritmo base 10\n";
    cout << "16. Valor absoluto\n";
    cout << "17. Factorial\n";
    cout << "18. Salir\n";
}

int main() {
    Calculadora calc;
    int opcion;
    double a, b;

    Suma suma;
    Resta resta;
    Multiplicacion mult;
    Division div;
    RaizCuadrada raiz;
    Potencia pot;
    Logaritmo logn;
    Seno seno;
    Coseno coseno;
    Tangente tang;
    Arcoseno arcsin;
    Arcocoseno arccos;
    Arcotangente arctan;
    Exponencial expn;
    LogaritmoBase10 log10n;
    ValorAbsoluto absval;
    Factorial fact;

    do {
        menu();
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: case 2: case 3: case 4: case 6:
                cout << "\nIngrese dos numeros:\n";
                cout << "a => "; cin >> a;
                cout << "b => "; cin >> b;
                break;
            case 5: case 7: case 8: case 9: case 10:
            case 11: case 12: case 13: case 14:
            case 15: case 16: case 17:
                cout << "\nIngrese un numero:\n";
                cout << "a => "; cin >> a;
                break;
        }

        switch (opcion) {
            case 1:
                cout << "Resultado: " << calc.ejecutarOperacion(&suma, a, b) << "\n"; break;
            case 2:
                cout << "Resultado: " << calc.ejecutarOperacion(&resta, a, b) << "\n"; break;
            case 3:
                cout << "Resultado: " << calc.ejecutarOperacion(&mult, a, b) << "\n"; break;
            case 4:
                cout << "Resultado: " << calc.ejecutarOperacion(&div, a, b) << "\n"; break;
            case 5:
                cout << "Resultado: " << calc.ejecutarOperacion(&raiz, a) << "\n"; break;
            case 6:
                cout << "Resultado: " << calc.ejecutarOperacion(&pot, a, b) << "\n"; break;
            case 7:
                cout << "Resultado: " << calc.ejecutarOperacion(&logn, a) << "\n"; break;
            case 8:
                cout << "Resultado: " << calc.ejecutarOperacion(&seno, a) << "\n"; break;
            case 9:
                cout << "Resultado: " << calc.ejecutarOperacion(&coseno, a) << "\n"; break;
            case 10:
                cout << "Resultado: " << calc.ejecutarOperacion(&tang, a) << "\n"; break;
            case 11:
                cout << "Resultado: " << calc.ejecutarOperacion(&arcsin, a) << "\n"; break;
            case 12:
                cout << "Resultado: " << calc.ejecutarOperacion(&arccos, a) << "\n"; break;
            case 13:
                cout << "Resultado: " << calc.ejecutarOperacion(&arctan, a) << "\n"; break;
            case 14:
                cout << "Resultado: " << calc.ejecutarOperacion(&expn, a) << "\n"; break;
            case 15:
                cout << "Resultado: " << calc.ejecutarOperacion(&log10n, a) << "\n"; break;
            case 16:
                cout << "Resultado: " << calc.ejecutarOperacion(&absval, a) << "\n"; break;
            case 17:
                cout << "Resultado: " << calc.ejecutarOperacion(&fact, a) << "\n"; break;
            case 18:
                cout << "Cerrando programa...\n";
                std::this_thread::sleep_for(std::chrono::seconds(2));
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo.\n";
        }

    } while (opcion != 18);

    return 0;
}
