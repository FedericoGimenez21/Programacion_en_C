#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

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


void fillMatrix(const int numLin, const int numCol, int **matrix){
	
	// Semilla para los numeros aleatorios
    srand(time(NULL));
	// Llenar la matriz con numeros aleatorios entre 0 y 9
    for (int i = 0; i < numLin; i++) {
    	matrix[i] = malloc( numCol * sizeof(int));
        for (int j = 0; j < numCol; j++) {
            matrix[i][j] = rand() % 10;
        }
    }
}

void printMatrix(int rows, int cols, int **matrix) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void calculateRowStats(int **matrix, int rows, int cols, float *averages, int *maxValues, int *minValues) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        int max = matrix[i][0];
        int min = matrix[i][0];

        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
            if (matrix[i][j] > max) max = matrix[i][j];
            if (matrix[i][j] < min) min = matrix[i][j];
        }

        averages[i] = (float)sum / cols;
        maxValues[i] = max;
        minValues[i] = min;
    }
}

void writeCSV( int rows, float *averages, int *arrayMin, int *arrayMax, const char* filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error al abrir el archivo para escribir.\n");
        return;
    }

    // Escribir la cabecera del archivo CSV
    fprintf(file, "NumeroFila,Promedio,Max,Min\n");

    // Escribir los datos en el file
    for (int i = 0; i < rows; i++) {
    	
        fprintf(file, "%d,%f,%d,%d\n", i, averages[i], arrayMax[i], arrayMin[i]);
    }

    fclose(file);
    printf("Datos escritos en el archivo '%s' con formato CSV.\n", filename);
}

void main(){
	int m, n;
    srand(time(NULL));

    // Solicitar dimensiones al usuario
    printf("Ingrese el numero de filas de la matriz (M): ");
    askSize(&m);
    printf("Ingrese el numero de columnas de la matriz (N): ");
    askSize(&n);
	
    int **matrix;
    matrix = (int **)malloc( m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
    }

    

    // Llenar la matriz con numeros aleatorios
    fillMatrix(m, n, matrix);
    printMatrix(m, n, matrix);
    
    float *averages = (float *)malloc(m * sizeof(float));
    int *maxValues = (int *)malloc(m * sizeof(int));
    int *minValues = (int *)malloc(m * sizeof(int));	
	
	calculateRowStats(matrix, m, n, averages, maxValues, minValues);
    
	
	writeCSV(m, averages, minValues, maxValues, "Ejercicio_05_Gimenez.csv" );
	// Liberar memoria
    for (int i = 0; i < m; i++) {
        free(matrix[i]);
    }
    free(matrix);
    free(averages);
    free(maxValues);
    free(minValues);

	return;	
}
