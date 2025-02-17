#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dragon.h"
/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */

 char * obtenerHabilidad(int Habilidad){
    switch (Habilidad) {
        case 1: return "Eviscerar";
        case 2: return "Gancho Divino";
        case 3: return "Curación";
        case 4: return "Flecha Mágica";
        default: return "ERROR";
        } 
}


 dragon inicializarDragon(char * Nombre,int Vida, int Atk,int Habilidad,int Oro, int Nivel,int * total_Dragones){
    dragon Dragon;
    
    strcpy(Dragon.Nombre, Nombre);
    Dragon.Vida=Vida;
    Dragon.Atk=Atk;
    strcpy(Dragon.Habilidad,obtenerHabilidad(Habilidad));
    Dragon.Oro=Oro;
    Dragon.Nivel=Nivel;
    
    *total_Dragones+=1;
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

    (*Dragones)[*total_dragones]=inicializarDragon(Nombre,Vida,Atk,Habilidad,Oro,Nivel,total_Dragones);
}
void mostrarDragones(dragon * Dragones,int total_dragones){
for (int i = 0; i < total_dragones; i++)
{
    printf("NOMBRE: %s\n",Dragones[i].Nombre);
    printf("\tVIDA: %d\n",Dragones[i].Vida);
    printf("\tATAQUE: %d\n",Dragones[i].Atk);
    printf("\tHABILIDAD: %s\n",Dragones[i].Habilidad);
    printf("\tORO INICIAL: %d\n",Dragones[i].Oro);
    printf("\tNIVEL: %d\n",Dragones[i].Nivel);
    printf("\n");
}

}