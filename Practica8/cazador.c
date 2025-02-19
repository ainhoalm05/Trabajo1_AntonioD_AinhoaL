#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cazador.h"
/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 * TO DO: recuperar cazadores en caso de no poder hacer realloc
 */

 char * obtenerHabilidad(int Habilidad){
    switch (Habilidad) {
        case 1: return "Eviscerar";
        case 2: return "Descarga de rayos";
        case 3: return "Curación";
        case 4: return "Flecha Mágica";
        default: return "ERROR";
        } 
}


 cazador inicializarCazador(char * Nombre,int Vida, int Atk,int Habilidad,int Oro, int Nivel,int * total_cazadores){
    cazador Cazador;
    
    strcpy(Cazador.Nombre, Nombre);
    Cazador.Vida=Vida;
    Cazador.Atk=Atk;
    strcpy(Cazador.Habilidad,obtenerHabilidad(Habilidad));
    Cazador.Oro=Oro;
    Cazador.Nivel=Nivel;
    
    *total_cazadores+=1;
    return(Cazador);
 }
void anadirCazador(cazador ** Cazadores, int * total_cazadores){
    char Nombre[MAX_NOMBRE];
    int Vida;
    int Atk;
    int Habilidad;
    int Oro;
    int Nivel=1;
    *Cazadores=(cazador *)realloc(*Cazadores,sizeof(cazador)*(*total_cazadores+1));
    if (*Cazadores==NULL)
    {
        printf("No puedes añadir tu cazador, juega con los que tienes");
    }else{
    
    printf("Introduce el nombre de tu cazador\n");
    scanf(" ");
    fgets(Nombre,MAX_NOMBRE,stdin);
    system("clear");
    
    printf("Introduce la vida de tu cazador\n");
    scanf("%d",&Vida);
    system("clear");

    printf("Introduce el ataque de tu cazador: \n");
    scanf("%d",&Atk);
    system("clear");

    printf("Introduce la habilidad de tu cazador\n");
    scanf("%d",&Habilidad);
    system("clear");

    printf("Introduce el oro inicial de tu cazador\n");
    scanf("%d",&Oro);
    system("clear");

    (*Cazadores)[*total_cazadores]=inicializarCazador(Nombre,Vida,Atk,Habilidad,Oro,Nivel,total_cazadores);
    }
}
void mostrarCazadores(cazador * Cazadores,int total_cazadores){
for (int i = 0; i < total_cazadores; i++)
{
    printf("%d\tNOMBRE: %s\n",i+1,Cazadores[i].Nombre);
    printf("\tVIDA: %d\n",Cazadores[i].Vida);
    printf("\tATAQUE: %d\n",Cazadores[i].Atk);
    printf("\tHABILIDAD: %s\n",Cazadores[i].Habilidad);
    printf("\tORO INICIAL: %d\n",Cazadores[i].Oro);
    printf("\tNIVEL: %d\n",Cazadores[i].Nivel);
    printf("\n");
}

}