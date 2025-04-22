#include <stdio.h>

// Alumno: Federico Gimenez

/*
En este codigo, las siguientes variables pueden ser convertidas a macros:

luna_mi: La distancia media entre la Tierra y la Luna en millas es un valor fijo.
millas: El factor de conversion de millas a kilometros es un valor constante.
*/


#define LUNA_MI 238906 
#define MILLAS 1.609

int main() {
	
	float luna_km;
	
	
    printf("Distancia a la Luna %d millas\n", LUNA_MI);
    luna_km = LUNA_MI * MILLAS_A_KM;
    printf("En kilometros es %.2f Km.\n", luna_km);

	return 0;
}
