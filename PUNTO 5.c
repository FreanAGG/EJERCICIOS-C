/*Permitir el ingreso de la superficie de un circulo y determinar su diametro utilizando la funcion sqrt(), que retoma la raiz cuadrada
de un flotante y esta asociada a la cabezera math.h*/

#include <stdio.h>
#include <math.h>
#define PI 3.14

int main ()
{
	float SUPERFICIE; 
	double DIAMETRO;
	
	printf("SUPERFICIE DEL CIRCULO = ");
	scanf("%f", &SUPERFICIE); 
	
	
	DIAMETRO = sqrt(SUPERFICIE);
	
	printf("DIAMETRO = %1f ", DIAMETRO);
}