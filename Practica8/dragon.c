#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dragon.h"
#include "utilidades.h"
/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */

 char * HabilidadDragon(int Habilidad){
    switch (Habilidad) {
        case 1: return "Piroaliento";
        case 2: return "Desgarrar";
        case 3: return "Mordedura";
        case 4: return "Golpe de cola";
        default: return "ERROR";
        } 
}


 dragon inicializarDragon(char * Nombre,int Vida, int Atk,int Habilidad,int Oro, int Nivel,int * total_dragones){
    dragon Dragon;
    
    strcpy(Dragon.Nombre, Nombre);
    Dragon.Vida=Vida;
    Dragon.Atk=Atk;
    Dragon.Habilidad=Habilidad;
    Dragon.Oro=Oro;
    Dragon.Nivel=Nivel;
    
    *total_dragones+=1;
    return(Dragon);
 }
void anadirDragon(dragon ** Dragones, int * total_dragones){
    char Nombre[MAX_NOMBRE];
    int Vida;
    int Atk;
    int Habilidad;
    int Oro;
    int Nivel=1;
    
    *Dragones=(dragon *)realloc(*Dragones,sizeof(dragon)*(*total_dragones+1));
    
    printf("Introduce el nombre de tu Dragon\n");
    scanf(" ");
    fgets(Nombre,MAX_NOMBRE,stdin);
    system("clear");
    
    printf("Introduce la vida de tu Dragon\n");
    scanf("%d",&Vida);
    system("clear");
    
    printf("Introduce el ataque de tu Dragon: \n");
    scanf("%d",&Atk);
    system("clear");
    
    printf("Introduce la habilidad de tu Dragon\n");
    scanf("%d",&Habilidad);
    system("clear");
    
    printf("Introduce el oro inicial de tu Dragon\n");
    scanf("%d",&Oro);
    system("clear");
    
    (*Dragones)[*total_dragones]=inicializarDragon(Nombre,Vida,Atk,Habilidad,Oro,Nivel,total_dragones);
    
}
void mostrarDragones(dragon * Dragones,int total_dragones){
for (int i = 0; i < total_dragones; i++)
{
    printf("%d\tNOMBRE: %s\n",i+1,Dragones[i].Nombre);
    printf(ROJO "\tVIDA: %d\n" RESET,Dragones[i].Vida);
    printf(AZUL "\tATAQUE: %d\n" RESET,Dragones[i].Atk);
    printf(VERDE "\tHABILIDAD: %s\n" RESET,HabilidadDragon(Dragones[i].Habilidad));
    printf(AMARILLO "\tORO INICIAL: %d\n" RESET,Dragones[i].Oro);
    printf("\tNIVEL: %d\n",Dragones[i].Nivel);
    printf("\n");
}


}