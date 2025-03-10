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
    char Holder[MAX_NOMBRE];
    *Dragones=(dragon *)realloc(*Dragones,sizeof(dragon)*(*total_dragones+1));
    if (*Dragones==NULL)
    {
        printf("No puedes añadir tu Dragón, juega con los que tienes");
        return;
    }else{
        
        printf("Introduce el nombre de tu Dragón\n");
        scanf(" ");
        fgets(Nombre,MAX_NOMBRE,stdin);
        system("clear");
        
        printf("Introduce la vida de tu Dragón\n");
        scanf("%s",Holder);
        if (atoi(Holder)!=0)
        {
            Vida=atoi(Holder);
        }else{
            printf("Introduce un valor númerico superior a 0");
            getchar();
            getchar();
            return;
        }
        
        system("clear");
        
        printf("Introduce el ataque de tu Dragón: \n");
        scanf("%s",Holder);
        if (atoi(Holder)!=0)
        {
            Atk=atoi(Holder);
        }else{
            printf("Introduce un valor númerico superior a 0");
            getchar();
            getchar();
            return;
        }
        
        system("clear");
        
        printf("Introduce la habilidad de tu Dragón\n");
        DescripcionDragon();
        scanf("%s",Holder);
        if (atoi(Holder)!=0&&(atoi(Holder)>=1&&atoi(Holder)<=4))
        {
            Habilidad=atoi(Holder);
        }else{
            printf("Selecciona una Habilidad Válida (1-4)");
            getchar();
            getchar();
            return;
        }
        
        system("clear");
        
        printf("Introduce el oro de tu Dragón\n");
        scanf("%s",Holder);
        if (atoi(Holder)!=0)
        {
            Oro=atoi(Holder);
        }else{
            printf("Introduce un valor númerico superior a 0");
            getchar();
            getchar();
            return;
        }
    }
    
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