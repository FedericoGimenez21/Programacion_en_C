#include <stdio.h>
// Alumno: Federico Gimenez
// Funcion para calcular el MCD utilizando el algoritmo de Euclides
int mcd(int a, int b) {
    int temporal;//Para no perder b
    while (b != 0) {
        temporal = b;
        b = a % b;
        a = temporal;
    }
    return a;
}

int main() {
    int num1, num2;

    // Solicitar los dos numeros
    printf("Introduce el primer numero: ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);

    // Calcular y mostrar el MCD
    printf("El MCD de %d y %d es: %d\n", num1, num2, mcd(num1, num2));

    return 0;
}
