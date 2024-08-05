#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define cant 50

void cargavector( int x, int y, int z, int w, int  *vx, int  *vy, int  *vz, int *vw, int i);
void mostrardatos(int  *vx, int  *vy, int  *vz, int *vw, int i);


main()
{
      int inicio=0,opc=0, i=0;
      int  c1, c2, c3, c4, v1[cant]={0}, v2[cant]={0}, v3[cant]={0}, v4[cant]={0};
    
      
      while(inicio!=3)
      {
         printf("PROGRAMA VELOCIDADES\n");
         printf("********************\n\n\n");
         printf("1-Cargar y guardar datos simulacion\n");
         printf("2-Cargar vectores aux y emitir reporte\n");
         printf("3-Salir\n");
         scanf("%i",&opc);
         switch(opc)
         {
             case 1:
                  printf("Datos:\n");
                  printf("-------\n\n");
                  printf("Ingresar hora: \n");
                  scanf("%d",&c1);
                  printf("Ingresar minutos: \n");
                  scanf("%d",&c2);
                  printf("Ingrese velocidad:\n");
                  scanf("%d",&c3);
                  printf("Ingrese codigo camion:\n");
                  scanf("%d",&c4);
               
                  cargavector(c1, c2, c3, c4, v1, v2, v3, v4,i);
                   
                  i++; 
                  getch();
                  system("CLS");
                  break;
             case 2:
                  
                  mostrardatos(v1, v2, v3, v4, i);
                  break;
             case 3:
                  inicio=3;
                  break;
         
      }
}
}
////////////////////////////////////////////////////////////////////////////////
void mostrardatos(int *vx, int *vy, int *vz, int *vw, int i)
{
     int max=0, j;
    
        
         for(j=0;j<i;j++)
         {
            
            if (*(vw+j) == 2 )
             { printf("%d\t %d\t %d\t %d\n",*(vx+j),*(vy+j),*(vz+j),*(vw+j));
             
               if (*(vz+j) > max) {   max=*(vz+j); }
             }
             
            
         }
            printf("maxima velocidad camion 2  %d\n",max);
    
}
////////////////////////////////////////////////////////////////////////////////
void cargavector(int x, int y, int z, int w, int *vx, int *vy, int *vz, int *vw, int i)
{
    
            *(vx+i)=x;
            *(vy+i)=y;
            *(vz+i)=z;
            *(vw+i)=w;
          
}
           
 

