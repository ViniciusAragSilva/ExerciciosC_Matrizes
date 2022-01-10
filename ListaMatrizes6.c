/*
EXERCICIO 6 - LISTA DE MATRIZES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
  Elabore um programa que lê valores inteiros para uma matriz M[5][5]. 
  Crie, a seguir, dois vetores SL[5] e SC[5] que armazenarão o somatório 
  dos elementos das linhas e das colunas da matriz M. 
  Escrever a matriz lida e os vetores 
*/
#include <windows.h>	
#include <stdio.h>	
#include <stdlib.h>	
#include <locale.h>
#include <time.h>	

int main()
{
	setlocale (LC_ALL,"");
	srand(time(NULL));
	int m[5][5];
	int sl[5]={}, sc[5]={};
	int c, l;
	printf("\n\t\t\t EXERCICIO 6");
	printf("\n\n * \t Este programa lê os valores da matriz e faz operações\n\n");
	printf(" * \t De modo que dois vetores terão a soma das colunas e das linhas \n\n");
	
	printf("--------------------------MATRIZ GERADA----------------------------------------\n\n");
	
	for(c=0; c<5; c++)   
	{
	    for(l=0; l<5; l++)
        {
            m[c][l] = (rand()%50-10); 
            printf("   |%4d", m[c][l]); 
        }
        printf("\n");
	}
	
		printf("\n\n------------------------RESULTADO--------------------------------------\n\n");
		
	printf("\n Soma de cada coluna:\n");
	for(c=0; c<5; c++)   
	{
	    for(l=0; l<5; l++)
        {
            sc[c]=sc[c] + m[l][c];
        }
        printf(" %4d ", sc[c]);
	}
	
	printf("\n Soma de cada linha:\n");
	for(c=0; c<5; c++)   
	{
	    for(l=0; l<5; l++)
        {
            sl[c]=sl[c] + m[c][l];
        }
        printf(" %4d ", sl[c]);
	}
}
