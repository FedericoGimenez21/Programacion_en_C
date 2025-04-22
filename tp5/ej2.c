#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Alumno: Federico Gimenez

const int numLin = 3;
const int numCol = 5;

void generateMatrix(int matrix[numLin][numCol], const int numLin, const int numCol);
void printMatrix(int matrix[numLin][numCol]);

void main(){
	
	int matrix[numLin][numCol];
	int transpose[numCol][numLin];
	
	// generar la matriz
	
	generateMatrix(matrix, numLin, numCol);
	
    // Calcular la traspuesta
    for (int i = 0; i < numLin; i++) {
        for (int j = 0; j < numCol; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }	
    // Imprimir la matriz original
    printf("Matriz original (3x5):\n");
    
    printMatrix(matrix);
    
   	// Imprimir la matriz transpuesta
    printf("\nMatriz transpuesta (5x3):\n");
    for (int i = 0; i < numCol; i++) {
        for (int j = 0; j < numLin; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }    
    
	
	
}


void generateMatrix(int matrix[numLin][numCol], const int numLin, const int numCol){
	// Semilla para los numeros aleatorios
    srand(time(NULL));
	// Llenar la matriz con numeros aleatorios entre 0 y 99
    for (int i = 0; i < numLin; i++) {
        for (int j = 0; j < numCol; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
}


void printMatrix(int matrix[numLin][numCol]){
	// print
    for (int i = 0; i < numLin; i++) {
        for (int j = 0; j < numCol; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }	
}