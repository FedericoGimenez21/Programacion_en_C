#include <stdio.h>
// Alumno: Federico Gimenez

void main() {
    // Declaracion de variables
    char name[] = "Juan";    // Nombre como cadena de caracteres
    int age = 25;             // Edad como entero
    int year_bday = 1999; // Año de nacimiento como entero
    float size = 1.75;     // Estatura en metros como num de punto flotante

    // Imprimir los datos
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Year of birthday: %d\n", year_bday);
    printf("Size: %.2f meters\n", size);

    return;
}