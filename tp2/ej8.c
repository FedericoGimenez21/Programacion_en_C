#include <stdio.h>

// Alumno: Federico Gimenez

int main(){

    int x = 0
	/*Sentencia mal declarada, se esperaba ";"
    Solucion:
    int x = 0;
	*/
	float f = 1.2;

    printf("el valor de x es %d y el de f es %d" x, f);  
	/*Expresion parentizada mal declarada, falta coma "," luego de la expresion de string 
	y la variable f es de tipo float por lo tanto su valor debe imprimirse 
	considerando "%f". Forma de solucionarlo: 
	printf("el valor de x es %d y el de f es %f", x, f);  
    
    */
	return 0;
//falta llave que cierra "}" al final del codigo 
