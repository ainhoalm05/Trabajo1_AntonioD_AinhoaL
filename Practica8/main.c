#include <stdio.h>
#include <stdlib.h>

/*
*
*	Authors: Ainhoa Leonor y Antonio Delgado
*
*/

int main (){
    int menu;
    /*MENU DE INICIO*/
    do{
        system("clear");
        
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
            //mostrarcazadores();
            break;
            
            case 2:
            //mostrardragones();
            break;
            
            case 3:
            //anadircazador();
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
