/*
EXERCICIO 4 - LISTA DE MATRIZES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
 Faça um programa que leia uma matriz mat 2 x 5 de inteiros
 e imprima os  elementos de mat na ordem inversa. 
*/
#include <windows.h>	
#include <stdio.h>	
#include <stdlib.h>	
#include <locale.h>
#include <time.h>	

int main()
{
	setlocale (LC_ALL,"");
	int a[2][5];
	int l, c;
	printf("\n\t\t\t EXERCICIO 4");
	printf("\n\n * \t Este programa lê os valores da matriz e reordena ela \n\n");
	printf(" * \t De modo que o a ordem será inversa \n\n");
	
	printf("--------------------------MATRIZ GERADA----------------------------------------\n\n");
	
	for(c=0; c<2; c++)   
	{
	    for(l=0; l<5; l++)
        {
            a[c][l] = (rand()%50-10); 
            printf("   |%4d", a[c][l]); 
        }
        printf("\n");
	}
	
		printf("\n\n------------------------MATRIZ ORGANIZADA--------------------------------------\n\n");
	
	for(c=1; c>=0; c--)   
	{
	    for(l=4; l>=0; l--)
        {
            printf("   |%4d", a[c][l]); 
        }
        printf("\n");
	}
	
	
		
}
