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

	printf("Introduce el número de palabras a analizar: ");

	scanf("%d",&cantidad_palabras);

	char palabra[cantidad_palabras][50]; //Creo un array para guardar todas las palabras

	for(int i=0;i<cantidad_palabras;i++){
		printf("Introduce una palabra: ");
		scanf("%s",palabra[i]);

	}
	
	printf("De todas las palabras introducidas las que no contienen ninguna letra 'a' son  las siguientes: \n");

	for (int i=0;i<cantidad_palabras;i++){ //bucle para las palabras
		encontrada=0; 
		//Al cambiar de palabra "encontrada" se reinicia a 0 para que no se salte palabras sin querer

		for (int j=0;j<strlen(palabra[i]);j++){
			//bucle para recorrer cada letra de cada palabra 
			letra=palabra[i][j];
			if (letra=='a') {
				//Si se encuentra con una letra 'a' sale del bucle for de las letras
				encontrada=1;
				break;
			}
		}
		if (encontrada==1){
			//Si la palabra contiene una letra 'a' encontrada vale 1 por lo que la palabra no se imprime y se salta a la siguiente
			continue;
		}
		printf("%s\n",palabra[i]); //En el caso de que palabra no contenga una letra 'a' se imprime por pantalla

	}
	return 0;
}
