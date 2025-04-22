#include <stdio.h>
// Alumno: Federico Gimenez

void main() {
    // Declaracion de variables
    double m1, m2, d, F;
    const double G = 6.673e-8; // Constante de gravitación universal en cm^3/g.s^2

    // Solicitar al usuario que ingrese las masas y la distancia
    printf("Ingrese la masa del primer objeto (en gramos): ");
    scanf("%lf", &m1);
    
    printf("Ingrese la masa del segundo objeto (en gramos): ");
    scanf("%lf", &m2);
    
    printf("Ingrese la distancia entre los dos objetos (en centimetros): ");
    scanf("%lf", &d);

    // Calcular la fuerza gravitacional
    F = (G * m1 * m2) / (d * d);

    // Imprimir el resultado
    printf("La fuerza de atraccion gravitacional es: %e\n", F);

}
