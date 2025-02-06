 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */

int main (){

	//int cantidad_palabras;
	char letra;
	char palabras[40][20] = {
        "casa", "árbol", "perro", "gato", "auto", "bicicleta"
        "sol", "luna", "estrella", "montaña", "río", "mar", 
        "tierra", "agua", "aire", "metal", "bosque", "flor", 
        "lluvia", "trueno", "viento", "tormenta", "nieve", 
        "campo", "ciudad", "puente", "edificio", "escalera", 
        "pintura", "escultura"
    };
	int encontrada_e, encontrada_g;

/*	printf("Introduce el número de palabras a analizar: ");

	scanf("%d",&cantidad_palabras);

	char palabra[cantidad_palabras][50]; //Creo un array para guardar todas las palabras

	for(int i=0;i<cantidad_palabras;i++){
		printf("Introduce una palabra: ");
		scanf("%s",palabra[i]);

	}
*/	
	printf("De todas las palabras introducidas las que no contienen ninguna letra 'a' son  las siguientes: \n");

	for (int i=0;i<palabras[40][20];i++){ //bucle para recorrer las palabras
		encontrada_e=0;
	       	encontrada_g=0;	
		//Al cambiar de palabra "encontrada" se reinicia a 0 para que no se salte palabras sin querer

		for (int j=0;j<strlen(palabras[i]);j++){
			//bucle para recorrer cada letra de cada palabra 
			letra=palabras[i][j];
			if (letra=='e') {
				//Si se encuentra con una letra 'a' sale del bucle for de las letras
				encontrada_e=1;
				break;
			}
		}
		if (encontrada_e==1){
			//Si la palabra contiene una letra 'a' "encontrada" vale 1 por lo que la palabra no se imprime y se salta a la siguiente
			continue;
		}
		for (int j=0;j<strlen(palabras[i]);j++){
			//bucle para recorrer cada letra de cada palabra 
			letra=palabras[i][j];
			if (letra=='g') {
				//Si se encuentra con una letra 'a' sale del bucle for de las letras
				encontrada_g=1;
				break;
			}
		}
		if (encontrada_g==1){
			//Si la palabra contiene una letra 'a' "encontrada" vale 1 por lo que la palabra no se imprime y se salta a la siguiente
			continue;
		}
		for (int j=0;j<strlen(palabras[i]);j++){
			//bucle para recorrer cada letra de cada palabra 
			letra=palabras[i][j];
			if (letra=='e' && letra=='g') {
				//Si se encuentra con una letra 'a' sale del bucle for de las letras
				encontrada_e=1;
				encontrada_g=1;
				break;
			}
		}
		if (encontrada_e==1 && encontrada_g==1){
			//Si la palabra contiene una letra 'a' "encontrada" vale 1 por lo que la palabra no se imprime y se salta a la siguiente
			continue;
		}
		printf("%s\n",palabras[i]); //En el caso de que palabra no contenga una letra 'a' se imprime por pantalla

	}

	return 0;
}
