#include <stdio.h>

//Alumno: Federico Gimenez

// Definir la estructura para un numero complejo
struct Complex {
    float real;
    float imag;
};

// Prototipos de funciones
struct Complex add(struct Complex a, struct Complex b);
struct Complex subtract(struct Complex a, struct Complex b);
struct Complex multiply(struct Complex a, struct Complex b);
struct Complex divide(struct Complex a, struct Complex b);

int main() {
    struct Complex num1, num2, result;
    int option;

    // Ingresar los dos numeros complejos
    printf("Ingrese la parte real y la parte imaginaria del primer numero complejo: ");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Ingrese la parte real y la parte imaginaria del segundo numero complejo: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Menu de operaciones
    printf("\nSeleccione la operacion a realizar:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("Opcion: ");
    scanf("%d", &option);

    // Ejecutar la operacion seleccionada
    switch (option) {
        case 1:
            result = add(num1, num2);
            printf("Resultado de la suma: %.3f + %.2fi\n", result.real, result.imag);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Resultado de la resta: %.3f + %.2fi\n", result.real, result.imag);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Resultado de la multiplicacion: %.3f + %.2fi\n", result.real, result.imag);
            break;
        case 4:
            result = divide(num1, num2);
            printf("Resultado de la division: %.3f + %.2fi\n", result.real, result.imag);
            break;
        default:
            printf("Opcion invalida\n");
            break;
    }

    return 0;
}

// Funcion para sumar dos numeros complejos
struct Complex add(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

// Funcion para restar dos numeros complejos
struct Complex subtract(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

// Funcion para multiplicar dos numeros complejos
struct Complex multiply(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}

// Funcion para dividir dos numeros complejos
struct Complex divide(struct Complex a, struct Complex b) {
    struct Complex result;
    float denominator = (b.real * b.real) + (b.imag * b.imag);
    
    if (denominator == 0) {
        printf("Error: Division por cero\n");
        result.real = 0;
        result.imag = 0;
    } else {
        result.real = ((a.real * b.real) + (a.imag * b.imag)) / denominator;
        result.imag = ((a.imag * b.real) - (a.real * b.imag)) / denominator;
    }

    return result;
}
