#include <stdio.h>
#include <stdlib.h>
/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */






#define MAX_NOMBRE 20

 typedef struct 
 {
 char Nombre[MAX_NOMBRE];
 int Vida;
 int Atk;
 int Habilidad;
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