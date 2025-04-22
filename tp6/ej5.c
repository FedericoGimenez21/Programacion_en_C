#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
//Alumno: Federico Gimenez
void fillMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100; // Numeros aleatorios entre 0 y 99
        }
    }
}

void findMinMax(int rows, int cols, int matrix[rows][cols], int *minVal, int *maxVal, int *minRow, int *minCol, int *maxRow, int *maxCol) {
    *minVal = *maxVal = matrix[0][0];
    *minRow = *minCol = *maxRow = *maxCol = 0;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < *minVal) {
                *minVal = matrix[i][j];
                *minRow = i;
                *minCol = j;
            }
            if (matrix[i][j] > *maxVal) {
                *maxVal = matrix[i][j];
                *maxRow = i;
                *maxCol = j;
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
    int m, n;
    int minVal, maxVal, minRow, minCol, maxRow, maxCol;
    
    // Solicitar dimensiones al usuario
    printf("Ingrese el numero de filas de la matriz (M): ");
    askSize(&m);
    printf("Ingrese el numero de columnas de la matriz (N): ");
    askSize(&n);
    
    
	int matrix[m][n];


    srand(time(NULL));

    // Llenar la matriz con numeros aleatorios
    fillMatrix(m, n, matrix);

  
    findMinMax(m, n, matrix, &minVal, &maxVal, &minRow, &minCol, &maxRow, &maxCol);

    // Imprimir la matriz
    printf("\nMatriz generada:\n");
    printMatrix(m, n, matrix);

    // Imprimir el valor y coordenadas del mayor y menor numero
    printf("\nEl menor valor es %d en la posicion (%d, %d)\n", minVal, minRow, minCol);
    printf("El mayor valor es %d en la posicion (%d, %d)\n", maxVal, maxRow, maxCol);

    return 0;
}
