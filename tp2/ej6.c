#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

// Alumno: Federico Gimenez

void main() {

    printf("CHAR_BIT  : %d  \t\tMAX: %d \t MIN %d\n\n", CHAR_BIT, CHAR_MAX, CHAR_MIN);
    printf("INT_MAX   : %d  \tINT_MIN: %d\n", INT_MAX, INT_MIN);
    printf("LONG_MAX  : %ld LONG_MIN: %ld\n", (long) LONG_MAX, (long) LONG_MIN);
    printf("SHRT_MAX  : %d \t\tSHRT_MIN: %d\n", SHRT_MAX, SHRT_MIN);
    printf("UINT_MAX  : %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX : %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX : %d\n", (unsigned short) USHRT_MAX);


    printf("\n\nSize para almacenar un float: %d bytes \n", sizeof(float));
    printf("Size para almacenar un double: %d bytes \n", sizeof(double));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("Precision float: %d\n", FLT_DIG );
    printf("Precision double: %d\n", DBL_DIG );

    return;
}
