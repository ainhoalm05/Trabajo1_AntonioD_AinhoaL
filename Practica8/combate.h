#include <stdio.h>
#include <stdlib.h>

/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */
void iniciocombate(cazador * Cazador, dragon * Dragon);

int cambiostat( int estadistica, int modificador);
int Habilidad(cazador * Cazador,dragon * Dragon,int * turno);

void accion_turno(cazador * Cazador,dragon * Dragon, int * turno, int * Turncount,int *Cooldown);