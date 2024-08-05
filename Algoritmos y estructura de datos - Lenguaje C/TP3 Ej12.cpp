#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*12. DESARROLLE UN ALGORITMO QUE PERMITA LEER UN VALOR CUALQUIER N Y ESCRIBA SI
DICHO NÚMERO ES PAR O IMPAR.
EFECTUAR EL EJERCICIO UTILIZANDO UNA FUNCIÓN PARA DETERMINAR SI EL NÚMERO ES PAR
O NO.*/
void parOimpar(int n);
int main()
{
	float num;
	printf("\n Ingrese un numero: ");
	fflush(stdin);
	scanf("%f", &num);
	parOimpar(num);
}
void parOimpar(int n)
{
	if(n % 2 == 0)
	{
		printf("\n El numero ingresado es par.");
	}
	else
	{
		printf("\n El numero ingresado es impar.");
	}
	
}