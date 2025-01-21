#include <stdio.h>
#include <stdlib.h>

/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */


/*
TO DO{

Hacer que funcione;


Bucle inverso con 0(busca el mayor y reemplazalo por 0 despues de colocarlo en el array);

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
for ( int i = numeros; i > 0; i--)//Bucle para recorrer todos los numeros
{
	

for ( int j = 0; j < i; j++)//Asignar valores a valB(el numero de la posicion del array)
{
	valB=arr[j];
 
	if (j==0) //valA(igualamos al valB en la primera vuelta)
	{
		valA=valB;
	}else{ 
		if (valB>valA) //Comparamos el valB y el valA
		{
			valA=valB;
			posA=j; //posA lo igualamos a la posicion del bucle
		}
		
	}
	
}

arr_ordenado[i]=valA;

for (int j = posA; j <= i; j++)//Bucle que recorre los numeros a partir de la posicion en la que se quedo posA en el bucle anterior
{
	if (j!=i-1)
	{

arr[j]=arr[j+1];//Mueve los numeros de posicion en el array y cortamos el final
	
	}else{
		arr[j]
	}
	
}

arr =(int*) realloc(arr,sizeof(int)*(i));//Realocamos el array, el array va disminuyendo en cada vuelta
}

free(arr);
	return 0;
}