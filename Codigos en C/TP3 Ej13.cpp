#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*13. DESARROLLE UN ALGORITMO QUE REALICE LA SUMATORIA DE LOS NÚMEROS ENTEROS
PARES COMPRENDIDOS ENTRE EL 1 Y EL 200, IMPRIMA LOS NÚMEROS Y SU SUMATORIA.
EFECTUAR EL EJERCICIO UTILIZANDO UNA FUNCIÓN PARA DETERMINAR SI EL NÚMERO ES PAR
O NO.*/
void parOimpar(int n);
int main()
{
	int cont = 0;
	for(int i = 1; i <=200; i++)
	{
		printf("\n %d \n", i);
		if(i % 2 == 0)
		{
			cont = cont +i;
		}	
		parOimpar(i);
	}
	printf("\n La sumatoria de los numeros pares entre 1 y 200 es: %d", cont);
}
void parOimpar(int n)
{
	if(n % 2 == 0)
	{
		printf("\n El numero ingresado es par.\n");
	}
	else
	{
		printf("\n El numero ingresado es impar.\n");
	}
	
}
