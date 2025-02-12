#include <stdio.h>
#include <stdlib.h>
#include "apuntes.h"
/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */
#define MAX_NOMBRE 20


typedef enum {
puñalada 0;
curar 1;
nsdnf 2
}habilidad;
//elegir habilidad
switch (habilidad_elegida)
{
case 0 {
	cazador.habilidad=puñalada;
	break;
}	
case 1{
	cazador.habilidad=curar;
}
//....
}

//estructura de un cazador/dragon
typedef struct 
{
char nombre[MAX_NOMBRE];
int Vida;
int Atq;
habilidad Habilidad;
int oro;
int nivel;
}cazador/dragon;
