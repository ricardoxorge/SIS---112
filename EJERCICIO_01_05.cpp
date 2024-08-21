// Materia: Programación I, Paralelo 4
// Autor: RIcardo Jorge Flores Vargas
// Fecha creación: 21/08/2024
// Número de ejercicio: 5
// Problema planteado: numero primo.

#include <iostream>
using namespace std;

int main() {
    int num, i;
    bool esPrimo = true;  
    cout << "Ingrese un número: ";
    cin >> num;
    if (num <= 1) {
        esPrimo = false;
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                esPrimo = false; 
                break; 
            }
        }
    }
    // Mostramos el resultado
    if (esPrimo) {
        cout << num << " es un número primo." << endl;
    } else {
        cout << num << " no es un número primo." << endl;
    }

    return 0;
}
