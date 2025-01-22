#include <stdio.h>
#include <stdlib.h>
/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */

int main (){

char arr[10][10];
char movimiento='n';
int columnas=10;
int filas=10;
int x=filas/2;
int y=columnas/2;

for (int i = 0; i < filas; i++)
{

for (int j = 0; j < columnas; j++)
{
if (i==x && j==y)
{
    arr[i][j]='#';
}else if (i==0||i==filas-1||j==0||j==columnas-1)
{
    arr[i][j]='*';
}else{
    arr[i][j]=' ';
}    
    printf("%c",arr[i][j]);

}
printf("\n");
}
scanf("%c",&movimiento);
scanf(" ");
while (movimiento!='q')
{

switch (movimiento)
{
case 'w':
    y+=1;
    
    break;
case 'a':
    x-=1;
    break;
case 's':
    y-=1;
    break;
case 'd':
    x+=1;
    break;

default:
    break;
}

for (int i = 0; i < filas; i++)
{

for (int j = 0; j < columnas; j++)
{
if (i==x && j==y)
{
    arr[i][j]='#';
}else if (i==0||i==filas-1||j==0||j==columnas-1)
{
    arr[i][j]='*';
}else{
    arr[i][j]=' ';
}    
    printf("%c",arr[i][j]);

}
printf("\n");
}
scanf("%c",&movimiento);
scanf(" ");
system("clear");

}



	return 0;
}
