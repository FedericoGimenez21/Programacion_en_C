#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Alumno: Federico Gimenez
int main() {
    // Inicializar la semilla del generador de números aleatorios
    srand(time(NULL));

    // Intentos: 100
    int attempts = 100;

    int accepted = 0;

    for (int i = 0; i < attempts; i++) {
        // Generar coordenadas aleatorias x, y entre -1 y 1
        float x = -1 + (rand() / (float)RAND_MAX) * 2;
        float y = -1 + (rand() / (float)RAND_MAX) * 2;

        // Verificar si el punto esta dentro del circulo
        if (x * x + y * y <= 1) {
            accepted++;
        }
    }

    // Calcular π
    double pi_estimate = 4.0 * ((double)accepted / attempts);
    printf("Intentos: %d, Estimacion de pi: %.6f\n", attempts, pi_estimate);
    /*
	Intentos: 100, Estimacion de pi: 3.280000
	Intentos: 1000, Estimacion de pi: 3.120000
	Intentos: 10000, Estimacion de pi: 3.135600
	Intentos: 1000000, Estimacion de pi: 3.142272
	Intentos: 10000000, Estimacion de pi: 3.141573
	Intentos: 100000000, Estimacion de pi: 3.141724 
	*/

    return 0;
}
