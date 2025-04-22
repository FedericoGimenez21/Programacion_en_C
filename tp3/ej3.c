#include <stdio.h>
#include <stdbool.h>

// Alumno: Federico Gimenez
int main() {
    float temperature;
    char unit;

	bool condition=true;
	while (condition){
		
	    // Solicitar al usuario que ingrese la temperatura y la unidad
	    printf("Ingrese la temperatura seguida de la unidad (C para Celsius, F para Fahrenheit): ");
	    
		// check si se leyeron correctamente
	    if ( (scanf("%f %c", &temperature, &unit)) != 2){
	    	printf("Entrada invalida\n");
	       // return 1;
	       fflush(stdin); //se limpia el buffer de entrada
		
		}
    	else{
    	    	    	
		    // Realizar la conversión basada en la unidad ingresada
		    if (unit == 'C' || unit == 'c') {
		        float fahrenheit = (temperature * 9/5) + 32;
		        printf("%f grados Celsius son %.2f grados Fahrenheit.\n", temperature, fahrenheit);
		    	condition=false;
			} else if (unit == 'F' || unit == 'f') {
		        float celsius = (temperature - 32) * 5/9;
		        printf("%f grados Fahrenheit son %.2f grados Celsius.\n", temperature, celsius);
		    	condition=false;
			} else {
		        printf("Unidad no reconocida. Use 'C' para Celsius o 'F' para Fahrenheit.\n");
		    }
		}
	}

    return 0;
}