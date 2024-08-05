#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*2-REALIZAR UNA FUNCIÓN PARA INGRESAR DOS NÚMEROS Y OTRA PARA MOSTRAR POR
PANTALLA LOS VALORES INTERCAMBIANDO LAS VARIABLES.*/
void ingresaNum();
int intercambio(int a, int b);
	
int main()
{
	ingresaNum();
}
void ingresaNum()
{
	int num1, num2;
	printf("Ingrese el primer numero: ");
	fflush(stdin);
	scanf("%d", &num1);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &num2);
	intercambio(num1, num2);
}
int intercambio(int a, int b)
{
	int c;
	c = b;
	b = a;
	printf("Ahora el primer numero es: %d \nY el segundo numero es: %d", c, b);
	return 0;
}