#include <stdio.h>
// Alumno: Federico Gimenez

void main() {
    int a, b;
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);

    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

	
	/*
	Explicacion: 10 dividido por 2 es 5, y no hay resto, por lo que el operador % devuelve 0
	Division entera (/): El operador de division devuelve solo la parte entera del cociente. No realiza redondeos, simplemente descarta cualquier parte fraccionaria.
	Resto (%): El operador de modulo devuelve el resto de la division entera, y el signo del resto es el mismo que el del numerador (a).
	*/
    return;
}