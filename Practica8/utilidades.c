#include <stdio.h>
#include <stdlib.h>
#include "utilidades.h"
#include "cazador.h"
#include "dragon.h"
/*
*
*	Authors: Ainhoa Leonor y Antonio Delgado
*  
*     
*/
 //DESCRIPCIONES DE HABILIDADES
 
void DescripcionCazador()
 {

    printf("1: Eviscerar: Golpea a tu enemigo con un tajo brutal que inflinge mucho daño\n");
    printf("\n");
    printf("2: Descarga de rayos: Conjura una descarga de rayos para dañar a tus enemigos\n");
    printf("\n");
    printf("3: Curación: Sana tus heridas para recuperar vida (La sobrecuración se convierte en vida extra)\n");
    printf("\n");
    printf("4: Flecha mágica: Dispara una flecha imbuída en magia que nunca falla\n");
    printf("\n");

 }
 void DescripcionDragon()
 {

    printf("1: Piroaliento: Derrite a tus enemigos con una poderosa bocanada de fuego draconiano\n");
    printf("\n");
    printf("2: Desgarrar: Usa las Garras para destrozar a cualquiera que se ponga en tu camino\n");
    printf("\n");
    printf("3: Mordedura: Un mordisco brutal digno de un dragón\n");
    printf("\n");
    printf("4: Golpe de Cola: Golpea a los distraídos con un ágil golpe de cola\n");

 }
 //FRASES DE HABILIDADES EN COMBATE
 void FraseCazador(int Habilidad){
 switch (Habilidad)
 {
    case 1:
    printf("Usaste Eviscerar para cortar al dragón \n");
    break;
    case 2:
    printf("Una descarga de rayos electrocuta al dragón\n");
    break;
    case 3:
    printf("Curación: Sanaste tus heridas\n");
    break;
    case 4:
    printf("Disparas una flecha mágica que golpea al dragón\n");
    break;
 
 default:
    break;
 }
}
 void FraseDragon(int Habilidad){
 switch (Habilidad)
 {
    case 1://Piroaliento
    printf("El dragón exhaló un potente aliento de fuego\n");
    break;
    case 2://Desgarrar
    printf("El dragón te golpea con sus garras \n");
    break;
    case 3://Mordedura
    printf("El dragón te muerde con su poderosa mandíbula\n");
    break;
    case 4://Golpe de Cola
    printf("El dragón usa su cola como un látigo para golpearte\n");
    break;
 
 default:
    break;
 }
}