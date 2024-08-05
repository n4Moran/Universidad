#include<stdio.h>
#include<conio.h>
#define tam 30
//Prototipo de Funciones
int menu();

char fcandidato_ganador(int *fdni, char *fcandidato, int i);
void cargar_datos(int x, char y, int *vx, char *vy, int j);


//inicio del cuerpo del programa
main()
{
       int vdni[tam]={0}, vmenu;//variables locales al main()
       int dni, i=0;
       char vcandidato[tam]={'Z'};  // inicializo en Z
       char candidato, candidato_ganador;
       
       char usuario[10];
       int clave;
       
        printf("VOTACION\n");
        printf("*****************\n\n\n");
         printf("Ingresar usuario\n");
         scanf("%s",&usuario);
      
         do
         {
         printf("Ingrese clave: \n");
         fflush(stdin);
         scanf("%d",&clave);}
         while (clave != 123);       
       
       vmenu=menu();//carga opcion del menu()
       
        while(vmenu!=3)
      {
                      switch(vmenu)
                      {
                          case 1:
                                printf("Ingrese DNI: \n");
                                fflush(stdin);
                                scanf("%d",&dni);
                                printf("Ingrese Candidato A, B o C: \n");
                                fflush(stdin);
                                scanf("%c",&candidato);
                                cargar_datos(dni, candidato, vdni, vcandidato, i);
                                i++;
                          break;
                          case 2:
                               candidato_ganador=fcandidato_ganador(vdni, vcandidato, i);
                               if (candidato_ganador=='A') { printf ("Candidato ganador %c", candidato_ganador); printf(" Ironman");}
                                 else if (candidato_ganador=='B') { printf ("Candidato ganador %c", candidato_ganador); printf(" Capitan America");}
                                 else { printf("Candidato ganador %c", candidato_ganador); printf(" Hulk");}
                                 getch();
                          break;
                
                      }
       vmenu=menu();//llama a la funcion menu() para evitar el bucle while.
                      
      }
}
///////////////////////////////////////////////////////////////////////////////////
void cargar_datos(int x, char y, int *vx, char *vy, int j)
{
   *(vx+j)=x;
   *(vy+j)=y;
    
}
//////////////////////////////////////////////////////////////////////////////////
char fcandidato_ganador(int *fdni, char *fcandidato, int i)
{
   
        int ca=0, cb=0, cc=0, c=0, j, candidato_ganador;
        
                                
              for(j=0;j<i; j++)
              {  if (*(fcandidato+j)=='A') {ca=ca+1;}
                 else if (*(fcandidato+j) == 'B') { cb=cb+1;}
                      else if (*(fcandidato+j)=='C') { cc=cc+1;}
                 
              }
              
              printf ("Contadores\n");
              printf("%d\t%d\t%d\n", ca, cb, cc);
              
              if ((ca >= cb) && (ca >= cc)) { candidato_ganador='A';}
              
              if ((cb >= ca) && (cb >= cc)) { candidato_ganador='B';}
              
              if ((cc >= cb) && (cc >= ca)) { candidato_ganador='C';}
              
              return candidato_ganador;
}

////////////////////////////////////////////////////////////////////////////////
int menu()
{
    int inicio;
    //primer menu accines del programa
   
    printf("1-Votar\n");
    printf("2-Mostrar Resultados\n");
    printf("3-Salir\n");
    scanf("%i",&inicio);
    return inicio;//retorno la opcion elegida
}
