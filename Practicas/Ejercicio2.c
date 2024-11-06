#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */

int main (){

	int cantidad_palabras;
	char x;
	printf("Introduce el número de palabras a analizar\n");
	scanf("%d",&cantidad_palabras);
	char palabra[cantidad_palabras][50];
	for(int i=0;i<cantidad_palabras;i++){
		printf("Introduce una palabra\n");
		scanf("%s",palabra[i]);

	}
	for (int i=0;i<cantidad_palabras;i++){//bucle para las palabras

		for (int j=0;j<strlen(palabra[i]);j++){//bucle para las letras de cada palabra
		x=palabra[i][j];
		if (x=='a'){
		break;
		}
		}
	if (x=='a'){
	continue;}
	printf("%s\n",palabra[i]);
	
	}

	}

	


return 0;
}
