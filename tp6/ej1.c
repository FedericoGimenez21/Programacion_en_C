#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Alumno: Federico Gimenez
void compare(int *a1, int *a2, int *a3){
	int max= (*a1>=*a2&&*a1>=*a3)?*a1:(*a2>=*a1&&*a2>=*a3)?*a2:*a3;
	int min = (*a1<=*a2&&*a1<=*a3)?*a1:(*a2<=*a1&&*a2<=*a3)?*a2:*a3;

	*a1 = max;
	*a3 = min;
}

void main(){
	
	srand(time(NULL));
	int a1,a2,a3;
	
	a1 = rand() % 100; //random number desde 0 a 100
	a2 = rand() % 100;
	a3 = rand() % 100;
	
	printf("Antes de llamar a la funcion\n");
	printf("Valor de a1: %d\n", a1);
	printf("Valor de a2: %d\n", a2);
	printf("Valor de a3: %d\n", a3);

	compare(&a1, &a2, &a3);
	
	printf("Despues de llamar a la funcion\n");
	printf("Valor de a1: %d\n", a1);
	printf("Valor de a2: %d\n", a2);
	printf("Valor de a3: %d\n", a3);

}


