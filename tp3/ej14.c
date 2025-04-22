#include <stdio.h>

// Alumno: Federico Gimenez
int main() {
    int rows;

    rows=5;

    for (int i = 1; i <= rows; i++) {
        // Imprimir espacios en blanco
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Imprimir asteriscos
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Mover a la siguiente linea
        printf("\n");
    }

    return 0;
}
