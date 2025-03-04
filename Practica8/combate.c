#include <stdio.h>
#include <stdlib.h>
#include "cazador.h"
#include "dragon.h"
#include "combate.h"
/*
*
*	Authors: Ainhoa Leonor y Antonio Delgado
*
*/

void iniciocombate(cazador * Cazador, dragon * Dragon){
    int turno=0; //0:Cazador 1:Dragon
    printf("Vida de %s: %d\n",Cazador->Nombre,Cazador->Vida);
    printf("Vida de %s: %d\n",Dragon->Nombre,Dragon->Vida);
    
    while (Cazador->Vida>0&&Dragon->Vida>0)
    {
        system("clear");
        printf("Vida de %s: %d\n",Cazador->Nombre,Cazador->Vida);
        printf("Vida de %s: %d\n",Dragon->Nombre,Dragon->Vida);
        accion_turno(Cazador,Dragon,&turno);
    }
    if (Cazador->Vida<=0)
    {
        system("clear");
        printf("Vida de %s: %d\n",Cazador->Nombre,Cazador->Vida);
        printf("Vida de %s: %d\n",Dragon->Nombre,Dragon->Vida);
        //system("cat game_over.txt");
        printf("PERDISTE\n");
        getchar();
        getchar();
    
    }else if (Dragon->Vida<=0){
        system("clear");
        printf("Vida de %s: %d\n",Cazador->Nombre,Cazador->Vida);
        printf("Vida de %s: %d\n",Dragon->Nombre,Dragon->Vida);
        printf("GANASTE\n");
        printf("Conseguiste %d monedas de oro\n",Dragon->Oro);
        Cazador->Oro+=Dragon->Oro;
        getchar();
        getchar();
    }
    printf("Presiona un botón para volver al menú:\n");
    
}

void accion_turno(cazador * Cazador,dragon * Dragon,int * turno){
    int accion;
    if (*turno==0)
    {
        printf("1. Atacar\n");
        printf("2. Habilidad\n");
        scanf("%d",&accion);
        switch (accion)
        {
            case 1:
            Dragon->Vida=cambiostat(Dragon->Vida,Cazador->Atk);
            break;
            
            case 2:
            Dragon->Vida=Habilidad(Cazador,Dragon,turno);
            break;
            
            default:
            break;
        }
        *turno=1;
    }else if (*turno==1)
    {
        Cazador->Vida=cambiostat( Cazador->Vida, Dragon->Atk);
        *turno=0;
    }
    
}
int Habilidad(cazador * Cazador,dragon * Dragon,int *turno){
    if (*turno==0)
    {
        
        switch (Cazador->Habilidad)
        {
            case 1:
            return (cambiostat(Dragon->Vida,100));
            break;
            
            case 3:
            return (cambiostat(Cazador->Vida,(-60)));//Daño negativo == Curación
            break;
            
            default:
            break;
        }
    }
    return (Cazador->Vida);
}

int cambiostat(int estadistica,int modificador){
    return (estadistica-modificador);
}
