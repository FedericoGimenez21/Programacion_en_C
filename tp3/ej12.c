#include <stdio.h>

// Alumno: Federico Gimenez
int main(){
	
	int inicio= 1200;
	int fin = 1400;
	
	
	printf("Numeros divisibles entre 5 y 7 desde 1200 hasta 1400 incluidos \n");
	for (int i=1200; i<=1400; i++){
		if ( (i%7==0) && (i%5==0)  ){
			printf("%d\n", i);
		}
	}

	return 0;
}