#include <stdio.h>
#include <stdlib.h>

/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */

int main (){
	
int cantidad_palabras;

	printf("Introduce el número de palabras a analizar\n");
	scanf("%d",&cantidad_palabras);
	char palabra[cantidad_palabras][50];
	for(int i=0;i<cantidad_palabras;i++){
		printf("Introduce una palabra\n");
		scanf("%s",palabra[i]);
	
	}

	for (int i=0;i<cantidad_palabras;i++){
	
		for (int j=0;;j++){
		
			if (palabra[i][j]=='a'){
			
				continue;
			}else{
			printf("%s",palabra[i]);
			}
		}
	}

	return 0;
}
