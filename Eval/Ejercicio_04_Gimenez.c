#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    int factorial = 1;  

	bool boolGetNum = true;
	while (boolGetNum){
	    printf("Ingrese un numero entero positivo: ");
	    if ( scanf("%d", &n) != 1){
			printf("Entrada invalida\n");
			fflush(stdin); 
		}	 
		else{
		    if (n < 0) {
		        printf("El factorial no esta definido para numeros negativos. Ingrese un numero valido\n");
		    }
		    else{
		    	boolGetNum = false;
			}
		}   
	}

    int i = n;
    while (i > 0) {
        factorial *= i;
        i--;
    }

    printf("El factorial de %d es: %d\n", n, factorial);

    return 0;
}
