#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Alumno: Federico Gimenez

void fillMatrix(int n, int matrix[n][n]);
void printMatrix(int n, int matrix[n][n]);
void sumRows(int n, int matrix[n][n], int rowSums[n]);
void sumColumns(int n, int matrix[n][n], int columnSums[n]);
int sumMainDiagonal(int n, int matrix[n][n]);
int sumWithoutMainDiagonal(int n, int matrix[n][n], int mainDiagonalSum);

int main() {
    int N;

    // Pedir al usuario el size de la matriz
    printf("Enter the size of the NxN matrix: ");
    if (scanf("%d", &N) != 1 ){
    	printf("Entrada invalida!");
    	return 1; 
	}

    int matrix[N][N];
    int rowSums[N];
    int columnSums[N];

    // Semilla para los numeros aleatorios
    srand(time(NULL));

    // Llenar la matriz con numeros aleatorios
    fillMatrix(N, matrix);

    // Imprimir la matriz generada
    printf("\nGenerated matrix (%dx%d):\n", N, N);
    printMatrix(N, matrix);

    // Sumar los elementos de cada fila
    sumRows(N, matrix, rowSums);
    printf("\nSum of each row:\n");
    for (int i = 0; i < N; i++) {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }

    // Sumar los elementos de cada columna
    sumColumns(N, matrix, columnSums);
    printf("\nSum of each column:\n");
    for (int i = 0; i < N; i++) {
        printf("Column %d: %d\n", i + 1, columnSums[i]);
    }

    // Sumar los elementos de la diagonal principal
    int mainDiagonalSum = sumMainDiagonal(N, matrix);
    printf("\nSum of the main diagonal: %d\n", mainDiagonalSum);

    // Sumar todos los elementos excepto los de la diagonal principal
    int sumWithoutDiagonal = sumWithoutMainDiagonal(N, matrix, mainDiagonalSum);
    printf("\nSum of all elements except the main diagonal: %d\n", sumWithoutDiagonal);

    return 0;
}

// Funcion para llenar la matriz con numeros aleatorios entre 0 y 99
void fillMatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
}

// Funcion para imprimir la matriz
void printMatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Funcion para sumar los elementos de cada fila
void sumRows(int n, int matrix[n][n], int rowSums[n]) {
    for (int i = 0; i < n; i++) {
        rowSums[i] = 0;
        for (int j = 0; j < n; j++) {
            rowSums[i] += matrix[i][j];
        }
    }
}

// Funcion para sumar los elementos de cada columna
void sumColumns(int n, int matrix[n][n], int columnSums[n]) {
    for (int i = 0; i < n; i++) {
        columnSums[i] = 0;
        for (int j = 0; j < n; j++) {
            columnSums[i] += matrix[j][i];
        }
    }
}

// Funcion para sumar los elementos de la diagonal principal
int sumMainDiagonal(int n, int matrix[n][n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

// Funcion para sumar todos los elementos excepto los de la diagonal principal
int sumWithoutMainDiagonal(int n, int matrix[n][n], int mainDiagonalSum) {
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            totalSum += matrix[i][j];
        }
    }
    return totalSum - mainDiagonalSum;
}
