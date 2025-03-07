#include <stdio.h>
#include <stdlib.h>
#define MAX_NOMBRE 20
/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */
typedef struct 
 {
 char Nombre[MAX_NOMBRE];
 int Vida;
 int Atk;
 int Habilidad;
 int Oro;
 int Nivel;
 }dragon;

/*TRADUCE EL NUMERO DE HABILIDAD AL NOMBRE CORRESPONDIENTE*/
char * HabilidadDragon(int Habilidad);

 /*MUESTRA TODOS LOS CAZADORES ACTUALES*/
void mostrarDragones();

/*CREA UN NUEVO CAZADOR Y LO AÑADE A LA LISTA*/
dragon inicializarDragon(char * Nombre,int Vida, int Atk,int Habilidad,int oro, int nivel,int * total_cazadores);
void anadirDragon(dragon ** Dragones, int * total_dragones);
