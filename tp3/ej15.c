#include <stdio.h>
// Alumno: Federico Gimenez
int main() {
    int n;

    // Solicitar valor de n
    printf("Introduce el valor de n: ");
    if (scanf("%d", &n) != 1){
    	printf("Caracter invalido!");
    	return 1;
	}

    // Parte superior del triangulo
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Parte inferior del triangulo
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
