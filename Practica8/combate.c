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
*/

void iniciocombate(cazador * Cazador, dragon * Dragon){
    int turno=0; //0:Cazador 1:Dragon
    int Turncount=1;
    int Cooldown=0;
    
    while (Cazador->Vida>0&&Dragon->Vida>0)
    {
        system("clear");
        printf("Turno %d\n",Turncount);
        printf("Vida de %s: %d\n",Cazador->Nombre,Cazador->Vida);
        printf("Vida de %s: %d\n",Dragon->Nombre,Dragon->Vida);
        accion_turno(Cazador,Dragon,&turno,&Turncount,&Cooldown);
    }
    if (Cazador->Vida<=0)
    {
        system("clear");
        printf("Vida de %s: %d\n",Cazador->Nombre,Cazador->Vida);
        printf("Vida de %s: %d\n",Dragon->Nombre,Dragon->Vida);
        //system("cat game_over.txt");
        printf("%s acabó con %s. \nElige otro héroe para que termine el trabajo\n",Dragon->Nombre,Cazador->Nombre);
        getchar();
        
    }else if (Dragon->Vida<=0){
        system("clear");
        printf("Vida de %s: %d\n",Cazador->Nombre,Cazador->Vida);
        printf("Vida de %s: %d\n",Dragon->Nombre,Dragon->Vida);
        printf("GANASTE\n");
        printf("%s Asesinó a %s y reclamó su tesoro (Conseguiste %d monedas de oro)\n",Cazador->Nombre,Dragon->Nombre,Dragon->Oro);
        Cazador->Oro+=Dragon->Oro;
        getchar();
    }
    printf("Presiona un botón para volver al menú:\n");
    
}

void accion_turno(cazador * Cazador,dragon * Dragon,int * turno,int * Turncount,int *Cooldown){
    int accion;
    if (*turno==0)
    {
        
        printf("1. Atacar\n");
        if (*Cooldown==0){printf("2. Habilidad (Disponible)\n");}
        else{
            printf("2. Habilidad En enfriamiento(%d turno/s)\n",*Cooldown);            
        }
        
        scanf("%d",&accion);
        if (*Cooldown!=0&&accion==2)
        {
            printf("La habilidad está en enfriamiento\n");
            getchar();
            getchar();
            
        }else{
            
            switch (accion)
            {
                case 1:
                printf("Atacas al dragón con tu arma y le inflinges %d puntos de daño\n ",Cazador->Atk);
                printf("Vida del dragón: %d -> %d",Dragon->Vida,(Dragon->Vida)-(Cazador->Atk));
                Dragon->Vida=cambiostat(Dragon->Vida,Cazador->Atk);
                getchar();
                getchar();
                if (*Cooldown>0)
                {
                    *Cooldown-=1;
                }
                *Turncount+=1;
                
                break;
                
                case 2:
                printf("%s Usó %s\n",Cazador->Nombre,obtenerHabilidad(Cazador->Habilidad));
                FraseCazador(Cazador->Habilidad);
                if (Cazador->Habilidad==3)
                {
                    printf("Vida del Cazador: %d -> %d",Cazador->Vida,Habilidad(Cazador,Dragon,turno));
                    Cazador->Vida=Habilidad(Cazador,Dragon,turno);
                }else{
                    
                    printf("Vida del dragón: %d -> %d",Dragon->Vida,Habilidad(Cazador,Dragon,turno));
                    Dragon->Vida=Habilidad(Cazador,Dragon,turno);
                }
                *Cooldown=3;
                getchar(); 
                getchar();
                *Turncount+=1;
                
                break;
                default:
                break;
            }
            *turno=1;
        }
    } if (*turno==1)
    {
        if (*Turncount==1 || *Turncount%3==0 )
        {
            printf("%s Usó %s\n",Dragon->Nombre,HabilidadDragon(Dragon->Habilidad));
            FraseDragon(Dragon->Habilidad);
            printf("Vida del Cazador: %d -> %d",Cazador->Vida,Habilidad(Cazador,Dragon,turno));
            Cazador->Vida=Habilidad(Cazador,Dragon,turno);
            getchar();
        }else{
            
            printf("%s te ataca (recibes %d puntos de daño)\n",Dragon->Nombre,Dragon->Atk);
            printf("Vida de %s: %d -> %d",Cazador->Nombre,Cazador->Vida,(Cazador->Vida)-(Dragon->Atk));
            Cazador->Vida=cambiostat( Cazador->Vida, Dragon->Atk);
            getchar();
        }
            *turno=0;
    }
}
int Habilidad(cazador * Cazador,dragon * Dragon,int *turno){
    if (*turno==0)
    {
        
        switch (Cazador->Habilidad)
        {
            case 1://eviscerar
            return (cambiostat(Dragon->Vida,100));
            break;
            
            case 2://Descarga de rayos
            return (cambiostat(Dragon->Vida,75));
            break;
            
            case 3://Curacion
            return (cambiostat(Cazador->Vida,(-100)));//Daño negativo == Curación
            break;
            
            case 4://Flecha mágica
            return (cambiostat(Dragon->Vida,1000));
            break;
            
            default:
            break;
        }
    }else if (*turno==1){
        switch (Dragon->Habilidad)
        {
            case 1:
            return (cambiostat(Cazador->Vida,100));
            break;
            
            case 2:
            return (cambiostat(Cazador->Vida,50));
            break;
            
            case 3:
            return (cambiostat(Cazador->Vida,200));
            break;
            
            case 4:
            return (cambiostat(Cazador->Vida,60));
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
