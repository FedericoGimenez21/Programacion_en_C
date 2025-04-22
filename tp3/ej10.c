#include <stdio.h>

// Alumno: Federico Gimenez
int main(){

	printf("Bucle while\n");
	int num = 10;
	while (num <= 100) {
		printf("%d \n",num);
		num += 10;
	}
	
	printf("Bucle for\n");
	num = 10;
	
	for (int i=1; i<=10;i++){
		printf("%d \n",num);
		num += 10;
	}
	
	num=10;
	printf("Bucle do while\n");
	do{
		printf("%d \n",num);
		num += 10;
	}while(num<=100);
	
	return 0;
}