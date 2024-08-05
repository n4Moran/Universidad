#include <stdio.h>
#include <stdlib.h>
/*7. ESCRIBIR UNA FUNCIÓN LLAMADA "EDADES" QUE RECIBA 2 EDADES Y DECIR CUÁL DE
ELLAS ES LA MAYOR Y CUANTO LE FALTA A LA MENOR PARA LLEGAR A LA EDAD MAYOR.*/
void edades(int a, int b)
{
	int c;
	if(a > b)
	{
		printf("\nLa edad mayor es: %d \nLa edad menor es: %d", a,b);
		c = a-b;
		printf("\nA la edad menor le faltan %d años para llegar a la edad mayor", c);
	}
	else if(b > a)
	{
		printf("\nLa edad mayor es: %d \n La edad menor es: %d", b,a);
		c = b-c;
		printf("\nA la edad menor le faltan %d años para llegar a la edad mayor", c);
	}
	else
	{
		printf("\nTienen la misma edad");
	}
	
}
int main()
{
	int edad1, edad2;
	printf("\nIngrese edad uno: ");
	fflush(stdin);
	scanf("%d", &edad1);
	printf("\nIngrese edad dos: ");
	fflush(stdin);
	scanf("%d", &edad2);
	edades(edad1, edad2);

}