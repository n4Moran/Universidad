#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*6. REALIZAR UNA FUNCI�N LLAMADA NEGATIVO, QUE TOMA UN N�MERO ENTERO COMO
PAR�METRO, Y DEVUELVE 1 SI ES NEGATIVO O 0 SI NO LO ES.*/

int negativo(int a)
{
	if(a < 0)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	
	return a;
	
} 
int main()
{
	int b;
	printf("\n Ingrese un numero: ");
	scanf("%d", &b);
	printf("\n %d", negativo(b));
}
