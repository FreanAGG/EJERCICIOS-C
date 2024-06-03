/*Una rosticeria vende empanadas. La 12 sale 10000 y la unidad 1000
Ingresar la cantidad de empanadas y mostrar el monto final*/

#include <stdio.h>
#define MONTO_UNIDAD 1000
#define MONTO_DOCENA 10000

int main ()
{
	int docenas, unidades, empanadas, monto;
	
	printf("CANTIDAD DE EMPANADAS = ");
	scanf("%d", &empanadas);
	
	docenas = empanadas / 12;
	unidades = empanadas % 12;
	
	monto = docenas*10000 + unidades*1000;		// El + hace la separacion entre terminos, no hace falta parentesis.
	
	printf("El monto es %d", monto);
}