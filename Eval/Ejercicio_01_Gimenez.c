#include <stdio.h>
#include <stdbool.h>
#include <math.h>


//Alumno: Gimenez Federico

float getVolumeSphere(float radius){
	return ( (4.0/3.0) * M_PI * (radius * radius * radius) );	 
}

float getAreaSphere(float radius){
	return (4.0 * M_PI * (radius*radius));
}


float getVolumeCilindro(float radius, float h){
	return (M_PI * (radius * radius) * h);
}

float getAreaCilindro(float radius, float h){
	return ( 2.0 * M_PI * radius * (radius + h));
}

float getVolumeCono(float radius, float h){
	return ( (1.0/3.0) * M_PI * (radius*radius) * h );
}

float getAreaCono(float radius, float h){
	float g = (float)sqrt( (radius * radius) + (h * h) );
	return ( (M_PI * radius) * (radius + g));
}


void askNum(float *n){
	bool keepAsking=true;
	float temp;
	while(keepAsking){
		if (scanf("%f", &temp) != 1){
			printf("Caracter invalido! Ingrese un numero valido.");
			fflush(stdin); 
		}
		else{
			keepAsking=false;
		}
	}
	*n = temp;
}


void main(){
	
	float r,h; 
	bool boolAskNum = true;
	while (boolAskNum){
    	printf("Ingrese el radio: ");
    	askNum(&r);
    	if (r<0 ){
    		printf("El radio no puede ser negativo\n");
		}
		else{
			boolAskNum=false;
		}
	}
	
	boolAskNum = true;
	while (boolAskNum){
		
    	printf("Ingrese la altura: ");
    	askNum(&h);
    	if (h<0 ){
    		printf("La altura no puede ser negativa\n");
		}
		else{
			boolAskNum=false;
		}
	}
    		
	
	float areaCilindro, volumeCilindro, areaEsfera, volumeEsfera, areaCono, volumeCono;
	
	areaEsfera = getAreaSphere(r);
	printf("Area esfera de radio %.2f: %.2f \n",r, areaEsfera );
	
	
	volumeEsfera =  getVolumeSphere(r);
	printf("Volumen esfera de radio %.2f: %.2f \n",r, volumeEsfera );
		
	areaCilindro =  getAreaCilindro(r,h);
	printf("Area cilindro de radio %.2f y altura %.2f: %.2f \n",r, h, areaCilindro );
		
	volumeCilindro =  getVolumeCilindro(r,h);
	printf("Volumen cilindro de radio %.2f y altura %.2f: %.2f \n",r, h, volumeCilindro );
	
		
	areaCono =  getAreaCono(r,h);
	printf("Area cono de radio %.2f y altura %.2f: %.2f \n",r, h, areaCono );
		
	volumeCono=  getVolumeCono(r,h);
	printf("Volumen cono de radio %.2f y altura %.2f: %.2f \n",r, h, volumeCono );	
	
	return;
}