#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Alumno: Federico Gimenez

// Definir la estructura para almacenar la informacion de un libro
struct Book {
    char name[300];
    char author[100];
    int pages;
    float price;
};

// Definir la union para devolver informacion relevante
union Response {
    char info[200];
    char error[200];
};

// Prototipos de funciones
union Response loadBookData(struct Book *b);
union Response printBookData(struct Book library[], int n);

int main() {
    int n;
    
    // Preguntar al usuario cant de libros (max 10)
    do {
        printf("Ingrese la cantidad de libros a cargar (max 10): ");
        if (scanf("%d%*c", &n) != 1){
        	printf("Entrada invalida\n");
        	fflush(stdin);
		}
    } while (n < 0 || n > 10);	
    
    struct Book library[10]; // Arreglo de estructuras para almacenar la informacion de hasta 10 libros
    union Response res; // Union para manejar las respuestas

    // Cargar los datos de cada libro
	//load data
	int i=0;
    while (i<n){
        printf("\nCargando info del libro %d:\n", i );
        res = loadBookData(&library[i]);
        
        
        // Verificar si se genero un error al cargar los datos
		char *ret = strstr(res.info, "ERROR ");
		if (ret) {
			printf("%s\n", res.error);
		}
		else{
			printf("%s\n", res.info);
        	i = i+1;
		}
		
    }	
    
    // Imprimir los datos de cada libro
    res = printBookData(library, n);
    // Verificar si se genero un error al imprimir los datos
	char *ret = strstr(res.info, "ERROR ");
	if (ret) {
		printf("%s\n", res.error);
	}
	else{
		printf("%s\n", res.info);
	}

    return 0;
}

// Funcion para cargar los datos de un libro
union Response loadBookData(struct Book *b) {
    union Response res;
    int nameLen, authorLen;
    char input[50];

    printf("Ingrese el nombre del libro: ");
    fgets(b->name, 300, stdin);
    
    printf("Ingrese el autor del libro: ");
    fgets(b->author, 100, stdin);

    // Contar la longitud de los caracteres en nombre y autor
    nameLen = strlen(b->name) - 1; // Excluir el '\n'
    authorLen = strlen(b->author) - 1;

    // Ingresar las paginas y permitir omitir la entrada
    printf("Ingrese la cantidad de paginas (o presione Enter para omitir): ");
    fgets(input, 50, stdin); // Leer como cadena
    if (input[0] == '\n') {
        b->pages = -1; // Indicar que no se ingreso valor
    } 
	else {
        int temp = atoi(input);
	    // si se ingresa un valor erroneo en precio (atoi sera cero pero se compara con input tambien para permitir ingresar paginas cero)
		if (temp==0 && input[0]!='0'){
			b->pages = -1;
		}	
		else{
			b->pages = temp;
		}
	} 
    

    // Ingresar el precio y permitir omitir la entrada
    printf("Ingrese el precio del libro (o presione Enter para omitir): ");
    fgets(input, 50, stdin); // Leer como cadena
    if (input[0] == '\n') {
        b->price = -1; // Indicar que no se ingreso valor
    } else{
	    float temp = atof(input);   
	    // si se ingresa un valor erroneo en precio (atof sera cero pero se compara con input tambien para permitir ingresar precio cero)
		if (temp==0 && input[0]!='0'){
			b->price = -1;
		}	
		else{
			b->price = temp;
		}
	}    	

    // Generar mensajes de error si faltan paginas o precio
    if (b->pages == -1 && b->price == -1) {
		strcpy(res.error, "ERROR - no se ingreso la cantidad de paginas y el precio" );
    } else if (b->pages == -1) {
        strcpy(res.error, "ERROR - no se ingreso la cantidad de paginas");
    } else if (b->price == -1) {
        strcpy(res.error, "ERROR - no se ingreso el precio");
    } else {
        res.error[0] = '\0'; // Sin errores
        
		//strcpy(res.info, "INFO - el autor tiene %d caracteres y el titulo tiene %d caracteres", authorLen, nameLen);
    	strcpy(res.info, "INFO - el autor tiene ");
    	char authorLenChar[200];
		itoa(authorLen, authorLenChar, 10);
    	strcat(res.info, authorLenChar);
    	strcat(res.info, " caracteres y el titulo tiene ");
    	char nameLenChar[200];
    	itoa(nameLen, nameLenChar, 10);
    	strcat(res.info, nameLenChar);
    	strcat(res.info, " caracteres");
	}
    

    return res;
}

// Funcion para imprimir los datos de los libros
union Response printBookData(struct Book library[], int n) {
    union Response res;
    int printedBooks = 0;

    if (n == 0) {
        strcpy(res.error, "ERROR - no hay libros cargados en la estructura");
    } else {
        for (int i = 0; i < n; i++) {
            
            printf("Libro %d:\n", i + 1);
            printf("Nombre: %s", library[i].name);
            printf("Autor: %s", library[i].author);
            printf("Paginas: %d\n", library[i].pages);
            printf("Precio: $%.2f\n", library[i].price);
            printedBooks++;
            
        }
        if (printedBooks > 0) {
            sprintf(res.info, "INFO - se imprimieron %d libros por pantalla", printedBooks);
            
            
        	res.error[0] = '\0'; // Sin errores    
    		strcpy(res.info, "INFO - se imprimieron ");
	    	char printedBooksChar[2];
			itoa(printedBooks, printedBooksChar, 10);
			strcat(res.info, printedBooksChar);
			strcat(res.info, " libros por pantalla" );
        } 
    }

    return res;
}
