#include <stdio.h>
#include <stdlib.h>

/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */
/*TO DO
-APLICAR CRIBA DE ERATÓSTENES-{
-DESCARTAR MÚLTIPLOS DE NÚMEROS PRIMOS-
-COMPROBAR SI EL CUADRADO DEL SIGUIENTE NÚMERO NO DESCARTADO ES MAYOR QUE EL NUMERO FINAL-
-IMPRIMIR LOS NÚMEROS RESTANTES CUANDO TERMINE EL PROCESO-
}
*/
int main (int argc, char ** argv){
int *arr_numeros;
int *arr_primos;
int numero_final=atoi(argv[1]);

if (argc==1)
{
	printf("ERROR: Argumentos insuficientes\nSINTAXIS: a.out [Número final]\n");
	return 1;
}else if (argc>2)
{
	printf("ERROR: Demasiados argumentos\nSINTAXIS: a.out [Número final]\n");
	return 1;
}else{
arr_numeros=(int *)malloc(sizeof(int)*numero_final);
arr_primos=(int *)malloc(sizeof(int)*numero_final);
for (int i = 0; i < numero_final; i++)
{
	arr_numeros[i]=i+1;
}
for (int i = 0; i < numero_final; i++)
{
	for (int j = 2; j < numero_final; j++){
		if (arr_numeros[i]/j==1&&arr_numeros[i]%j==0){
			
			arr_primos[i]=arr_numeros[i];
			arr_numeros[i]=0;
			
			break;
		}else{

	}
}
}

for (int i = 0; i < numero_final; i++)
{
	printf("%d\n",arr_primos[i]);
}
}
free(arr_numeros);
free(arr_primos);
	return 0;
}
