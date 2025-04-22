#include <stdio.h>
#include <math.h>

// Alumno: Federico Gimenez

void main() {

    double radio1 = 5.0;    // Radio de la esfera 1 en cm
    double radio2 = 12.5;   // Radio de la esfera 2 en cm
    double volumen1, volumen2, diferencia;

    // calculo de volumenes
    volumen1 = (4.0 / 3.0) * M_PI * pow(radio1, 3);
    volumen2 = (4.0 / 3.0) * M_PI * pow(radio2, 3);

    
    diferencia = volumen2 - volumen1;

    // Imprimir el resultado
    printf("El volumen de la esfera 1 es: %.2f cm^3\n", volumen1);
    printf("El volumen de la esfera 2 es: %.2f cm^3\n", volumen2);
    printf("La diferencia de volumen entre las dos esferas es: %.2f cm^3\n", diferencia);

    
}