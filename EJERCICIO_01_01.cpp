// Materia: Programación I, Paralelo 4
// Autor: Ricardo Flores Vargas
// Fecha creación: 21/08/24
// Número de ejercicio: 1
// Problema planteado: Área de un triángulo.


#include <iostream>
using namespace std;


int main()
{
    float base, altura, area;

    // Ingrese los datos de la base y la altura
    cout << "La base del trinagulo es : ";
    cin >> base;
    cout << "La altura del triangulo es : ";
    cin >> altura;
    area = (base * altura) / 2;
    cout << "El área del triángulo es: " << area << endl;
    

    return 0;
}