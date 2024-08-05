#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*9. DADA LA CANTIDAD DE HORAS TRABAJADAS, LA ANTIGÜEDAD, Y LA CATEGORÍA DEL
EMPLEADO.

a. SABIENDO QUE COBRA 50 PESOS POR CADA AÑO TRABAJADO Y QUE EL VALOR
DE LA HORA SEGÚN LA CATEGORÍA: 
CAT 1= 10 
CAT 2= 20 
CAT 3= 25
CAT 4= 30.
b. DETERMINAR SUELDO DEL EMPLEADO.
c. INFORMAR SI EL SUELDO SUPERA LOS 1000 PESOS.


EFECTUAR EL EJERCICIO CON AL MENOS 2 FUNCIONES: UNA PARA CALCULAR EL COBRO POR
ANTIGÜEDAD Y OTRA PARA CALCULAR EL COBRO POR HORAS.*/
int cobroPorHoras(int C, int H)
{
	
	switch(C)
	{
		case 1:
			H = H*10;
			break;
		case 2:
			H= H*20;
			break;
		case 3:
			H= H*25;
			break;
		case 4:
			H= H*30;
			break;
	}
	
	return H;
}
int cobroPorAntiguedad(int A)
{
	A = A*50;
	return A;
}
int main()
{
	int horas;
	int ant;
	int cat;
	printf("\n Ingrese la cantidad de horas trbajadas: ");
	fflush(stdin);
	scanf("%d", &horas);
	printf("\n Ingrese la antiguedad: ");
	fflush(stdin);
	scanf("%d", &ant);
	printf("\n Ingrese la categoria: ");
	fflush(stdin);
	scanf("%d", &cat);
	
	int a= cobroPorHoras(cat, horas);
	int b= cobroPorAntiguedad(ant);
	int c = a+b;
	printf("\n El sueldo por cantidad de horas trabajadas es: $ %d", cobroPorHoras(cat, horas) );
	printf("\n El sueldo del empleado es: $ %d", a+b);
	
	if(c > 1000)
	{
		printf("\n El sueldo supera los $1000");
	}
	else
	{
		printf("\n El sueldo no supera los $1000");		
	}
}
