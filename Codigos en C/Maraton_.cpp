#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void ganadores(int *vect_n, char *vect_c);
void cargaCorredores(int n, char c, int *vn, char *vc, int j);
int menu();
int main()
{
	int opcion, i=0, num, vectorNum[50];
	char cat, vectorCat[50];
	for(int k=0;k<=50; k++)
	{
		vectorNum[k] =0;
		vectorCat[k] = 'z';
	}
	
	opcion = menu();
	
	while(opcion !=3)
	{
		switch(opcion)
		{
			case 1:
				printf("\nIngrese el numero del corredor: ");
				fflush(stdin);
				scanf("%d", &num);
				printf("\nIngrese la categoria (A, B, C, D y E): ");
				fflush(stdin);
				scanf("%c", &cat);
				cargaCorredores(num, cat, vectorNum, vectorCat, i);
				i++;
				break;
			case 2:
				ganadores(vectorNum, vectorCat);
				break;
				
	 	}
	 	printf("\n\tMENU");
		printf("\nOpcion 1 - Registracion de corredores que llegaron a la meta \nOpcion 2 - Calculo de los ganadores: primero de cada categoria: \nOpcion 3 - Salir. \nIngrese una opcion: ");
		fflush(stdin);
		scanf("%d", &opcion);	
	}
	
}
int menu()
{
	int op;
	printf("\tMENU");
	printf("\nOpcion 1 - Registracion de corredores que llegaron a la meta \nOpcion 2 - Calculo de los ganadores: primero de cada categoria: \nOpcion 3 - Salir. \nIngrese una opcion: ");
	fflush(stdin);
	scanf("%d", &op);
	return op;
}
void cargaCorredores(int n, char c, int *vn, char *vc, int j)
{
	*(vn+j)=n;
	*(vc+j)=c;
}
void ganadores(int *vect_n, char *vect_c)
{
	int a=0, b=0, c=0, d=0, e=0;
	for(int i=0; i<=50; i++)
	{
		if(*(vect_c+i) == 'A' && a==0)
		{
			printf("\nCategoria A, numero del primer corredor: %d", *(vect_n+i));
			a=1;
		}
		else if(*(vect_c+i) == 'B' && b==0)
		{
			printf("\nCategoria B, numero del primer corredor: %d", *(vect_n+i));
			b=1;
		}
		else if(*(vect_c+i) == 'C' && c==0)
		{
			printf("\nCategoria C, numero del primer corredor: %d", *(vect_n+i));
			c=1;
		}
		else if(*(vect_c+i) == 'D' && d==0)
		{
			printf("\nCategoria D, numero del primer corredor: %d", *(vect_n+i));
			d=1;
		}
		else if(*(vect_c+i) == 'E' && e==0)
		{
			printf("\nCategoria E, numero del primer corredor: %d", *(vect_n+i));
			e=1;
		}
	}
	if(a==0)
	{
		printf("\nCategoria A, numero del primer corredor: 0");
	}
	if(b==0)
	{
		printf("\nCategoria B, numero del primer corredor: 0");
	}
	if(c==0)
	{
		printf("\nCategoria C, numero del primer corredor: 0");
	}
	if(d==0)
	{
		printf("\nCategoria D, numero del primer corredor: 0");
	}
	if(e==0)
	{
		printf("\nCategoria E, numero del primer corredor: 0");
	}
}

