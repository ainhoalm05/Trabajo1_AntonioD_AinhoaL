#include <stdio.h>
#include <stdlib.h>
#include "cazador.h"
#include "dragon.h"
#include "combate.h"
#include "utilidades.h"

/*
*
*	Authors: Ainhoa Leonor y Antonio Delgado
*  
*     
*/

int main (){
    /*MENU DE INICIO*/
    char menu;
    /*LISTA DE CAZADORES*/
    cazador * Cazadores=(cazador *)malloc(sizeof(cazador)*2);//Array que contiene todos los cazadores
    if (Cazadores== NULL)
    {
        printf("Error: no se pudo asignar memoria\n");
        return 1;
    }
    
    int total_cazadores=0;//Contador del total de cazadores
    Cazadores[total_cazadores]=inicializarCazador("Pacotracer Firewall",100,20,1,1000,1,&total_cazadores);
    Cazadores[total_cazadores]=inicializarCazador("Jose Luis 2008-R2",70,40,2,5000,5,&total_cazadores);
    int Cazador_elegido=0;
    /*LISTA DE DRAGONES*/
    dragon * Dragones=(dragon *)malloc(sizeof(dragon)*2);//Array que contiene todos los dragones
    if (Dragones == NULL){
        printf("Error: no se pudo asignar memoria\n");
        return 1;
    }
    int total_dragones=0;//Contador del total de dragones
    Dragones[total_dragones]=inicializarDragon("Su Sanchidad",200,40,3,4000,2,&total_dragones);
    Dragones[total_dragones]=inicializarDragon("Rajoy",70,42,4,51000,4,&total_dragones);
    int Dragon_elegido=0;//inicializamos a 0 para comprobar si no se eligió
    do{
        system("clear");
        
        system("cat LOGO.txt\n");
        printf("\nELIGE UNA OPCIÓN\n");
        printf("1. ELIGE CAZADOR\n");
        printf("2. ELIGE DRAGÓN\n");
        printf("3. AÑADIR CAZADOR\n");
        printf("4. AÑADIR DRAGON\n");
        printf("5. MOSTRAR ORO\n");
        printf("6. INICIAR COMBATE\n");
        printf("7. SALIR\n");
        scanf("%c",&menu);
        
        if (atoi(&menu) < 7 && atoi(&menu) >= 1)
        {
            
            switch (atoi(&menu))
            {
                
                case 1:
                system("clear");
                mostrarCazadores(Cazadores,total_cazadores);
                printf("Elige El héroe que salvará al reino: ");
                scanf("%d",&Cazador_elegido);
                cazador CazadorJugable=Cazadores[Cazador_elegido-1];
                break;
                
                case 2:
                system("clear");
                mostrarDragones(Dragones,total_dragones);
                printf("Elige el dragón que va a morir: ");
                scanf("%d",&Dragon_elegido);
                dragon DragonJugable=Dragones[Dragon_elegido-1];
                break;
                
                case 3:
                system("clear");
                anadirCazador(&Cazadores,&total_cazadores);
                
                break;
                
                case 4:
                system("clear");
                anadirDragon(&Dragones,&total_dragones);
                break;
                
                case 5:
                system("clear");
                printf("Oro de tu cazador %d",CazadorJugable.Oro);
                getchar();
                getchar();

                //mostrarpuntuacion();
                break;
                case 6:
                if (Cazador_elegido!=0&&Cazador_elegido<=total_cazadores)
                {
                    if (Dragon_elegido!=0&&Dragon_elegido<=total_dragones)
                    {
                        
                        iniciocombate(&CazadorJugable,&DragonJugable);//POSICION PROVISIONAL
                    }else{
                    printf("Elige un Dragón");
                    getchar();
                    getchar();
                    }
                    
                }else{
                    printf("Elige un cazador");
                    getchar();
                    getchar();
                }
                
                
                break;
                default:
                break;
            }
        }
    }while (atoi(&menu) != 7);
    free(Dragones);
    free(Cazadores);
    return 0;
}
