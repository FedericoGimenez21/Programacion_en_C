#include <stdio.h>
#include <math.h>
// Alumno: Federico Gimenez

void main() {
    float grados, radianes;
    

    // Solicitar al usuario que ingrese los grados
    printf("Ingrese el valor en grados: ");
    scanf("%f", &grados);

    // Convertir grados a radianes
    radianes = grados * (M_PI / 180);

    // Imprimir el resultado
    printf("%f grados = %f radianes\n", grados, radianes);

    
}
