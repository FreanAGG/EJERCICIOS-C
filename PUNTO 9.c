/*Realice un programa para ingresar el total de una factura (float) y el porcentaje a descontar (otro float)
Mostrar en pantalla el precio final. Por ejemplo para una factura de $120 y un descuento del 8.8% el precio es $109.44*/

#include <stdio.h>

int main ()
{
	float monto, descuento, porcentaje, monto_final;
	
	printf("INGRESE MONTO DE LA FACTURA: ");
	scanf("%f", &monto);
	printf("INGRESE DESCUENTO: ");
	scanf("%f", &porcentaje);
	
	descuento = (porcentaje / 100 * monto);
	monto_final= monto - descuento; 
	
	printf("El precio es: %f", monto_final);
}