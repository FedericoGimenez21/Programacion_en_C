#include <stdio.h>
#include <ctype.h>

// Alumno: Federico Gimenez

#define MAX_LENGTH 1000  // Definir una longitud maxima para la entrada



int main() {
    char oracion[MAX_LENGTH];
    int vocales = 0, consonantes = 0, numeros = 0, espacios = 0;

    // Pedir al usuario que ingrese una oracion
    printf("Introduce una oracion: ");
    fgets(oracion, sizeof(oracion), stdin);

    // Analizar cada caracter de la oracion
    for (int i = 0; oracion[i] != '\0'; i++) {
        char c = oracion[i];

        // Contar espacios en blanco
        if (isspace(c)) {
            if (c == ' ') {
                espacios++;
            }
        }
        // Contar numeros
        else if (isdigit(c)) {
            numeros++;
        }
        // Contar vocales
        else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                 c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vocales++;
        }
        // Contar consonantes
        else if (isalpha(c)) {
            consonantes++;
        }
    }

    // Mostrar los resultados
    printf("\nCantidad de vocales: %d\n", vocales);
    printf("Cantidad de consonantes: %d\n", consonantes);
    printf("Cantidad de numeros: %d\n", numeros);
    printf("Cantidad de espacios en blanco: %d\n", espacios);

    return 0;
}
