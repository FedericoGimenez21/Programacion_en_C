#include <stdio.h>
#include <stdbool.h>

void main(){
	
	int ingreso;
	float impuesto;
	bool boolGetNum = true;
	int porcentaje;
	while (boolGetNum){
	    printf("Ingrese el total de ingresos anuales: ");
		if ( scanf("%d", &ingreso) != 1){
			printf("Entrada invalida\n");
			fflush(stdin); 
		}else{
			if (ingreso<0){
				printf("Los ingresos no pueden ser un numero negativo, ingrese un numero valido. \n");
			}
			else{
				boolGetNum = false;
			}
		}			
	}
	
	if ( ingreso <=900000){
		impuesto = 0;
		porcentaje = 0;
	}else{
		if (ingreso >= 900001 && ingreso<=1400000){
			impuesto = ingreso * 0.05;
			porcentaje = 5;
		}else{
			if ( ingreso >= 1400000){
				impuesto = ingreso * 0.10;
				porcentaje = 10;
			}
		}
	}				
	printf("Porcentaje de impuesto que corresponde: \%%%d \n", porcentaje);
	printf("Valor a pagar: %f", impuesto);
}