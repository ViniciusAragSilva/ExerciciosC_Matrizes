/*
EXERCICIO 8 - LISTA DE MATRIZES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
  Elabore um programa que lê valores inteiros para uma matriz a[6][6]. 
  Embaralhe os valores da matriz da seguinte forma: 
  os valores da coluna 1 são armazenados na coluna dois,
  os da 2 são armazenados na 3 e assim por diante 
  até os valores da coluna 6 serem armazenados na coluna 1.
  Este procedimento deve ser realizado três vezes. 
  Após, repita o procedimento das colunas para as linhas. 
  Escreva a matriz lida e a resultante. 
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
	int c, l, k,swing;
	printf("\n\t\t\t EXERCICIO 8");
	printf("\n\n * \t Este programa lê os valores da matriz e faz operações\n\n");
	printf(" * \t De modo que as COLUNAS embaralham (1 vai pra 2, 2 vai pra 3...)\n\n");
	
	
	///////////////////////////////////////////APRESENTANDO O PROGRAMA///////////////////////////////////////////////////
	
	printf("--------------------------MATRIZ GERADA----------------------------------------\n\n");
	
	for(l=0; l<5; l++)            //linha da matriz
	{
	    for(c=0; c<5; c++)          //coluna da matriz
        {
            m[l][c] = (rand()%50);      //aleatorio de 0 a 49
            printf("   |%4d", m[l][c]); 
        }
        printf("\n");
	}
	
	////////////////////////////////////GERANDO O CODIGO PEDIDO NA INTRODUCAO//////////////////////////////////////////
	

    printf("\n\n------------------------EMBARALHO x3--------------------------------------\n\n");
    
   for(k=0; k<3; k++)
   {
        for(l=4; l>=0; l--)      
        {
            for(c=4; c>=0; c--)     
            {
                switch(c)
                {
                case 4:
                    swing = m[l][c];           //quando estou na coluna 4, ele atribui swing a esse valor
                    m[l][c]= m[l][c-1];       //a coluna 4 vira a coluna 3
                    break;
                case 3:
                    
                    m[l][c]= m[l][c-1];       //a coluna 3 vira coluna 2
                    break;
                    
                case 2:
                    m[l][c]= m[l][c-1];      //coluna 2 vira coluna 1
                    break;
                    
                case 1:
                    m[l][c]= m[l][c-1];     //coluna 1 vira coluna 0
                    break;
                    
                case 0:
                    m[l][c]= swing;         //coluna 0 vira swing, que eh o valor da coluna 4 antes de virar coluna 3
                    break;
                }
            }
        }
    }
   
    for(l=0; l<5; l++)      
    {
        for(c=0; c<5; c++)     
        {
                printf("   |%4d", m[l][c]);
        }
        printf("\n");
    }
}
