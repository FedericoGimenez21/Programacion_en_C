#include <stdio.h>


// Alumno: Federico Gimenez
int getMax(int num1, int num2){
	
	return ( (num1>num2) ? num1 : num2 );
}

void main(){
	
	int num1, num2;
	printf("Ingrese los 2 numeros a comparar: ");
    if ( (scanf("%d %d", &num1, &num2)) != 2){
    	printf("Entrada invalida\n");
    	return;
	}
	int max = getMax(num1, num2);
	printf("Numero mayor: %d", max);
}