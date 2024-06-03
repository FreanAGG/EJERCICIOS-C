/*Realice un programa que dibuje en pantalla un triangulo rectangulo utilizando asteriscos de esta forma
*
**
***
****
Permitir que el usuario ingreso el tamaño de los catetos (ingresar un solo numero, dado que son iguales)
*/

#include <stdio.h>

int main ()
{
	int catetos, i, j ;
	
	printf("INGRESE TAMANIO DE CATETOS = ");
	scanf("%d", &catetos);
	
	for (i = 0 ; i <= catetos; i++){ //
		for(j = 0 ; j < i ; j++){ // 1
			printf("* ");
		}
		printf("\n");
	}
}