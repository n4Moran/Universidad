#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float montoTotal(char cli[3], int co, int in, char va, char aco[3]);
void MasGasto(float mont, char ca[10]);
int main()
{
	int contF = 0, contE = 0, contI = 0, contM = 0;
	int ban = 0, comb, inf;
	float recaudado = 0, total = 0;
	float montMax = 0;
	int contComb = 0;
	int cliNoFrec = 0, cliFrec = 0;
	char resp[3], cam[10], client[3], camMax[10], verComb, ordComb, vaso, ordAcomp[3];
	
	printf("\n¿Desea ingresar una nueva venta? SI/NO: ");
	fflush(stdin);
	scanf("%s", resp);
	
	while(!strcmp(resp, "SI"))
	{
		printf("\nIngrese el nombre del camarero/a (Fernanda, Elizabeth, Ivan o Matias): ");
		fflush(stdin);
		scanf("%s", cam);
		if(!strcmp(cam, "Fernanda") || !strcmp(cam, "fernanda"))
		{
			contF++;
		}
		else if(!strcmp(cam, "Elizabeth") || !strcmp(cam, "elizabeth"))
		{
			contE++;
		}
		else if(!strcmp(cam, "Ivan") || !strcmp(cam, "ivan"))
		{
			contI++;
		}
		else if(!strcmp(cam, "Matias") || !strcmp(cam, "matias"))
		{
			contM++;
		}
		
		printf("\n¿Es cliente frecuente? SI/NO: ");
		fflush(stdin);
		scanf("%s", client);
		
		printf("\n¿Desea ver los combos? ('S'=SI/'N'=NO) ");
		fflush(stdin);
		scanf("%c", &verComb);
		if(verComb == 'S')
		{
			printf("\nCombo 1 : Un cafe normal mediano, un Te de manzanilla mediano y 8 medialunas. $600");
			printf("\nCombo 2 : Un submarino mediano, un cafe con leche mediano , 4 tostados y 2 porciones de Cheesecake. $1000");
			printf("\nCombo 3 : Un submarino mediano, un cafe con leche mediano, un te negro mediano y un capuchino mediano; \nY para acompañar tiene una porcion de chocotorta, una porcion de Cheesecake, una porcion de selva negra y una porcion de torta de coco. $1400\n");
			printf("\nÂ¿Desea ordenar un combo? ('S'=Si/'N'=No): ");
			fflush(stdin);
			scanf("%c", &ordComb);
			if(ordComb == 'S')
			{
				contComb++;
				printf("\nIngrese el numero del combo (1, 2 o 3): ");
				fflush(stdin);
				scanf("%d", &comb);
			}
		}
		else
		{
			comb = 0;
		}
		printf("\nIngresar infusion: \n1-Cafe normal \n2-Cafe con leche \n3-Capuccino \n4-Submarino \n5-Te negro \n6-Te de manzanilla \n(si no quiere ninguna ingresar 0): ");
		fflush(stdin);
		scanf("%d", &inf);
		if(inf > 0)
		{
			printf("Indique el tamaño del vaso (a = Chico, b = Mediano, c = Grande): ");
			fflush(stdin);
			scanf("%c", &vaso);
		}
		else
		{
			vaso = 'd';
		}
		
		printf("\nIngresar acompañamiento: \nI.Porcion de cheesecake $200 \nII.Porcion de chocotorta $200 \nIII.Porcion de torta de coco $200 \nIV.Porcion selva negra $200 \nV.Precio por tostado $80 \nVI.Precio por medialuna $60 \n(si no quiere ninguna ingresar 0): ");
		fflush(stdin);
		scanf("%s", ordAcomp);
		total = montoTotal(client, comb, inf, vaso, ordAcomp);
		recaudado = recaudado + total;
		if(ban == 0)
		{
			montMax = total;
			strcpy(camMax, cam);
			ban = 1;
		}
		else if(montMax < total)
		{
			montMax = total;
			strcpy(camMax, cam);
		}
		
		printf("\nEl camarero que tomo la orden es: %s \nEl monto total a pagar es: $%f", cam, total);
		if(!strcmp(client, "SI"))
		{
			printf("\nEl cliente tuvo descuento por ser cliente frecuente");
			cliFrec++;
		}
		else if(!strcmp(client, "NO"))
		{
			cliNoFrec++;
		}
		printf("\n¿Desea seguir ingresando ventas? SI/NO: ");
		fflush(stdin);
		scanf("%s", resp);
	}
	MasGasto(montMax, camMax);
	printf("\nEl monto total recuadado por dia es: %f", recaudado);
	printf("\nEl numero de clientes No frecuentes es: %d", cliNoFrec);
	printf("\nEl numero de clientes frecuentes es: %d", cliFrec);
	printf("\nLa cantidad de combos vendidos es: %d", contComb);
	printf("\nEl camarero/a que mas ordenes tomo es: ");
	if(contF > contE && contF > contI && contF > contM)
	{
		printf("Fernanda");
	}
	else if(contE > contF && contE > contI && contE > contM)
	{
		printf("Elizabeth");
	}
	else if(contI > contE && contI > contF && contI > contM)
	{
		printf("Ivan");
	}
	else if(contM > contE && contM > contI && contM > contF)
	{
		printf("Matias");
	}
	else
	{
		printf("No hubo un camarero que haya vendido mas que otro");
	}
}

float montoTotal(char cli[3], int co, int in, char va, char aco[3])
{
	float montoTot = 0, monto = 0, infu = 0, acomp;
	switch(co)
	{
		case 1:
			monto = 600;
			break;
		case 2:
			monto = 1000;
			break;
		case 3:
			monto = 1400;
			break;
	}
	switch(in)
	{
		case 1:
			infu = 150;
			break;
		case 2:
			infu = 200;
			break;
		case 3:
			infu = 250;
			break;
		case 4:
			infu = 250;
			break;
		case 5:
			infu = 120;
			break;
		case 6:
			infu = 120;
			break;
	}
	if(va == 'b')
	{
		infu = infu + (infu*10)/100;
	}
	else if(va == 'c')
	{
		infu = infu + (infu*25)/100;
	}
	
	if(!strcmp(aco, "0"))
	{
		acomp = 0;
	}
	else if(!strcmp(aco, "V"))
	{
		acomp = 80;
	}
	else if(!strcmp(aco, "VI"))
	{
		acomp = 60;
	}
	else
	{
		acomp = 200;
	}
	montoTot = monto + infu + acomp;
	
	if(!strcmp(cli, "SI"))
	{
		montoTot = montoTot - (montoTot*10)/100;
	}
	
	return montoTot;
}
void MasGasto(float mont, char ca[10])
{
	printf("\nEl monto del cliente que mas gasto es de: $%f \nEl camarero/a que lo atendio es: %s", mont, ca);
}
