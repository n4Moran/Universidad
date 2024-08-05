#include <stdio.h>
#include <stdlib.h>
/*8. REALIZAR UNA FUNCIÓN QUE RECIBA UN NÚMERO, MUESTRE LOS 5 NÚMEROS ANTERIORES
Y LOS 5 NÚMEROS SIGUIENTES AL NÚMERO INGRESADO.*/
void antesYdespues(int a)
{
	for(int i = 1; i <=5; i++)
	{
		a= a+1;
		fflush(stdin);
		printf("\n%d", a);
	}

	for(int j = 1; j <=5; j++)
	{
		a = a-1;
		printf("\n%d", a);
	}
}
int main()
{
	int num;
	printf("\nIngrese un numero: ");
	fflush(stdin);
	scanf("%d", &num);
	antesYdespues(num);
}