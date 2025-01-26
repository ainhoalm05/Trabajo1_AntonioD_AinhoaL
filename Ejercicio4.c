#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */
/*TODO

- Arreglar errores de memoria -
- Arreglar error al  introducir  numeros -


*/
int main (int argc,char ** argv){

char * frase=(char *)malloc(sizeof(char)*strlen(argv[1]));//reservamos memoria equivalente a la longitud de la frase
char * frase_normalizada=(char *)malloc(sizeof(char)*strlen(argv[1]));
strcpy(frase,argv[1]); //la pasamos de argv a la variable frase por comodidad y conveniencia

int contador=0;
for (int i = 0; i < strlen(frase); i++)
{   

/*---NORMALIZACIÒN---*/
if (frase[i]>=97&&frase[i]<=122)
{
    frase_normalizada[contador]=frase[i];
    contador++;

}else if (frase[i]>=65&&frase[i]<=90)
{
    frase[i]+=32; //Pasar de mayusc a minusc

    frase_normalizada[contador]=frase[i];
    contador++;
    
}
/*--------------------*/
}
//Ajustamos el tamaño del array a la frase normalizada
frase_normalizada=(char *)realloc(frase_normalizada,sizeof(char)*strlen(frase_normalizada));
//A partir de aquí trabajamos sólo con la frase ya normalizada

//invertimos la frase
char * frase_invertida=(char *)malloc(sizeof(char)*strlen(frase_normalizada));
int y=strlen(frase_normalizada); //Usaremos 'y' para coger las letras de atrás hacia delante
for (int i = 0; i < strlen(frase_normalizada); i++)
{
frase_invertida[i]=frase_normalizada[y-1];
y--;
}
if (strcmp(frase_normalizada,frase_invertida)==0)
{
    printf("Tu cadena es palíndroma\n");
}else{
    printf("Tu cadena NO es palíndroma\n");

}
free(frase);
free(frase_normalizada);
free(frase_invertida);
	return 0;
}
