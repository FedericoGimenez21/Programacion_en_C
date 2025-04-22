#include <stdio.h>
#include <stdbool.h>
#include <string.h>
//Alumno: Federico Gimenez

struct Book {
    char name[300];
    char author[100];
    int pages;
    float price;
};


void loadData(struct Book *Book ){
	printf("Ingresar nombre del libro: ");
	
	fgets(Book->name, sizeof(Book->name), stdin);
	Book->name[strcspn(Book->name, "\n")] = 0; //remove new line
	
	printf("Ingresar autor del libro: ");
	
	fgets(Book->author, sizeof(Book->author), stdin);
	Book->author[strcspn(Book->author, "\n")] = 0;  //remove new line
	printf("Ingresar cantidad de paginas: ");
	
	bool askNum=true;
	do{
		if 	(scanf("%d%*c", &Book->pages) != 1 ){ 
			printf("Entrada invalida\n");
			fflush(stdin);
		}
		else{
			askNum=false;
		}
	}while (askNum);

	

	printf("Ingresar precio: ");
	askNum=true;
	do{
		if (scanf("%f%*c", &Book->price) != 1) {
			printf("Entrada invalida\n");
			fflush(stdin);
		}
		else{
			askNum=false;
		}
	}while (askNum);

	
}



void printStruct(struct Book Book){
	printf("Nombre del libro: %s\n", Book.name);
	printf("Autor:  %s\n", Book.author);
	printf("Cantidad de paginas: %d\n", Book.pages);
	printf("Precio: $%.2f\n", Book.price );
}

void writeCSV(struct Book library[], int n, const char* filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error al abrir el archivo para escribir.\n");
        return;
    }

    // Escribir la cabecera del archivo CSV
    fprintf(file, "Nombre,Autor,Paginas,Precio\n");

    // Escribir los datos de cada libro
    for (int i = 0; i < n; i++) {
        fprintf(file, "%s,%s,%d,%.2f\n", library[i].name, library[i].author, library[i].pages, library[i].price);
    }

    fclose(file);
    printf("Datos de los libros escritos en el archivo '%s' con formato CSV.\n", filename);
}


void main(){
	
    int n;
    
    // Preguntar al usuario cant de Book (max 10)
    do {
        printf("Ingrese la cantidad de Book a cargar (max 10): ");
        if (scanf("%d%*c", &n) != 1){
        	printf("Entrada invalida\n");
        	fflush(stdin);
		}
    } while (n < 1 || n > 10);	
    
    
    struct Book library[10]; // Arreglo de estructuras 
	
	//load data
    for (int i = 0; i < n; i++) {
        printf("\nCargando info del libro %d:\n", i + 1);
        loadData(&library[i]);
    }	
	
	//print
	for (int i = 0; i < n; i++) {
        printf("\nLibro %d:\n", i + 1);
        printStruct(library[i]);
    }
    
    writeCSV(library, n, "libros.csv");
	
	
}