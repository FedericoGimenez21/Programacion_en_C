#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
// Alumno: Federico Gimenez

void generateMatrix(const int numLin, const int numCol, int **matrix);
void printMatrix(const int numLin, const int numCol, int **matrix);

/*
Get number from user
*/
void getNumber(int *n){
	int num;
	bool condition=true;	
	while (condition){
	    if ( (scanf("%d", &num)) != 1){
	    	printf("Entrada invalida\n");
	       // return 1;
		
		}
		else{
			condition=false;
		}
		fflush(stdin);
		
	}
	*n = num;
	return;
}




void main(){
	
	int numLin, numCol;
	
	printf("Ingresar cantidad de filas: \n");
	getNumber(&numLin);
	printf("Ingresar cantidad de columnas: \n");
	getNumber(&numCol);
	
	int **matrix;
	int transpose[numCol][numLin];
	
	// generar la matriz
	matrix = malloc( numLin * sizeof(int*));
	generateMatrix(numLin, numCol, matrix);
	
    // Calcular la traspuesta
    for (int i = 0; i < numLin; i++) {
        for (int j = 0; j < numCol; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }	
    // Imprimir la matriz original
    printf("Matriz original: \n");
    
    printMatrix(numLin, numCol, matrix);
    
   	// Imprimir la matriz transpuesta
    printf("\nMatriz transpuesta:\n");
    for (int i = 0; i < numCol; i++) {
        for (int j = 0; j < numLin; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }    
    
	
	
}


void generateMatrix(const int numLin, const int numCol, int **matrix){
	
	// Semilla para los numeros aleatorios
    srand(time(NULL));
	// Llenar la matriz con numeros aleatorios entre 0 y 99
    for (int i = 0; i < numLin; i++) {
    	matrix[i] = malloc( numCol * sizeof(int));
        for (int j = 0; j < numCol; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
}


void printMatrix(const int numLin, const int numCol, int **matrix){
	// print
    for (int i = 0; i < numLin; i++) {
        for (int j = 0; j < numCol; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }	
}