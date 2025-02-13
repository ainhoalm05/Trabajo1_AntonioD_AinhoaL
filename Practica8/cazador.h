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
 char Habilidad[MAX_NOMBRE];
 int Oro;
 int Nivel;
 }cazador;

/*TRADUCE EL NUMERO DE HABILIDAD AL NOMBRE CORRESPONDIENTE*/
char * obtenerHabilidad(int Habilidad);

 /*MUESTRA TODOS LOS CAZADORES ACTUALES*/
void mostrarCazadores();

/*CREA UN NUEVO CAZADOR Y LO AÑADE A LA LISTA*/
cazador inicializarCazador(char * Nombre,int Vida, int Atk,int Habilidad,int oro, int nivel,int * total_cazadores);
void anadirCazador(cazador ** Cazadores, int * total_cazadores);