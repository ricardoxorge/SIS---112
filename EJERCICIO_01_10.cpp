// Materia: Programación I, Paralelo 4
// Autor: Ricardo Jorge Flores Vargas
// Fecha creación: 15/08/2024
// Número de ejercicio: 10
// Problema planteado: Cantidad de digitos en un numero entero

#include <iostream>
using namespace std;

int main() {
    int numero;
    int contador = 0;
    cout << "Ingresa un número entero: ";
    cin >> numero;
    if (numero < 0) {
        numero = -numero;
    }
    if (numero == 0) {
        contador = 1;
    } else {
        while (numero > 0) {
            numero /= 10; 
            contador++;
        }
    }

    cout << "El número tiene " << contador << " dígitos." << endl;

    return 0;
}
