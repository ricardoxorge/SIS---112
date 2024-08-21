// Materia: Programación I, Paralelo 4
// Autor: Ricardo Jorge Flores Vargas
// Fecha creación: 15/08/2024
// Número de ejercicio: 13
// Problema planteado: leer un número entero y mostrarlo con las cifras al revés


#include <iostream>
using namespace std;

int main() {
    int numero,residuo;
    int invertido = 0;

    cout << "Ingresa un número entero: ";
    cin >> numero;
    int signo = 1;
    if (numero < 0) {
        signo = -1;
        numero = -numero;  
    }

    while (numero != 0) {
        residuo = numero % 10;         
        invertido = invertido * 10 + residuo;  
        numero /= 10;               
    }

    invertido *= signo;  

    cout << "El número con las cifras al revés es: " << invertido << endl;

    return 0;
}
