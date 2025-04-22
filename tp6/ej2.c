#include <stdio.h>
#include <stdbool.h>

// Alumno: Federico Gimenez
void getTemperature(float *temperature){
	
	// check si se leyeron correctamente
	bool condition = true;
	float temporal;
	while (condition){
		printf("Ingrese la temperatura: ");
	    if ( (scanf("%f", &temporal)) != 1){
	    	printf("Entrada invalida\n");
	       // return 1;
		
		}
		else{
			condition=false;
		}
		fflush(stdin);	
	} 
	*temperature = temporal;
	return;
		
}

void getUnit(char *unit){
	
	// check si se leyeron correctamente
	bool condition = true;
	char temporal;
	while (condition){
		printf("Ingrese la unidad (C para Celsius o F para Fahrenheit): ");
	    if ( (scanf("%c", &temporal)) != 1){
	    	printf("Entrada invalida\n");
	       // return 1;
		}
		else{
			if (temporal == 'C' || temporal == 'c'
				|| temporal =='F' || temporal == 'f') {
				condition=false;				
			}
		}
		fflush(stdin);
	} 
	*unit = temporal;
	return;
		
}


void toCelsius(float *far){
	*far = ((*far - 32) * 5/9);
}

void toFahrenheit(float *cel){
	
	*cel= ((*cel * 9/5) + 32);

}


int main() {
    
    char unit;
	float initTemp; 
	getTemperature(&initTemp);
	getUnit(&unit);
	float outTemp = initTemp;
    if (unit == 'C' || unit == 'c') {
    	toFahrenheit(&outTemp);
        printf("%f grados Celsius son %.2f grados Fahrenheit.\n", initTemp, outTemp);
    	
	} else if (unit == 'F' || unit == 'f') {
		toCelsius(&outTemp);
        printf("%f grados Fahrenheit son %.2f grados Celsius.\n", initTemp, outTemp);	
	}
    return 0;
}