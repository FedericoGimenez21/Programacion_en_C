#include <stdio.h>
#include <math.h>
// Alumno: Federico Gimenez

void main() {
	
    int a, b;
    
    // input
    printf("Ingrese el primer num entero positivo: ");
    scanf("%d", &a);
    printf("Ingrese el segundo num entero positivo: ");
    scanf("%d", &b);
    
    if (a>=0  && b>=0){
	    
	    // Calcular los resultados
	    int suma = a + b;
	    int resta = a - b;
	    int producto = a * b;
	    int potencia = pow(a, b);
	    
	    // Imprimir los resultados
	    printf("1. La suma de los dos valores es: %d\n", suma);
	    printf("2. La resta del primer valor menos el segundo es: %d\n", resta);
	    printf("3. El producto de los dos valores es: %d\n", producto);
	    printf("4. El primer valor elevado a la potencia del segundo es: %d\n", potencia);
	    	
	}
	else{
		printf("ERROR: Ambos numeros no son enteros positivos");
	}

}