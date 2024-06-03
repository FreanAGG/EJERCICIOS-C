/*Ingresar 3 valores enteros y calcular su promedio*/

#include <stdio.h>

int main()	
{
	int N1, N2, N3; 
	float PROMEDIO;
	
	printf("NOTA = ");							// Podemos hacerlo 1x1 
	scanf("%d", &N1);
	printf("\nNOTA = ");
	scanf("%d", &N2);
	printf("\nNOTA = ");
	scanf("%d", &N3);
	
	PROMEDIO = (N1 + N2 + N3) / (float) 3;		// La division de enteros da ENTEROS. (TRUNCA). Debo hacer Casteo.
	
	printf("\nPROMEDIO = %.2f", PROMEDIO);
}

// scanf("%d%d%d", &n1, &n2, &n3); 			Ingresar los 3 valores juntos.
// PROMEDIO = (float) (N1 + N2 + N3) / 3;	Otra forma de hacer el CASTEO.
// PROMEDIO = (N1 + N2 + N3) / 3.0;			Otra forma de hacer el CASTEO.