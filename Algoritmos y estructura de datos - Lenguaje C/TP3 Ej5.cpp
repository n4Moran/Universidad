#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*5. REALIZAR FUNCIÓN QUE TOME DOS NÚMEROS REALES COMO PARÁMETROS Y DEVUELVA UN
NÚMERO REAL QUE SERÍA LA MEDIA DE LOS DOS NÚMEROS.*/
float media(float a, float b);
int main()
{
	float num1, num2;
	printf("Ingrese el primer numero: ");
	fflush(stdin);
	scanf("%f", &num1);
	printf("Ingrese el segundo numero: ");
	fflush(stdin);
	scanf("%f", &num2);
	printf("\nLa media de ambos numeros es: %f", media(num1, num2));
}
float media(float a, float b)
{
	float m = (a+b)/2;
	return m;
}