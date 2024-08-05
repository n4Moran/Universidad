#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*11. DESARROLLE UN ALGORITMO QUE REALICE LA SUMATORIA DE LOS NÚMEROS ENTEROS
MÚLTIPLOS DE 5, COMPRENDIDOS ENTRE EL 1 Y EL 100, IMPRIMA LOS NÚMEROS Y SU
SUMATORIA.
EFECTUAR EL EJERCICIO UTILIZANDO UNA FUNCIÓN PARA DETERMINAR SI EL NÚMERO ES
MÚLTIPLO DE 5 O NO.*/
int multiplo(int n);
int main()
{
	int cont = 0;
	for(int i = 1; i <=100; i++)
	{
		if(i % 5 == 0)
		{ 
			printf("%d", i);
			cont = cont +i;
		}
		else
		{
			printf("%d", i);
		}
		
		multiplo(i);	
	}
	printf("\nLa sumatoria de los numeros multiplos de 5 es: %d", cont);
}
int multiplo(int n)
{
	if(n % 5 == 0)
	{

		printf("\nEl numero es multiplo de 5.\n");	
	}
	else
	{
		printf("\nEl numero no es multiplo de 5.\n");
	}
	return n;
}
