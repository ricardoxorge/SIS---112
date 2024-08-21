// Materia: Programación I, Paralelo 4
// Autor: Ricardo Flores Vargas
// Fecha creación: 21/08/24
// Número de ejercicio: 4
// Problema planteado: conversosr de temperatura


#include <iostream>
using namespace std;

int main() {
    float centigrados, kelvin;

    cout << "Ingrese la temperatura en grados centígrados: ";
    cin >> centigrados;

    kelvin = centigrados + 273.15;

    cout << "La temperatura en Kelvin es: " << kelvin << endl;

    return 0;
}