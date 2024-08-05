#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*10. CREAR UN PROGRAMA PARA CALCULAR EL SALARIO SEMANAL DE UNOS EMPLEADOS A LOS
QUE SE LES PAGA 50 PESOS POR HORA SI ÉSTAS NO SUPERAN LAS 35 HORAS. CADA HORA POR
ENCIMA DE 35 SE CONSIDERARÁ EXTRA Y SE PAGA A 75 PESOS.
EL PROGRAMA PIDE LAS HORAS DEL TRABAJADOR Y DEVUELVE EL SALARIO QUE SE LE DEBE
PAGAR.
ADEMÁS EL PROGRAMA DEBE PREGUNTAR SI DESEAMOS CALCULAR OTRO SALARIO, SI ES ASÍ
EL PROGRAMA SE VUELVE A REPETIR
EFECTUAR EL EJERCICIO CON UNA FUNCIÓN QUE CALCULE EL SALARIO.*/
int salario(int h);
int main()
{
	int hs;
	char resp[3];
	do
	{
		printf("\nIngrese la cantidad de horas trabajadas: ");
		fflush(stdin);
		scanf("%d", &hs);
		printf("\nEl sueldo del empleado es: %d \n", salario(hs));
		printf("\n¿Desea calcular otro salario? ");
		fflush(stdin);
		scanf("%s", resp);
	}
	while(!(strcmp(resp, "Si")));
}
int salario(int h)
{
	int Total;
	if(h>35)
	{
		int sueldo = 35*50;
		int extra = (h-35)*75;
		Total = sueldo + extra;			
	}
	else
	{
		Total = h*50;
	}
	return Total;
}