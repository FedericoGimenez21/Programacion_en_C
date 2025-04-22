#include <stdio.h>
#include <stdbool.h>

// Alumno: Federico Gimenez
float getTemperature(){
	
	// check si se leyeron correctamente
	float temperature;
	bool condition = true;
	
	while (condition){
		printf("Ingrese la temperatura: ");
	    if ( (scanf("%f", &temperature)) != 1){
	    	printf("Entrada invalida\n");
	       // return 1;
		
		}
		else{
			condition=false;
		}
	   fflush(stdin); //se limpia el buffer de entrada
	} 
	return temperature;
		
}

char getUnit(){
	
	// check si se leyeron correctamente
	char unit;
	bool condition = true;
	while (condition){
		printf("Ingrese la unidad: ");
	    if ( (scanf("%c", &unit)) != 1){
	    	printf("Entrada invalida\n");
	       // return 1;
		
		}
		else{
			if (unit == 'C' || unit == 'c'
				|| unit =='F' || unit == 'f') {
				condition=false;
			}
		}
	    fflush(stdin); //se limpia el buffer de entrada
	} 
	return unit;
		
}


float toCelsius(float far){
	return ((far - 32) * 5/9);
}

float toFahrenheit(float cel){
	return  ((cel * 9/5) + 32);
}


int main() {
    float temperature;
    char unit;

	bool condition=true;

	temperature = getTemperature();
	unit = getUnit();
	
    if (unit == 'C' || unit == 'c') {
        printf("%f grados Celsius son %.2f grados Fahrenheit.\n", temperature, toFahrenheit(temperature));
    	
	} else if (unit == 'F' || unit == 'f') {
        printf("%f grados Fahrenheit son %.2f grados Celsius.\n", temperature, toCelsius(temperature));	
	}
    return 0;
}