/*Realizar un programa que permita el ingreso de un valor de temperatura y muestre los valores equivalentes en las tres escalas
(Celsius, Fahrenheit y Kelvin). Dado que no se sabe en que escala se ingreso el valor, deberan contemplarse los 3 casos*/

#include <stdio.h>

int main ()
{
	float temperatura, celsius, farenheit, kelvin;
	
	printf("INGRESE TEMPERATURA: ");
	scanf("%d", &temperatura);
	
	celsius = (temperatura - 32) * 5/9;
	farenheit = (temperatura * 9/5) + 32;
	kelvin = (temperatura + 273.15);
	
	printf("\nCelsius: %.2f,\nFarenheit: %2.f \nKelvin: %2.f ", celsius, farenheit, kelvin);
	
	
}