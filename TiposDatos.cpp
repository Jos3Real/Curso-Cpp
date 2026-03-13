// Tipos de datos básicos en C++

#include <iostream>
using namespace std;

int main () {

    /*
        int x; // Declaración
        x = 5 // Asignación
    */

    // Números Enteros
    int x = 5;
    int y = 6;
    int suma = x + y;
    int edad = 20;
    int año = 2026;
    int dias = 24;

    cout << suma << endl;

    // Números Flotantes y Double

    float precio = 10.90;
    double promedio = 25.36545;
    double temperatura = 36.152;

    cout << promedio << endl;

    // Char

    char calificacion = 'A';
    char inicial = 'j';

    cout << inicial << endl;

    // Booleanos

    bool estudiante = false;
    bool encendido = true;

    cout << encendido << endl;
    cout << estudiante << endl;

    // String o cadenas

    string nombre = "Jose";

    cout << "Hola " << nombre;

    return 0;
}