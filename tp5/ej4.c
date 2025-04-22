#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Alumno: Federico Gimenez

#define MAX_SIZE 10  // Definir un size maximo para la matriz

void fillMatrix(int rows, int cols, int matrix[rows][cols]);
void printMatrix(int rows, int cols, int matrix[rows][cols]);
void swapRows(int rows, int cols, int matrix[rows][cols], int row1, int row2);

int main() {
    int M, N;
    int row1, row2;

    // Pedir al usuario las dimensiones de la matriz
    printf("Introduce el numero de filas (M): ");
    scanf("%d", &M);
    printf("Introduce el numero de columnas (N): ");
    scanf("%d", &N);

    // Validar dimensiones
    if (M <= 0 || N <= 0 || M > MAX_SIZE || N > MAX_SIZE) {
        printf("Dimensiones invalidas.\n");
        return 1;
    }

    int matrix[M][N];

    // Semilla para los numeros aleatorios
    srand(time(NULL));

    // Llenar la matriz con numeros aleatorios
    fillMatrix(M, N, matrix);

    // Imprimir la matriz generada
    printf("\nMatriz generada (%dx%d):\n", M, N);
    printMatrix(M, N, matrix);

    // Pedir al usuario las filas a intercambiar
    printf("\nIntroduce el numero de la primera fila para intercambiar (0-%d): ", M-1);
    scanf("%d", &row1);
    printf("Introduce el numero de la segunda fila para intercambiar (0-%d): ", M-1);
    scanf("%d", &row2);

    // Validar filas
    if (row1 < 0 || row1 >= M || row2 < 0 || row2 >= M || row1 == row2) {
        printf("Fila(s) invalida(s).\n");
        return 1;
    }

    // Intercambiar las filas
    swapRows(M, N, matrix, row1, row2);

    // Imprimir la matriz despues del intercambio
    printf("\nMatriz despues de intercambiar las filas %d y %d:\n", row1, row2);
    printMatrix(M, N, matrix);

    return 0;
}

// Funcion para llenar la matriz con numeros aleatorios entre 0 y 99
void fillMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
}

// Funcion para imprimir la matriz
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Funcion para intercambiar dos filas de la matriz
void swapRows(int rows, int cols, int matrix[rows][cols], int row1, int row2) {
    int temp;
    for (int j = 0; j < cols; j++) {
        temp = matrix[row1][j];
        matrix[row1][j] = matrix[row2][j];
        matrix[row2][j] = temp;
    }
}
