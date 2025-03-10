#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cazador.h"
#include "utilidades.h"
/*
*
*	Authors: Ainhoa Leonor y Antonio Delgado
*
*
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
    Cazador.Habilidad=Habilidad;
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
    char Holder[MAX_NOMBRE];
    *Cazadores=(cazador *)realloc(*Cazadores,sizeof(cazador)*(*total_cazadores+1));
    if (*Cazadores==NULL)
    {
        printf("No puedes añadir tu cazador, juega con los que tienes");
        return;
    }else{
        
        printf("Introduce el nombre de tu cazador\n");
        scanf(" ");
        fgets(Nombre,MAX_NOMBRE,stdin);
        system("clear");
        
        printf("Introduce la vida de tu cazador\n");
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
        
        printf("Introduce el ataque de tu cazador: \n");
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
        
        printf("Introduce la habilidad de tu cazador\n");
        DescripcionCazador();
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
        
        printf("Introduce el oro inicial de tu cazador\n");
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
        
        system("clear");
        
        (*Cazadores)[*total_cazadores]=inicializarCazador(Nombre,Vida,Atk,Habilidad,Oro,Nivel,total_cazadores);
    }
}
void mostrarCazadores(cazador * Cazadores,int total_cazadores){
    for (int i = 0; i < total_cazadores; i++)
    {
        //printf(ROJO    "This text is RED!"     RESET "\n");
        printf("%d\tNOMBRE: %s\n",i+1,Cazadores[i].Nombre);
        printf(ROJO "\tVIDA: %d\n" RESET ,Cazadores[i].Vida);
        printf(AZUL "\tATAQUE: %d\n" RESET,Cazadores[i].Atk);
        printf(VERDE "\tHABILIDAD: %s\n" RESET,obtenerHabilidad(Cazadores[i].Habilidad));
        printf(AMARILLO "\tORO INICIAL: %d\n" RESET,Cazadores[i].Oro);
        printf("\tNIVEL: %d\n",Cazadores[i].Nivel);
        printf("\n");
    }
    
}