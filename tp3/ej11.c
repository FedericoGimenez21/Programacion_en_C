#include <stdio.h>

// Alumno: Federico Gimenez
int main(){
	
	int n=5;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i; j++){ 
			putchar('*');	
		}
		putchar('\n');
	}
	
	/*Salida
	*
	**
	***
	**** 
	*/
	
	printf("\n");
	
	int m=3;
	for (int i = n; i > 0; i--) {
		for (int j = m; j > 0; j--){
			putchar('*');
		}
		putchar('\n');
	}
	
	/*Salida
	***
	***
	***
	***
	*** 
	*/

	return 0;
}

