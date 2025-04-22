#include <stdio.h>
// Alumno: Federico Gimenez

void main() {
	int m = 99;
	int n;

	n = ++m; //n=100
	printf("m = %d, n = %d\n",m,n); //100 100

	n = m++; //n=100
	printf("m = %d, n = %d\n",m,n); //101 100
	printf("m = %d \n",m++); //101
	printf("m = %d \n",m); //102
	printf("m = %d \n",++m); //103
	
	return;
}