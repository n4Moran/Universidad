#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float montoDeExpensa(char c, int p, char co);
int main()
{
	int dept;
	char cat;
	int pro;
	char coch;
	char rm[3];
	int mult;
	char resp[3];
	printf("\n¿Desea registrar datos de departamentos?: ");
	fflush(stdin);
	scanf("%s", resp);
	while(!(strcmp(resp, "Si")))
	{
		printf("\nIngrese el numero de departamento: ");
		fflush(stdin);
		scanf("%d", &dept);
		printf("\nIngrese la categoria del departamento \np = piso \ns = semi-piso \nd = dos ambientes \nm = monoambiente");
		fflush(stdin);
		scanf("%c", &cat);
		printf("\nIndique si es de uso profesional o particular (1 = Uso profesional, 0 =Uso particular)");
		fflush(stdin);
		scanf("%d", &pro);
		printf("\nIndique si el departamento tiene o no, cochera S/N");
		fflush(stdin);
		scanf("%c", &coch);
		
		printf("\n¿El departamento tiene multas por incumplimiento del reglamento de convivencia?");
		fflush(stdin);
		scanf("%s", rm);
		if(!(strcmp(rm, "Si")))
		{
			printf("\nIngrese el monto de multas: ");
			fflush(stdin);
			scanf("%f", &mult);
		}
		else
		{
			mult = 0;
		}
		printf("\nEl monto a pagar del departamento es: %f", montoDeExpensa(cat, pro, coch)+mult);
		printf("\n¿Desea seguir registrando datos de departamentos?: ");
		fflush(stdin);
		scanf("%s", resp);	
	}	
}
float montoDeExpensa(char c, int p, char co)
{
	int m;
	int pro =0;
	int coch = 0;
	switch(c)
	{
		case 'p':
			m = 4000;
			break;
		case 's':
			m = 3000;
			break;
		case 'd':
			m = 2000;
			break;
		case 'm':
			m = 1000;
			break;		
	}
	if(p == 1)
	{
		pro=2500;
	}
	if(co == 'S')
	{
		coch = 1500;
	}
	float exp = m+pro+coch;
	return exp;
}
