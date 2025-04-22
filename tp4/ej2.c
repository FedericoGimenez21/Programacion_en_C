#include <stdio.h>

// Alumno: Federico Gimenez
int verificadorDivisible(int n1, int n2);

void main() {
    int a, b;
    printf("Ingrese el valor de a: ");
    if ( scanf("%d", &a) != 1){
    	printf("Entrada invalida");
		return;
	}
    printf("Ingrese el valor de b: ");
    if ( scanf("%d", &b) != 1){
    	printf("Entrada invalida");
    	return;
	}

	int resultado = verificadorDivisible(a,b);
	printf("Salida: %d",resultado);
    return;
}

int verificadorDivisible(int n1, int n2){
	
	return ((n1%n2) == 0) ? 1 : 0;  
}