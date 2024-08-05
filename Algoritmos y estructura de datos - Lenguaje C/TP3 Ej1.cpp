#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*1-ESCRIBIR UN PROGRAMA QUE CALCULE LA POTENCIA DE UN NÚMERO INTRODUCIENDO EL
NÚMERO BASE Y EL EXPONENTE.
EFECTUAR EL EJERCICIO CON UNA FUNCIÓN QUE RECIBA LA BASE Y EL EXPONENTE Y
DEVUELVA EL RESULTADO A LA FUNCIÓN PRINCIPAL DEL PROGRAMA.*/
double calculo(double b, double p)
{
	double a = pow(b,p);
	return a;
}

int main()
{
	double base, potencia;
	printf("\nIngrese el número base: ");
	fflush(stdin);
	scanf("%lf", &base);
	printf("\nIngrese el exponente: ");
	fflush(stdin);
	scanf("%lf", &potencia);
	printf("%lf", calculo(base, potencia));
}