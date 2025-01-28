#include <stdio.h>
#include <stdlib.h>
/*
 *
 *	Authors: Ainhoa Leonor y Antonio Delgado
 *
 */

int main (int argc, char ** argv){

char arr[10][10];
char movimiento='n';
int columnas=10;
int filas=10;
int y;
int x;
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
if (argc>=2)
{
if (argc==2&&atoi(argv[1])>=3)
{
    columnas=atoi(argv[1]);
    filas=atoi(argv[1]);
}else if (argc==3&&atoi(argv[1])>=3&&atoi(argv[2])>=3)
{
    columnas=atoi(argv[1]);
    filas=atoi(argv[2]);
}else if (argc>3||atoi(argv[1])<3||atoi(argv[2])<3)
{
    printf("ERROR: los valores introducidos no son válidos\n");
    return 1;
}
}
y=filas/2;
x=columnas/2;



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
