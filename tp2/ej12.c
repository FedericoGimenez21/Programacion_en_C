#include <stdio.h>
// Alumno: Federico Gimenez

void main() {
    // Declaracion de variables
    float a, b, c, d, e, f;
    float x, y;
    float denominator;

    // Solicitar al usuario que ingrese los coeficientes
    printf("Ingrese los coeficientes a, b, c, d, e, f:\n");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    // Calcular el denominador
    denominator = (a * e) - (b * d);

    // Verificar si el sistema tiene solución única
    if (denominator != 0) {
        // Calcular x e y usando las fórmulas dadas
        x = (c * e - b * f) / denominator;
        y = (a * f - c * d) / denominator;

        // Imprimir los resultados
        printf("El valor de x es: %.2f\n", x);
        printf("El valor de y es: %.2f\n", y);
    } else {
        printf("El sistema no tiene solucion única (el denominador es cero).\n");
    }

}
