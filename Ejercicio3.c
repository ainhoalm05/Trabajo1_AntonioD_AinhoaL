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
int y=filas/2;
int x=columnas/2;
/*
for (int i = 0; i < filas; i++)
{

for (int j = 0; j < columnas; j++)
{
if (i==y && j==x)
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
}*/
system("clear");

do 
{

switch (movimiento)
{
case 'w':
    if (y-1==0)
    {}else {
    y-=1;
    }
    
    
    break;

case 'a':
    if ((x-1)==0)
    {}else {
    x-=1;
    }
    
    break;

case 's':
    if (y+1==filas-1)
    {}else {
    y+=1;
    }    
 
    break;

case 'd':
    if (x+1==columnas-1)
    {}else {
    x+=1;
    }    
    break;

default:
    break;
}

for (int i = 0; i < filas; i++)
{

for (int j = 0; j < columnas; j++)
{
if (i==y && j==x)
{
    arr[i][j]='#';
}else if (i==0||i==filas-1||j==0||j==columnas-1)
{
    arr[i][j]='*';
}else{
    arr[i][j]=' ';
}    
    printf(" %c",arr[i][j]);

}
printf("\n");
}
scanf("%c",&movimiento);
system("clear");

}while (movimiento!='q');



	return 0;
}
