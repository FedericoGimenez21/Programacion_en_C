#include <stdio.h>
#include <ctype.h>  // Para la función tolower()

// Alumno: Federico Gimenez
int main() {
    char letra;
    printf("Ingrese una letra del abecedario: ");
    scanf("%c", &letra);

    // Comprobamos si la letra es una vocal
    letra = tolower(letra);
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
       printf("Verdadero");
    } else {
       printf("Falso");
    }

    return 0;
}