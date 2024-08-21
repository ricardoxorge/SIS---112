// Materia: Programación I, Paralelo 4
// Autor: RIcardo Jorge Flores Vargas
// Fecha creación: 21/08/2024
// Número de ejercicio: 3
// Problema planteado: Promedio de notas.

#include <iostream>
using namespace std;

int main() {
    int num;
    float nota, promedio;
    float suma = 0;
    cout << "Ingrese la cantidad de notas: ";
    cin >> num;
    for (int i = 1; i <= num; ++i) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        suma=suma+nota;
    }
    // Calcular el promedio
    promedio = suma / num;
    cout << "El promedio de las notas es: " << promedio << endl;
    return 0;
}