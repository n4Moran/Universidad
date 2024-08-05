#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void carga(float *v);
void premio(float *vc1, float *vc2);
void diaMinimo(float *vect);
int main()
{
	float caj1[7], caj2[7];
	printf("\nDatos de la cajera 1");
	carga(caj1); //estoy pasando la direccion de memoria del primer elemento. Si quisiera pasarle la posicion 2
	printf("\nDatos de la cajera 2"); // seria &caj1[1] o *(caj1 + 1)
	carga(caj2);
	premio(caj1,caj2);
	printf("\nCajera 1");
	diaMinimo(caj1);
	printf("\nCajera 2");
	diaMinimo(caj2);
}
void carga(float *v)
{
	float dato = 0;
	for(int i=0; i<7; i++)
	{
		printf("\nIngrese la recaudacion diaria: ");
		scanf("%f", &dato);
		*v = dato;
		v = v+1;
		
	}
}
void premio(float *vc1, float *vc2)
{
	float acum1 =0, acum2 =0;
	for(int i= 0; i<7 ;i ++)
	{
		acum1=acum1 + *vc1;
		acum2 =acum2 + *vc2;
		vc1 = vc1+1;
		vc2 = vc2+1;
	}
	if(acum1>acum2)
	{
		printf("\nLa cajera que recibio el premio es la cajera 1");
	}
	else if(acum2>acum1)
	{
		printf("\nLa cajera que recibio el premio es la cajera 2");
	}
	else
	{
		printf("\nHubo un empate");
	}
}
void diaMinimo(float *vect)
{
	float min;
	int diaMin;
	for(int i = 0; i<7; i++)
	{
		if(i == 0)
		{
			min = *(vect+i);
			diaMin = 1;
		}
		else if(min>*(vect+i))
		{
			min = *(vect+i);
			diaMin = i +1;
		}
	}
	printf("\nEl dia de menor venta fue el: %d", diaMin);
}