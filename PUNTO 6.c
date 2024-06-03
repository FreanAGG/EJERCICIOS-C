/*Permite el ingreso de 5 letras que componen una palabra. Al finalizar mostrar en pantalla la palabra
formada por los codigos ASCII de cada letra a los que se le sumo el valor 5.*/

#include <stdio.h>

int main ()
{
	unsigned char A, B, C, D, E;
	
	printf("INGRESE UNA LETRA: ");
	A = getchar() + 5;
	getchar();
	printf("\nINGRESE UNA LETRA: ");
	B = getchar() + 5;
	getchar();
	printf("\nINGRESE UNA LETRA: ");
	C = getchar() + 5;
	getchar();
	printf("\nINGRESE UNA LETRA: ");
	D = getchar() + 5;
	getchar();
	printf("\nINGRESE UNA LETRA: ");
	E = getchar() + 5;
	getchar();
	printf("PALABRA FORMADA = %c \%c %c %c %c", A, B, C, D, E );
		
	return 0;
}