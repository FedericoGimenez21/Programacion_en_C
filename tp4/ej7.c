
#include <stdio.h>
#include <stdbool.h>

// Alumno: Federico Gimenez
float kmToMill(float num){
	return (num*0.621371);
}
float millToKm(float num){
	return (num*1.60934);
}
float kgToOnz(float num){
	return (num*35274);
}
float onzToKg(float num){
	return (num * 0.0283495);
}
float celToFar(float num){
	return ((num * 9/5) + 32 );
}
float farToCel(float num){
	return ((num - 32) * 5/9);
}
float cmToPul(float num){
	return (num/2.54);
}
float pulToCm(float num){
	return (num*2.54);
}


void main(){
	

	int conversionType;
	
	float num;
	
	bool boolConversion = true;
	while (boolConversion){	
		printf("Ingrese el numero entre parentesis para la conversion que desea realizar:\n");
		printf("- (1) kilometros a millas\n");
		printf("- (2) millas a kilometros\n");
		printf("- (3) kilogramos a onzas\n");
		printf("- (4) onzas a kilogramos\n");
		printf("- (5) celsius a fahrenheit\n");
		printf("- (6) fahrenheit a celsius\n");
		printf("- (7) centimetros a pulgadas\n");
		printf("- (8) pulgadas a centimetros\n");
		printf("- Ingrese cualquier otro caracter para salir.\n"); 
	    if ( (scanf("%d", &conversionType) != 1) ){
			printf("Entrada invalida\n");
			fflush(stdin); 
		}
		else{
			if (conversionType>=1 && conversionType<=8 ){
				
			
			
				//solicita numero
				bool boolAskNum = true;
				
				while ( boolAskNum){
					printf("Ingrese el numero a convertir: \n");
					if ( (scanf("%f", &num) != 1) ){
						printf("Entrada invalida\n");
					}
					else{
						boolAskNum = false;
					}
				}
				
				//switch para conversiones
				
				switch(conversionType){
					
					case 1:
						printf(" %f kilometros son %f millas", num, kmToMill(num));
						break;
					case 2:
						printf(" %f millas son %f kilometros", num, millToKm(num) );
						break;
					case 3:
						printf(" %f kilogramos son %f onzas", num, kgToOnz(num) );
						break;
					case 4:
						printf(" %f onzas son %f kilogramos", num, onzToKg(num) );
						break;
					case 5:
						printf(" %f  celsius son %f  fahrenheit", num, celToFar(num) );
						break;
					case 6:
						printf(" %f fahrenheit son %f  celsius", num, farToCel(num) );
						break;
					case 7:
						printf(" %f centimetros son %f pulgadas", num, cmToPul(num) );
						break;
					case 8:
						printf(" %f pulgadas son %f centimetros", num, pulToCm(num) );
						break;
					
					default: 
						break;
				}
				printf("\n");
			}
			else{
				
			//condicion parada
				boolConversion=false;
			}
		}
	}
}
