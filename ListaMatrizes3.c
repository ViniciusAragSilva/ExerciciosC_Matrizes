/*
EXERCICIO 3 - LISTA DE MATRIZES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
 Faça um programa que leia uma matriz mat 3 x 4 
 de inteiros, substitua seus elementos negativos por 0 
 e imprima a matriz mat original e a modificada. 
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
	printf("\n\t\t\t EXERCICIO 3");
	printf("\n\n * \t Este programa lê uma matriz 3x4 \n\n");
	printf(" * \t E substitui os valores negativos por zero\n\n");
	
	int a[3][4];
	int c, l;
	
	///////////////////////////////ATRIBUICAO DE VALORES//////////////////////////////////
	
	printf("--------------------------MATRIZ GERADA----------------------------------------\n\n");
	
	for(c=0; c<3; c++)   
	{
	    for(l=0; l<4; l++)
        {
            a[c][l] = (rand()%50-10);  //valores de 39 a -10
            printf("   |%4d", a[c][l]); 
        }
        printf("\n");
	}
	
	//////////////////////////TROCANDO NEGATIVOS POR ZERO////////////////////////
	printf("\n\n------------------------MATRIZ ORGANIZADA--------------------------------------\n\n");
	
	for(c=0; c<3; c++)   
	{
	    for(l=0; l<4; l++)
        {
            if( a[c][l]<0)
            {
                 printf("   |   0");
            }else
            {
                 printf("   |%4d", a[c][l]);
            }
        }
        printf("\n");
	}
	
	
	
	
}

