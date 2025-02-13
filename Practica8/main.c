#include <stdio.h>
#include <stdlib.h>
#include "cazador.h"

/*
*
*	Authors: Ainhoa Leonor y Antonio Delgado
*
*/

int main (){
    int menu;
    /*MENU DE INICIO*/
    cazador * Cazadores=(cazador *)malloc(sizeof(cazador)*2);//Array que contiene todos los cazadores
    int total_cazadores=0;//Contador del total de cazadores
    Cazadores[total_cazadores]=inicializarCazador("Paco",100,20,1,1000,1,&total_cazadores);
    Cazadores[total_cazadores]=inicializarCazador("Raúl",70,40,2,5000,5,&total_cazadores);
    system("clear");
    do{
        
        printf("BIENVENIDO A DRACONIS EXTERMINATUS\n");
        printf("ELIGE UNA OPCIÓN\n");
        printf("1. ELIGE CAZADOR\n");
        printf("2. ELIGE DRAGÓN\n");
        printf("3. AÑADIR CAZADOR\n");
        printf("4. AÑADIR DRAGON\n");
        printf("5. MOSTRAR PUNTUACIONES\n");
        printf("6. SALIR\n");
        scanf("%d",&menu);
        switch (menu)
        {
            
            case 1:
            mostrarCazadores(Cazadores,total_cazadores);
            break;
            
            case 2:
            //mostrardragones();
            break;
            
            case 3:
            
            anadirCazador(&Cazadores,&total_cazadores);
            break;
            
            case 4:
            //anadirdragon();
            break;
            
            case 5:
            //mostrarpuntuacion();
            break;
            
            default:
            break;
        }
    }while (menu!=6);
    
    return 0;
}
