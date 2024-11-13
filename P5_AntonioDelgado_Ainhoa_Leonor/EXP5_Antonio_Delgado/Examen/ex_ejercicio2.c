#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */

int main (){

	int cantidad_palabras,encontrada;
	char letra;
	char palabras[40][20] = {
		"casa", "árbol", "perro", "gato", "auto", "bicicleta","sol","luna","estrella", "montaña", "río", "mar","tierra", "agua", "aire", "metal", "bosque", "flor", "lluvia", "trueno", "viento", "tormenta", "nieve", "campo", "ciudad", "puente", "edificio", "escalera","pintura", "escultura"
	};



	printf("De todas las palabras introducidas las que no contienen ninguna letra 'a' son  las siguientes: \n");//antes había código en el que el usuario introducia las palabras para ver cuáles tenían la letra a.

	for (int i=0;i<40;i++){ //bucle para las palabras
		encontrada=0; 
		//Al cambiar de palabra "encontrada" se reinicia a 0 para que no se salte palabras sin querer

		for (int j=0;j<strlen(palabras[i]);j++){
			//bucle para recorrer cada letra de cada palabra 
			letra=palabras[i][j];
			if (letra=='a') {

				encontrada=1;
				break;
			}
		}
		if (encontrada==1){

			continue;
		}
		printf("%s\n",palabras[i]); 
	}



	//fin del código "original"
	int total_e=0;	
	int E_encontrada;
	int G_encontrada;
	for (int i=0;i<40;i++){ //bucle para las palabras

		for (int j=0;j<strlen(palabras[i]);j++){

			letra=palabras[i][j];
			if (letra=='e') {
				//Si se encuentra con una letra 'e' aumenta en 1 el número de palabras con la letra 'e'
				total_e++;

				break;
			}
		}



	}
	printf("Número de palabras con la letra 'e': %d\n",total_e);
	printf("Palabras que contienen la letra g: \n");

	for (int i=0;i<40;i++){ //bucle para las palabras
		G_encontrada=0;//en cada iteración del bucle de las palabras asginamos 0 a la variable para que se analice la palabra entera
		for (int j=0;j<strlen(palabras[i]);j++){

			letra=palabras[i][j];
			if (letra=='g') {

				G_encontrada=1;//si encuentra la letra 'g' sale del bucle de las letras e imprime la palabra
			
			}
		}
		if (G_encontrada==1){
			printf("%s\n",palabras[i]);
		}
	}

	printf("Palabras que contienen la letra e y g: \n");
		for (int i=0;i<40;i++){ //bucle para las palabras
			E_encontrada=0;
			G_encontrada=0;
			for (int j=0;j<strlen(palabras[i]);j++){

				letra=palabras[i][j];
				if (letra=='g') {

					G_encontrada=1;//indica que la palabra contiene una g

				}else if(letra== 'e'){
					E_encontrada=1;//indica que la palabra contiene una e
				}
			}
			if (G_encontrada==1&E_encontrada==1){//imprime sólo si ambas letras se encuentran en la palabra;
				printf("%s\n",palabras[i]);
			}
		}

	return 0;
}
