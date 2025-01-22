#include <stdio.h>

#include <stdlib.h>

/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */


/*
TO DO{

habilitar negativos (Línea 66)


}
*/
int main (int argc, void ** argv){
int numeros;
if (argc==2)
{
numeros= atoi(argv[1]);
}


//Recoger datos por linea de comandos
if (argc==1){
	printf("¿Cuantos numeros quieres ordenar?: \n");
	scanf("%d",&numeros );
}else if (argc==2){
	argv[1] = &numeros;
}else{
	printf("Indica con numeros la cantidad de valores que quieres comparar: \n");
}
int* arr=(int *)malloc(sizeof(int)*numeros);
int* arr_ordenado=(int *)malloc(sizeof(int)*numeros);

printf("Introduce los números: ");
for ( int i = 0; i < numeros; i++)
{
	scanf("%d",&arr[i]);
	}

int valA; //Valor más pequeño encontrado hasta el momento
int posA=0; //Posición del valA en el array
int valB; //Valor a comparar con valA
int minimo=0;

for ( int i = 0; i < numeros; i++)//Bucle para recorrer todos los numeros
{
valA=0;

	for ( int j = 0; j < numeros; j++)//Asignar valores a valB(el numero de la posicion del array)
{
	valB=arr[j];
		if (valB>valA) //Comparamos el valB y el valA
		{
			valA=valB;
			posA=j; //posA lo igualamos a la posicion del bucle
		}
		
	}
arr_ordenado[i]=valA;
arr[posA]=0;
}


for (int i = 0; i < numeros; i++)
{
	printf("%d, ",arr_ordenado[i]);
}
	printf("\n");

free(arr);
free(arr_ordenado);
	return 0;
}