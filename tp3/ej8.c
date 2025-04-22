#include <stdio.h>
#include <stdbool.h>

// Alumno: Federico Gimenez
int main() {
	int num1,num2;
	
	bool flag=true;
	while (flag){
		
		
		printf("Por favor, ingrese 2 numeros: ");
		if ( scanf("%d %d", &num1, &num2) != 2){
			printf("Entrada invalida\n");
			
			fflush(stdin); //se limpia el buffer de entrada
		}	
		else{
			flag =false;
		}
		
	}
	printf("Numero mayor: %d\n", ( (num1>num2) ? num1 : num2) );
	printf("Numero menor: %d\n", ( (num1<num2) ? num1 : num2) );
	
			
	return 0;
}