#include <stdio.h>
#include <stdlib.h>
#include "cazador.h"
#include "dragon.h"

/*
*
*	Authors: Ainhoa Leonor y Antonio Delgado
*
*/

int main (){
    /*MENU DE INICIO*/
    int menu;
    /*LISTA DE CAZADORES*/
    cazador * Cazadores=(cazador *)malloc(sizeof(cazador)*2);//Array que contiene todos los cazadores
    int total_cazadores=0;//Contador del total de cazadores
    Cazadores[total_cazadores]=inicializarCazador("Paco",100,20,1,1000,1,&total_cazadores);
    Cazadores[total_cazadores]=inicializarCazador("Raúl",70,40,2,5000,5,&total_cazadores);
    /*LISTA DE DRAGONES*/
    dragon * Dragones=(dragon *)malloc(sizeof(dragon)*2);//Array que contiene todos los dragones
    int total_dragones=0;//Contador del total de dragones
    Dragones[total_dragones]=inicializarDragon("Pedro Sanchez",200,40,3,4000,2,&total_dragones);
    Dragones[total_dragones]=inicializarDragon("Rajoy",70,42,22,51000,4,&total_dragones);
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
            mostrarDragones(Dragones,total_dragones);
            break;
            
            case 3:
            
            anadirCazador(&Cazadores,&total_cazadores);
            break;
            
            case 4:
            anadirDragon(&Dragones,total_dragones);
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
