#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int codigo();
float importe(int e, int s);
void informe(int i, float im);
int main()
{
	int ident, cod1, cod2, edad;
	int ban = 0;
	float import, iMax;
	float imporTot = 0;
	int cont = 0;
	char pass[20];
	char resp[3];
	do
	{
		printf("Ingrese la edad: ");
		fflush(stdin);
		scanf("%d", &edad);
		printf("Ingrese identificacion: ");
		fflush(stdin);
		scanf("%d", &ident);
		printf("Ingrese su password: ");
		fflush(stdin);
		scanf("%s", pass);
		printf("\nIngrese el codigo de estacion de entrada: ");
		cod1 = codigo();
		cont = cont +1;
		printf("Ingrese identificacion: ");
		fflush(stdin);
		scanf("%d", &ident);
		printf("Ingrese su password: ");
		fflush(stdin);
		scanf("%s", pass);
		printf("\nIngrese el codigo de estacion de salida: ");
		cod2 = codigo();
		import = importe(cod1, cod2);
		if(edad < 5)
		{
			import = 0;
		}
		if(ban = 0)
		{
			iMax = import;
			ban = 1;
		}
		else if(import > iMax)
		{
			iMax = import;
		}
		imporTot = imporTot + import;
		informe(ident, import);
		printf("\nEl numero de viaje es: %d", cont);
		printf("\n¿Deaa ingresar otro viaje?");
		fflush(stdin);
		scanf("%s", resp);
	}
	while(!strcmp(resp, "Si") || !strcmp(resp, "SI") || !strcmp(resp, "si"));

	printf("\nCantidad de personas que viajaron: %d", cont);
	printf("\nImporte total de viajes: %f", imporTot);
	printf("\nImporte mayor abonado: %f", iMax);

}
int codigo()
{
	int est;
	printf("\n1 Moreno \n2 Paso del rey \n3 Merlo \n4 Padua \n5 Ituzaingó \n6 Castelar \n7 Morón \n8 Haedo \n9 Ramos Mejía \n10 Ciudadela \n11 Liniers \n12 Villa Luro \n13 Floresta \n14 Flores \n15 Caballito \n16 Once\n");
	fflush(stdin);
	scanf("%d", &est);
	return est;
}
float importe(int e, int s)
{
	float imp;
	if(e > s)
	{
		imp = (e-s)*2;
	}
	else
	{
		imp = (s-e)*2;
	}
	return imp;
}
void informe(int i, float im)
{
	printf("\nLa identificacion del pasajero es: %d", i);
	printf("\nEl importe del pasajero es: %f", im);
}