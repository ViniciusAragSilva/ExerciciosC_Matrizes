/*
EXERCICIO 2 - LISTA DE MATRIZES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
  Elabore um programa que lê valores inteiros para uma matriz a[6][6]. 
  Ordene, a seguir, os valores da matriz, de forma que o menor valor 
  esteja armazenado na primeira posição da matriz e o maior na última. 
  Escreva a matriz ordenada. 
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
	
	printf("\n\n * \t Este programa lê os valores da matriz e reordena ela \n\n");
	printf(" * \t De modo que o a ordem será decrescente \n\n");
	
	int a[6][6];
	int c, l, tc, tl; // c: coluna.      l: linha.      tc: testa coluna.       tl: testaw linha
	int menor = 0;
	
	
	
////////////////////////////////// ATRIBUICAO DE VALORES //////////////////////////////////////////////

    printf("--------------------------MATRIZ GERADA----------------------------------------\n\n");
    
	for(c=0; c<6; c++)  // enquanto coluna for menor que 3, repita o processo abaixo    
	{
	    for(l=0; l<6; l++)  // enquanto a linha for maior que 3, repita o processo abaixo
        {
            a[c][l] = (rand()%100);  // o valor da coluna tal, na linha tal, eh randomico entre 0 e 99
            printf("   |%4d", a[c][l]); // printa a posicao do valor randomico na coluna e linha
        }
        printf("\n");
	}
	
	
/////////////////////////LENDO CADA VARIAVEL E TESTANDO UMA COM A OUTRA///////////////////////////////////////
	
	printf("\n\n------------------------MATRIZ ORGANIZADA--------------------------------------\n\n");
	 
    for(tc=0; tc<6; tc++)       // teste coluna eh a coluna do valor que TESTA todos os outros
    {
        for(tl=0; tl<6; tl++)   // teste linha eh a linha do valor que TESTA todos os outros
        {
            for(c=0; c<6; c++)     // c nesse caso é a coluna de todos os numeros testados
            {
                for(l=0; l<6; l++)  // l nesse caso é a coluna de todos os numeros testados
                {
                    if(a[tc][tl]< a[c][l])  // se o valor que TESTA for menor que o valor TESTADO
                    {
                        menor= a[tc][tl];   // menor= valor que testa
                        
                        a[tc][tl]= a[c][l]; // valor que testa troca de posicao com o valor testado pois eh maior e fica nos ultimos
                        a[c][l]=menor;      // valor testado assume a posicao do valor que TESTA, pois essa posicao eh dos maiores e o valor que TESTA eh maior
                    }      
                }
            }
        }       
    }
	
/////////////////////////////////////APRESENTANDO A MATRIZ REESCRITA/////////////////////////////////////
	
	for(tc=0; tc<6; tc++)      
	{
        for(tl=0; tl<6; tl++)     
        { printf("   |%4d", a[tc][tl]);}
        printf("\n");
	}
}


