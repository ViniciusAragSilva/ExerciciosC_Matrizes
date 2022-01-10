/*
EXERCICIO 1 - LISTA DE Matrizes DE VINICIUS ARAGAO 4323
---------------------------------------------------------
  Elabore um programa que lê valores inteiros para uma matriz a[6][6].
   Calcule, a seguir, a soma dos elementos das colunas e linhas, 
   escrevendo estes resultados num vetor. Escreva o vetor resultante. 
 */
#include <windows.h>	
#include <stdio.h>	
#include <stdlib.h>	
#include <locale.h>
#include <time.h>	

int main()
{
	setlocale (LC_ALL,"");
	printf(" * \t Este programa le os valores da matriz e soma as colunas e linhas \n\n");
	printf(" * \t Após ele escreve o resultado num vetor \n\n");
	printf("-------------------------------------------------------------------------------\n\n");
	
	int a[6][6];        //Matriz
	int vetor[36]={};   //vetor que armazena
	int c, l, k= 0;

	for(c=0; c<6; c++)      //c conta de 0 a 5
	{
	    for(l=0; l<6; l++)  //l conta de 0 a 5 dentro de cada contagem do c
            {
                k++;                    //k aumenta a cada contagem de l
                a[c][l] = k;            //a matriz é igual a k (só pra atribuir valores automaticamente)
                printf("%4d", a[c][l]); //printa a matriz um numero de cada vez
            }
        printf("\n");
	}
	
	printf("\n\n-------------------------------------------------------------------------------\n\n");
	printf("\n\nSoma das linhas:\n");
	 
	 
	for(c=0; c<6; c++)      //conta c ate 5 de novo
	{
	    for(l=5; l>=0; l--)     //decresce o l (que nesse momento é 5)
            {
                vetor[c] = vetor[c] + a[c][l];  //vetor na posicao c é igual a ele mesmo + a matriz na coluna c e linha l
            }
        printf("%4d ", vetor[c]);
	}
}

