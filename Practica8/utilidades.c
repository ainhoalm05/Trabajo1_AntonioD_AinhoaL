#include <stdio.h>
#include <stdlib.h>
#include "utilidades.h"
#include "cazador.h"
#include "dragon.h"
 //DESCRIPCIONES DE HABILIDADES
 
void DescripcionCazador(int Habilidad)
 {

    printf("Eviscerar: Golpea a tu enemigo con un tajo brutal que inflinge mucho daño\n");
    printf("\n");
    printf("Descarga de rayos: Conjura una descarga de rayos para dañar a tus enemigos\n");
    printf("\n");
    printf("Curación: Sana tus heridas para recuperar vida (La sobrecuración se convierte en vida extra)\n");
    printf("\n");
    printf("Flecha mágica: Dispara una flecha imbuída en magia que nunca falla\n");
    printf("\n");

 }
 void DescripcionDragon(int Habilidad)
 {

    printf("Piroaliento: Derrite a tus enemigos con una poderosa bocanada de fuego draconiano\n");
    printf("\n");
    printf("Desgarrar: Usa las Garras para destrozar a cualquiera que se ponga en tu camino\n");
    printf("\n");
    printf("Mordedura: Un mordisco brutal digno de un dragón\n");
    printf("\n");
    printf("Golpe de Cola: Golpea a los distraídos con un ágil golpe de cola\n");

 }
 //FRASES DE HABILIDADES EN COMBATE
 void FraseCazador(int Habilidad){
 switch (Habilidad)
 {
    case 1:
    printf("Eviscerar: Golpea a tu enemigo con un tajo brutal que inflinge mucho daño\n");
    break;
    case 2:
    printf("Descarga de rayos: Conjura una descarga de rayos para dañar a tus enemigos\n");
    break;
    case 3:
    printf("Curación: Sana tus heridas para recuperar vida (La sobrecuración se convierte en vida extra)\n");
    break;
    case 4:
    printf("Flecha mágica: Dispara una flecha imbuída en magia que nunca falla\n");
    break;
 
 default:
    break;
 }
}
 void FraseDragon(dragon Dragon,int Habilidad){
 switch (Habilidad)
 {
    case 1://Piroaliento
    printf("%s exhaló un potente aliento de fuego\n",Dragon->Nombre);
    break;
    case 2://Desgarrar
    printf("%s te golpea con sus garras \n",Dragon->Nombre);
    break;
    case 3://Mordedura
    printf("%s te muerde con su poderosa mandíbula\n",Dragon->Nombre);
    break;
    case 4://Golpe de Cola
    printf("%s usa su cola como un látigo para golpearte\n",Dragon->Nombre);
    break;
 
 default:
    break;
 }
}