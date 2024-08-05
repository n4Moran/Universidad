#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int potencial(int c, int d, int p);
void desarrollo(int code, int res);

int main()
{
	int cod;
	int dias;
	char pro[3];
	int cali;
	int coo;
	int ayc = 0;
	char resp[3];
	int cont = 0;
	int band = 0;
	int diaMax;
	int codMax;
	
	printf("\n¿Desea ingresar un empleado? Si/No ");
	fflush(stdin);
	scanf("%s", resp);
	while(!strcmp(resp, "Si"))
	{
		printf("\nIngrese el codigo del empleado: ");
		fflush(stdin);
		scanf("%d", &cod);
		printf("\nIngrese los dias trabajados: ");
		fflush(stdin);
		scanf("%d", &dias);
		printf("\nIndique si es profesional: Si/No ");
		fflush(stdin);
		scanf("%s", pro);
		printf("\nIngrese la cooperacion. Valor del 1 al 5: ");
		fflush(stdin);
		scanf("%d", &coo);
		printf("\nIngrese la capacidad de analisis y creatividad. Valor del 1 al 5: ");
		fflush(stdin);
		scanf("%d", &ayc);
		
		if(!strcmp(pro, "Si"))
		{
			printf("\nIngrese la calidad y cantidad de trabajo. Valor del 1 al 5: ");
			fflush(stdin);
			scanf("%d", &cali);
			float p = (coo + ayc + cali)/3;
			if(p <3)
			{
				cont++;
			}
			desarrollo(cod, potencial(cali, coo, ayc));
		}
		else
		{
			ayc = 0; 
			desarrollo(cod, potencial(cali, coo, ayc));
		}
		
		if(band == 0)
		{
			diaMax = dias;
			codMax = cod;
			band = 1;
		}
		else if(dias > diaMax)
		{
			diaMax = dias;
			codMax = cod;
		}
		
		printf("\n¿Desea ingresar otro empleado? Si/No ");
		fflush(stdin);
		scanf("%s", resp);
				
	}
	printf("\nLa cantidad de empleados profesionales Fuera de Nivel son: %d", cont);
	printf("\n El codigo de empleado con mayor cantidad de días trabajados es %d", codMax);

}
	int potencial(int c, int co, int cy)
	{
		int a;
		if(c>=4 && co>=4 && cy>=4)
		{
			a = 1;
		}
		else
		{
			a = 0;
		}
		return a;
	}
	void desarrollo(int code, int res)
	{
		printf("\n%d", res);
		if(res == 1)
		{
				printf("\nEL EMPLEADO TIENE POTENCIAL DE DESARROLLO\n");
		}
		else
		{
			printf("\nEL EMPLEADO NO TIENE POTENCIAL DE DESARROLLO\n");
		}
		printf("\nEl codigo del empleado es: %d\n", code);
	}
	
