#include <stdio.h>
#include <stdlib.h>

/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */

 //COLORES DE TEXTO
 /*EJEMPLO DE USO
printf(ROJO    "This text is RED!"     RESET "\n");
 */
 #define ROJO     "\x1b[31m"
 #define VERDE   "\x1b[32m"
 #define AMARILLO  "\x1b[33m"
 #define AZUL    "\x1b[34m"
 #define MAGENTA "\x1b[35m"
 #define CIAN    "\x1b[36m"
 #define RESET   "\x1b[0m"

 
 void DescripcionCazador();
 void DescripcionDragon();
 void FraseCazador(int Habilidad);
 void FraseDragon(int Habilidad);
