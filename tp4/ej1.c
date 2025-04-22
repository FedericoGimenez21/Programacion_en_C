#include <stdio.h>

// Alumno: Federico Gimenez

char indicator(int n);

void main() {
	int n;
	printf("Introduzca un numero entero: ");
	if (scanf("%d", &n) != 1){
		printf("Entrada invalida");
		return;	
	}
	
	char c = indicator(n);
	
	printf("Salida: %c", c);
	return;

}

char indicator(int n){
	char c;
	if (n==0){
		c = 'C';
	}else if (n<0){
		c ='N';
	}else{
		c = 'P';
	}
	
	return c;
}
