#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_ROWS 100

// struct
typedef struct {
    int row;
    float average;
    int max;
    int min;
} RowInfo;


int loadDataFromCSV(const char *filename, RowInfo *data) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error al abrir el archivo.\n");
        return -1;
    }

    char buffer[100];
    int count = 0;

    // primera linea
    fgets(buffer, sizeof(buffer), file);

    while (fgets(buffer, sizeof(buffer), file) && count < MAX_ROWS) {
        sscanf(buffer, "%d,%f,%d,%d", &data[count].row, &data[count].average, &data[count].max, &data[count].min);
        count++;
    }

    fclose(file);
    return count;
}


void displayRowData(RowInfo *data, int rowIndex) {
    printf("Fila: %d\n", data[rowIndex].row);
    printf("Promedio: %.2f\n", data[rowIndex].average);
    printf("Maximo: %d\n", data[rowIndex].max);
    printf("Minimo: %d\n", data[rowIndex].min);
}

void askNum(int *n){
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
    RowInfo data[MAX_ROWS];
    const char *filename = "Ejercicio_05_Gimenez.csv";
    int rowCount = loadDataFromCSV(filename, data);

    if (rowCount == -1) {
        return 1;
    }

    printf("Se han cargado %d filas del archivo %s.\n", rowCount, filename);

    int rowIndex;
    bool boolAskNum = true;
    while (boolAskNum){
		printf("Ingrese el numero de fila que desea ver (desde 0 hasta %d): ", rowCount-1);
		askNum(&rowIndex);
		
		if (rowIndex >= 0 && rowIndex <= rowCount-1) {
		    displayRowData(data, rowIndex);  
		} else {
		    printf("Numero de fila invalido.\n");
		}
    	
	}

    return 0;
}
