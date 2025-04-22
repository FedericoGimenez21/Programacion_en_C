#include <stdio.h>

// Alumno: Federico Gimenez
int main() {
    int count = 0;

    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            for (int k = 1; k <= 6; k++) {
                if (i + j + k == 10) {
                    count++;
                }
            }
        }
    }

    printf("Numero de formas de obtener un 10: %d\n", count);

    // Calculando la probabilidad
    int total_outcomes = 6 * 6 * 6;  // Total de posibles resultados al lanzar 3 dados
    double probability = (double)count / total_outcomes;
    printf("Probabilidad de obtener un 10: %.4f\n", probability);

    return 0;
}