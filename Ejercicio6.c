#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */
/*-TO DO-
-DESCIFRADO-
-CONTROL DE ERRORES Y OPTIMIZACIÓN-
*/
int main (int argc, char ** argv){
char * frase;
char * frase_cifrada;
int clave;

if (argc==1)
{
	printf("ERROR: Argumentos insuficientes\nSINTAXIS: a.out \"frase a cifrar\"\n");
	return 1;
}else if (argc>2)
{
	printf("ERROR: Demasiados argumentos\nSINTAXIS: a.out \"frase a cifrar\"\n");
	return 1;
}

frase=(char *)malloc(sizeof(char)*(strlen(argv[1])+1)); //Le sumo 1 ya que strlen no detecta el \0 pero este igualmente se tiene que guardar
frase_cifrada=(char *)malloc(sizeof(char)*(strlen(argv[1])+1));
strcpy(frase,argv[1]);
printf("Introduce una clave\n");
scanf("%d",&clave);
/*---------CIFRADO--------*/
for (int i = 0; i < strlen(frase); i++)
// A la hora de construir la frase cifrada mantengo los espacios en su sitio y descarto cualquier signo
{
	if (frase[i]==' ')
	{
	frase_cifrada[i]=frase[i];	
	}else if (frase[i]>=65&&frase[i]<=90)//La letra actual es una mayúscula
	{
	if (clave<0){
			clave=(clave*-1)%26;
			if ((frase[i]-clave)<65){
			frase_cifrada[i]=(frase[i]-clave)+26;
			}else{
			frase_cifrada[i]=frase[i]-clave;			
			}
			clave*=-1;
			
	}else if (clave>26)// Si aplicar la clave da la vuelta se hace lo siguiente
		{
			clave%=26;
			if ((frase[i]+clave)>90){
			frase_cifrada[i]=(frase[i]+clave)-26;
			}else{
			frase_cifrada[i]=frase[i]+clave;			
			}
		
		}else if ((frase[i]+clave)>90)
		{
			frase_cifrada[i]=(frase[i]+clave)-26;
		}else{
			frase_cifrada[i]=frase[i]+clave;			
		}
		
	}else if (frase[i]>=97&&frase[i]<=122)//La letra actual es una minúscula
	{
	
		if (clave<0){
			clave=(clave*-1)%26;
			if ((frase[i]-clave)<97){
			frase_cifrada[i]=(frase[i]-clave)+26;
			}else{
			frase_cifrada[i]=frase[i]-clave;			
			}
			clave*=-1;
			
		}else if (clave>26)// Si aplicar la clave da la vuelta se hace lo siguiente
		{
			clave%=26;
			if ((frase[i]+clave)>122){
			frase_cifrada[i]=(frase[i]+clave)-26;
			}else{
			frase_cifrada[i]=frase[i]+clave;			

			}
		
		}else if ((frase[i]+clave)>122)
		{
			frase_cifrada[i]=(frase[i]+clave)-26;
		}else{
			frase_cifrada[i]=frase[i]+clave;			
		}
		
	}else{
	frase_cifrada[i]=frase[i];
}
}
printf("%s\n",frase_cifrada);
/*------------------------*/




/*------DESCIFRADO--------*/






/*------------------------*/

free(frase);
free(frase_cifrada);

	return 0;
}
