#include <stdio.h>
#include <stdbool.h>

// Alumno: Federico Gimenez
int main() {
	int n;
	bool continueFlag=true;
	while ( continueFlag ){
		//itera hasta que se ingrese 0 indicando que es soltero
		// o 1 indicando que es casado. 
		printf("Por favor, ingrese 1 si es casado, o 0 si es soltero: ");
		if ( scanf("%d", &n) != 1){
			printf("Entrada invalida\n");
			
			fflush(stdin); //se limpia el buffer de entrada
		}else{
			if (n==0 || n==1){
				printf("%d",n);
				float ingresos;
				float sueldo1,sueldo2;
				printf("Por favor, ingresar el sueldo 1:");
				scanf("%f", &sueldo1);
		
				//casado
				if (n==1){
					printf("Por favor, ingresar el sueldo 2:");
					scanf("%f", &sueldo2);
				}		
				
				ingresos = sueldo1 + sueldo2;
				
				char categoria;
				float impuesto;
				float sueldo_mensual;
				if (ingresos<=300000){
					categoria = 'A';
					impuesto = ingresos*0.03;
				}else if (ingresos>300000 && ingresos<=450000){
					categoria = 'B';
					impuesto = ingresos*0.08;
					
				}else if(ingresos>450000 && ingresos<=700000){
					categoria = 'C';
					impuesto = ingresos*0.13;
				
				}else if(ingresos>700000 && ingresos<=1200000){
					categoria = 'D';
					impuesto = ingresos*0.20;
				
				}else if(ingresos>1200000){
					categoria = 'E';
					impuesto = ingresos*0.35;
				}
				
				sueldo_mensual = ingresos/12;
				
				printf("Categoria del contribuyente: %c \n", categoria);
				printf("Impuestos a pagar: %f \n", impuesto);
				printf("Sueldo mensual: %f\n",sueldo_mensual);
				continueFlag=false;
			}else{
				printf("Entrada invalida\n");
			}
		}
	}
	return 0;
}