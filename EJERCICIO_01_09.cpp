// Materia: Programación I, Paralelo 4
// Autor: Ricardo Flores Vargas
// Fecha creación: 21/08/24
// Número de ejercicio: 9
// Problema planteado: 100 primeros numeros primos 


#include <iostream>
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int contador = 0;
    int num = 2;

    cout << "Los primeros 100 números primos son:" << endl;

    while (contador < 100) {
        if (esPrimo(num)) {
            cout << num << " ";
            contador++;
        }
        num++;
    }

    cout << endl;
    return 0;
}
