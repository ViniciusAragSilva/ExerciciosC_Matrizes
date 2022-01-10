/*
EXERCICIO 5 - LISTA DE MATRIZES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
  Na teoria dos sistemas, define-se como elemento minimax 
  de uma matriz o menor elemento da linha onde se encontra 
  o maior elemento da matriz. Elabore um programa que lê 
  valores inteiro para um matriz a[6][6] e escreve 
  o seu minimax juntamente com sua posição. 
*/
#include <windows.h>	
#include <stdio.h>	
#include <stdlib.h>	
#include <locale.h>
#include <time.h>	

int main()
{
	setlocale (LC_ALL,"");
	printf("\n\t\t\t EXERCICIO 5");
	printf("\n\n * \t Este programa lê os valores da matriz e identifica valores \n\n");
	printf(" * \t Identifica o menor valor na linha do maior valor, e diz sua posição \n\n");
	srand(time(NULL));
	int a[6][6];
	int c, l, cm, lm, xc, xl; // c: coluna.      l: linha.      cm: coluna do maior.       lm: linha do maior
	int maior=0, minx=0;
	
	
	
////////////////////////////////// ATRIBUICAO DE VALORES //////////////////////////////////////////////

    printf("--------------------------MATRIZ GERADA----------------------------------------\n\n");
    
	for(l=0; l<6; l++)    
	{
	    for(c=0; c<6; c++)
        {
            a[l][c] = (rand()%100);
            printf("   |%4d", a[l][c]);
        }
        printf("\n");
	}
	/////////////////////////LENDO A MATRIZ TODA E TESTANDO QUAL A MAIOR///////////////////////////////////////
	Sleep(2000);
	printf("\n\n------------------------RESOLUCAO--------------------------------------\n\n");

    for(l=0; l<6; l++)    
    {
        for(c=0; c<6; c++)  
        {
            if(a[l][c]> maior)   //se a matriz l c for maior que o maior numero (no primeiro caso zero, no segundo a matriz lc...)
            {
                maior= a[l][c]; //maior vira a matriz l c
                cm = c;         //coluna do maior eh o c nesse ponto
                lm = l;         //linha do maior eh o l nesse ponto
            }
        }
    }
    
	printf("\n* \t O maior numero é %d na linha %d / 6, e coluna %d / 6 \n\n", maior, lm+1, cm+1);
	
	
	minx = maior;               //atribuo o minimo x ao maior, para comparar, logo mais da pra entender
    for(c=0; c<6; c++)  //repete c do zero ao cinco
    {
        if(a[lm][c]<minx)   //se a matriz a, na linha do maior, na coluna c, for menor que minx (no 1 caso eh o maior numero da linha)
        {
            minx= a[lm][c]; //minx vira o numero da matriz que esta sendo testado
            xc= c;          //coluna de x vira c
        }
    }
    Sleep(2000);
        
    printf("\n* \t O minimo x é %d na linha %d / 6, e coluna %d / 6 \n\n", minx, lm+1, xc+1);
	
	
	
}
