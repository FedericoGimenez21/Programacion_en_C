#include <stdio.h>
#include <stdbool.h>
// Alumno: Federico Gimenez

void main() {
	int M = 10;
	int N = 5;
	
	bool resA = N * 2 >= M && M - 3 > N;	
	printf("resultado inciso a) = %d\n",resA);
	
	bool resB = M > N * 3 || M == N;
	printf("resultado inciso b) = %d\n",resB);
	
	bool resC = !(M < N) || M > N + 2 && M == N + 4;
	printf("resultado inciso c) = %d\n",resC);
	
}