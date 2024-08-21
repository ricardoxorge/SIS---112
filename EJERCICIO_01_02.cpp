// Materia: Programación I, Paralelo 4
// Autor: Ricardo Flores Vargas
// Fecha creación: 21/08/24
// Número de ejercicio: 2
// Problema planteado: Volumen de una esfera

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float PI=3.1416;
    float radio,volumen;
    cout<<"Ingrese los datos del radio: ";
    cin>>radio;
    //el volumen de  la esfera
    volumen=(4/3*PI*pow(radio,3));
    cout<<"El volumen de la esfera es : "<<volumen<<"en unidades cubicas";

    return 0;
}

