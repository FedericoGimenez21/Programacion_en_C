#include <stdio.h>
// Alumno: Federico Gimenez

void main() {
    // Declaracion de variables
    float a = 5.0, b = 3.0, c = 4.0, d = 2.0;
    float x = 6.0, y = 2.0, z = 1.0, m = 7.0, n = 8.0;

    // Expresiones
    float expr_a = (x / y) + 1;
    float expr_b = (x + y) / (x - y);
    float expr_c = (x + (y / z)) / (x + (y / z));
    float expr_d = b / (c + d);
    float expr_e = (a + b) * (c / d);
    float expr_f = ((a + b) * (a + b)) * ((a + b) * (a + b));
    float expr_g = (x + y) / (1 - 4 * x);
    float expr_h = (x * y) / (m * n);
    float expr_i = ((x + y) * (x + y)) * (a - b);

    // Imprimir resultados
    printf("a) x/y + 1 = %f\n", expr_a);
    printf("b) (x + y) / (x - y) = %f\n", expr_b);
    printf("c) (x + y/z) / (x + y/z) = %f\n", expr_c);
    printf("d) b / (c + d) = %f\n", expr_d);
    printf("e) (a + b) * (c/d) = %f\n", expr_e);
    printf("f) [(a + b)^2]^2 = %f\n", expr_f);
    printf("g) (x + y) / (1 - 4x) = %f\n", expr_g);
    printf("h) (xy) / (mn) = %f\n", expr_h);
    printf("i) (x + y)^2 * (a - b) = %f\n", expr_i);

    return;
}
