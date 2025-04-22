#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
// Alumno: Federico Gimenez
void fillMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 10; // numeros aleatorios entre 0 y 9
        }
    }
}

void multiplyMatrices(int m, int n, int p, int A[m][n], int B[n][p], int C[m][p]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void askSize(int *n){
	bool keepAsking=true;
	int temp;
	while(keepAsking){
		if (scanf("%d", &temp) != 1){
			printf("Caracter invalido! Ingrese un numero valido.");
			fflush(stdin); 
		}
		else{
			keepAsking=false;
		}
	}
	*n = temp;
}

int main() {
    int m, n, p;
    
    // Solicitar dimensiones al usuario
    printf("Ingrese el numero de filas de la matriz A (m): ");
    askSize(&m);
    printf("Ingrese el numero de columnas de la matriz A (y filas de B) (n): ");
    askSize(&n);
    printf("Ingrese el numero de columnas de la matriz B (p): ");
    askSize(&p);
    

    int A[m][n], B[n][p], C[m][p];

    // Semilla para la generacion de numeros aleatorios
    srand(time(NULL));

    // Llenar las matrices con numero aleatorios
    fillMatrix(m, n, A);
    fillMatrix(n, p, B);


    multiplyMatrices(m, n, p, A, B, C);

    // Imprimir matrices si m y n son menores que 10
    if (m < 10 && n < 10) {
        printf("\nMatriz A:\n");
        printMatrix(m, n, A);

        printf("\nMatriz B:\n");
        printMatrix(n, p, B);

        printf("\nMatriz C (A x B):\n");
        printMatrix(m, p, C);
    } else {
        printf("Las dimensiones de m o n son demasiado grandes para imprimir las matrices.\n");
    }

    return 0;
}
