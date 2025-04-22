#include <stdio.h>
#include <MATH.h>

// Alumno: Federico Gimenez
void toRectangular(double r, double phi, double *x, double *y){
	*x = r * cos(phi);
	*y = r * sin(phi);
	return;
}

void main(){
	
	double x,y, r, phi, radianes;
	
	printf("Ingrese r y phi (en grados): ");
    if ( (scanf("%lf %lf", &r, &phi)) != 2){
    	printf("Entrada invalida\n");
    	return;
	}
	radianes = phi  * (M_PI / 180);
	toRectangular(r, radianes, &x, &y);
		
		
	printf("X: %lf\n", x);
	printf("Y: %lf\n", y);
}

