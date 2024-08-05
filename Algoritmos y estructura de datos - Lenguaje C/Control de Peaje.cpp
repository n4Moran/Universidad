#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float importeAcobrar(float b, int d, int h);
float vuelto(float ic, float i);
void informe(float vuel, float import);
int main()
{
	char cat[10];
	int dia, base;
	int pases = 0;
	int cont = 0;
	float imp;
	float total = 0;
	char pico;
	char resp[3];
	printf("\n¿Desea ingresar una nueva venta? Si/No ");
	fflush(stdin);
	scanf("%s", resp);
	while(!strcmp(resp, "Si") || !strcmp(resp, "SI") || !strcmp(resp, "si"))
	{
		printf("\nIngrese la categoria del vehiculo \nmoto \nauto \ncamioneta \ncamión\n");
		fflush(stdin);
		scanf("%s", cat);
		printf("\nIngrese el día de la semana  \n1 (lunes) \n2 (martes) \n3 (miércoles) \n4 (jueves) \n5 (viernes) \n6 (sábado) \n7 (domingo)\n");
		fflush(stdin);
		scanf("%d", &dia);
		printf("\nIndique si es horario pico o no. a = Si / b = No ");
		fflush(stdin);
		scanf("%c", &pico);
		printf("\nIngrese el importe: ");
		fflush(stdin);
		scanf("%f", &imp);
		if(!strcmp(cat, "moto"))
		{
			base = 5;
		}
		else if(!strcmp(cat, "auto"))
		{
			base = 10;
			if(pico == 'a')
			{
				cont=cont+1;
			}
		}
		else if(!strcmp(cat, "camioneta"))
		{
			base = 15;
			
		}
		else
		{
			base = 20;
		}
		pases = pases +1;
		total = total + importeAcobrar(base, dia, pico);
		informe(vuelto(importeAcobrar(base, dia, pico), imp), importeAcobrar(base, dia, pico));
		printf("\n\n¿Desea seguir ingresando ventas? Si/No ");
		fflush(stdin);
		scanf("%s", resp);
	}
	printf("\nLa cantidad de ventas de categoria auto en horario pico es: %d", cont);
	printf("\nEl total de pases vendidos es de: %d \nEl total recaudado es de: %f", pases, total);
}
float importeAcobrar(float b, int d, int h)
{
	if(h == 'a' && !(d == 6) && !(d == 7))
	{
		b = b + (b*20/100);
	}
	else
	{
		b = b - (b*20/100);
	}
	return b;
}
float vuelto(float ic, float i)
{
	int v = i - ic;
	return v;
}
void informe(float vuel, float import)
{
	system("cls");
	printf("\t\tEl importe a cobrar es: %f \n\t\tEl vuelto es: %f", import, vuel);
}