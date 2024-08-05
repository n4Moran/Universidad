Ejercicio final febrero fecha 14
tama?o de los vectores en 50 posiciones.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define tam 50

void cargavector(int x, char y,  int *vx, char *vy,  int j);

void armarresultados(int *vx, char *vy,  int i);

char buscar_barrio (int x);  // opcional

int menu(); // opcional

main()
{
      int opc=0, i=0,  nro_parada;
      int vnro_parada[tam]={0};
      char  barrio, vbarrio[tam]={'z'};         
      
      opc=menu();
         
      while(opc!=3)
      {
         
         switch(opc)
         {
             case 1:
                  printf("Ingresar datos:\n");
                  printf("-------\n\n");
                  printf("N?mero de parada de 1 a 10: \n");
                  fflush(stdin);
                  scanf("%d",&nro_parada);
                 
                 // busco barrio en base al n?mero de parada
                  barrio=buscar_barrio(nro_parada);
                     
                  cargavector(nro_parada, barrio, vnro_parada,  vbarrio, i);
                  
                  i=i+1;     
                  getch();
                  system("CLS");
                  break;
             case 2:
                  armarresultados( vnro_parada, vbarrio, i);
                  getch();
                  break;  
                               
         }
         opc=menu();
}
}
////////////////////////////////////////////////////////////////////////////////
//                     parada  barrio
void armarresultados(int *vx, char *vy,  int i)
{ 
     int j, cant=0, cantl=0, cantf=0, cantp=0, cantc=0;
     
     char barrio, barrioparadai, barrioparadaf;
     
     // Cuento todas las paradas
     for(j=0;j<i;j++)
        { 
            // cuento todas las paradas
			cant++;        
    
             // Muestro los datos de cada parada
          	  
             printf("Nro de parada %d\t Barrio %c\n",*(vx+j),*(vy+j));
             
             // cuento la cantidad de paradas por barrio
             
			switch(*(vy+j))
			{
				case 'l' : cantl=cantl+1; break;
				case 'c' : cantc=cantc+1; break;
				case 'f' : cantf=cantf+1; break;
				case 'p' : cantp=cantp+1; break;
			}
		
			 // guardo el barrio de la primera y ?ltima parada
			 if (j==0) { barrioparadai=*(vy+j);
			 }
			 
			 if (j==i-1) { barrioparadaf=*(vy+j);
			 }
			 
                         
                                       
        }  // fin del for
      
	
        // Informe punto a
        
        printf("Cantidad de paradas por barrio Liniers %d\t Flores %d\t Caballito %d\t Palermo %d\n", cantl, cantf, cantc, cantp);
        
        if (cant==cantl || cant==cantf || cant==cantc || cant== cantp) {
        printf("Todas las paradas son del mismo barrio\n");}
        else  {printf("No todas las paradas son del mismo barrio");}
        
         // Informe punto b
        if (barrioparadai==barrioparadaf) {
        printf("La l?nea de colectivo empieza y termina en el mismo barrio %c", barrioparadai);}
		 else printf("La l?nea de colectivo no empieza y termina en el mismo barrio");
        system("pause");
}


////////////////////////////////////////////////////////////////////////////////
void cargavector (int x, char y,  int *vx, char *vy,   int j)
{
     *(vx+j)=x;
     *(vy+j)=y;
}
int menu()
{
	     int opc;
	     printf("PROGRAMA COLECTIVOS\n");
         printf("*******************\n\n\n");
         printf("1-Cargar datos de paradas de colectivos\n"); 
         printf("2-Consultas\n");
         printf("3-Salir\n");
         scanf("%i",&opc);
         return opc;
}
char buscar_barrio (int x)
{
	switch(x)
	{
		case 1: 
		case 2:
		case 3: return 'l'; break;
		case 4:
		case 5: return 'f'; break;
		case 6:
		case 7: return 'c'; break;
		case 8:
		case 9:
		case 10: return 'p'; break;
			
	}
}