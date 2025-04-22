#include <stdio.h>

// Alumno: Federico Gimenez
int main() {
	int n;
	printf("Introduzca un numero entero: ");
	scanf("%d", &n);
	
	if (n>0){
		printf("El numero ingresado es positivo.\n");
		
	}else if (n<0){
		printf("El numero ingresado es negativo.\n");
	}
	else{
		printf("El numero ingresado es cero.\n");
	}
	
	if (n % 2 == 0) {
        printf("El numero es par.\n");
    } else {
        printf("El numero es impar.\n");
    }
	return 0;

}
