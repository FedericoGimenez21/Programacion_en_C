#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


// Alumno: Federico Gimenez

int main() {
    char linea[100];
    int suma_total = 0;

    printf("Ingresa lineas de texto (ingresa una linea en blanco para finalizar):\n");
	bool hasLines=true;
    while (hasLines) {
        fgets(linea, sizeof(linea), stdin);

        // Si se ingresa una linea en blanco, se termina el bucle
        if (linea[0] == '\n') {
            hasLines=false;
        }

        int numero, suma_linea = 0;
        int i = 0;

        while (linea[i] != '\0') {
            // Si se encuentra un digito, se construye el numero
            if (isdigit(linea[i])) {
                numero = linea[i] - '0';
                while (isdigit(linea[i + 1])) {
                    numero = numero * 10 + (linea[i + 1] - '0');
                    i++;
                }
                suma_linea += numero;
            }
            i++;
        }

        suma_total += suma_linea;
    }

    printf("Total de todos los numeros: %d\n", suma_total);

    return 0;
}