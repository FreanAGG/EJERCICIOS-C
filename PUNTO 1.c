/*Permitir el ingreso del radio (flotante) e imprimir en pantalla la longitud de la circunferencia y la superficie del circulo correspondiente*/

#include <stdio.h>
#define PI 3.14

int main()
{
	float RADIO, LONGITUD, SUPERFICIE;
	
	printf("RADIO = ");
	scanf("%f", &RADIO);
	
	LONGITUD = RADIO * 2 * PI; 
	SUPERFICIE = RADIO*RADIO*PI;
	
	printf("LONGITUD DE LA CIRCUNFERENCIA = %.2f", LONGITUD);
	printf("\nSUPERFICIE = %.2f", SUPERFICIE);
	
}