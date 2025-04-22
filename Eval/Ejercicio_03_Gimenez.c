#include <stdio.h>
#include <stdbool.h>

//Alumno: Gimenez Federico

void main(){
	
	
	int n;
	bool boolNum = true;
	while (boolNum){		
		printf("Ingresar numero entero positivo: ");
	    if ( (scanf("%d", &n) != 1) ){
			printf("Entrada invalida\n");
			fflush(stdin); 
		}
		else{ 	
			if (n>0){
				boolNum = false;		
			}else{
				printf("Entrada invalida\n");
			}
		}
	}

	bool flagPrint = true;
	int i =1;
	while (flagPrint && n!=1){
		if ( (i%2) != 0 ){
			printf("%d\n",i );
		}
		i++;
		if (i==n){
			flagPrint=false;
		}
	}
	return;
}
