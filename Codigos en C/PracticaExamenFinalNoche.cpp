#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
void ProductoMaxFacturacion(float *vecF);
void DatosDePedido(int cod, int pro, int uni, float preUni, float *vf);
int menu();
int main()
{
	int opcion, codCli, codPro, unid =0, stock1=20, stock2=30, stock3=40, stock4=50, stock5=60;
	float vectFact[5], precio = 0; 
	
	opcion = menu();
	while(opcion !=4)
	{
		switch(opcion)
		{
			case 1:
				printf("\nIngrese el codigo de cliente: ");
				scanf("%d", &codCli);
				printf("\nIngrese el codigo del producto (1 al 5): ");
				scanf("%d", &codPro);
				printf("\nIngrese la cantidad de unidades: ");
				scanf("%d", &unid);
				
				switch(codPro)
				{
					case 1:
						if(unid <= stock1)
						{
							stock1 = stock1 - unid;
							precio = 100;
							DatosDePedido(codCli, codPro, unid, precio, vectFact);
						}
						else
						{
							precio = 0;
							unid=0;
							printf("\nNo alcanza el stock. ");
						}
						break;
					case 2:
						if(unid <= stock2)
						{
							stock2 = stock2 - unid;
							precio = 200;
							DatosDePedido(codCli, codPro, unid, precio, vectFact);
						}
						else
						{
							precio = 0;
							unid=0;
							printf("\nNo alcanza el stock. ");
						}
						break;
					case 3:
						if(unid <= stock3)
						{
							stock3 = stock3 - unid;
							precio = 300;
							DatosDePedido(codCli, codPro, unid, precio, vectFact);
						}
						else
						{
							precio = 0;
							unid=0;
							printf("\nNo alcanza el stock. ");
						}
						break;
					case 4:
						if(unid <= stock4)
						{
							stock4 = stock4 - unid;
							precio = 400;
							DatosDePedido(codCli, codPro, unid, precio, vectFact);
						}
						else
						{
							precio = 0;
							unid=0;
							printf("\nNo alcanza el stock. ");
						}
						break;
					case 5:
						if(unid <= stock5)
						{
							stock5 = stock5 - unid;
							precio = 600;
							DatosDePedido(codCli, codPro, unid, precio, vectFact);
						}
						else
						{
							precio = 0;
							unid=0;
							printf("\nNo alcanza el stock. ");
						}
						break;
				}
				
				break;
			case 2:
				for(int i=0; i<5; i++)
				{
					int codigo = i +1;
					printf("\nEl codigo del producto es: %d y su facturacion total es de: %f\n", codigo, vectFact[i]);
				}
				break;
			case 3:
				ProductoMaxFacturacion(vectFact);
				break;
		}
		
		opcion = menu();
	}
}
int menu()
{
	int op;
	printf("\tMENU");
	printf("\nOpcion 1 - Ingresar pedido del cliente y facturar \nOpcion 2 - Mostrar facturacion total por producto \nOpcion 3 - Determinar el producto con mayor facturacion \nOpcion 4 - Salir. ");
	printf("\nPorfavor Ingrese una opcion: ");
	scanf("%d", &op);
	return op;
}
void DatosDePedido(int cod, int pro, int uni, float preUni, float *vf)
{
	float montoTotal = 0;
	montoTotal = uni*preUni;
	printf("El codigo del cliente es: %d \nEl codigo de producto es: %d \nLa cantidad de unidades es %d \nEl Precio por unidad es %f \nEl precio total es: %f \n", cod, pro, uni, preUni, montoTotal);
	switch(pro)
	{
		case 1:
			vf[0] = montoTotal;
			break;
		case 2:
			vf[1] = montoTotal;
			break;
		case 3:
			vf[2] = montoTotal;
			break;
		case 4:
			vf[3] = montoTotal;
			break;
		case 5:
			vf[4] = montoTotal;
			break;
	}
	system("pause");
	system("cls");
	
}
void ProductoMaxFacturacion(float *vecF)
{
	int codProducto=1, MaxCod=0;
	float maxFact=0;
	for(int i=0; i<5; i++)
	{
		if(i==0)
		{
			maxFact = vecF[i];
			MaxCod = codProducto;
		}
		else if(maxFact<vecF[i])
		{
			maxFact = vecF[i];
			MaxCod = codProducto;
		}
		codProducto++;
	}
	printf("\nEl producto con mayor facturacion es el numero: %d \nSu total facturado es: %f", MaxCod, maxFact);
	system("pause");
}