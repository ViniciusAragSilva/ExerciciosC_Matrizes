/*
EXERCICIO 7 - LISTA DE MATRIZES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
  Elabore um programa que lê valores inteiros para uma matriz M[5][5]. 
  Localize, a seguir, os valores repetidos, substituindo-os pelo valor –1.
  Escrever a matriz lida, a matriz resultante (sem os valores –1) 
  e quantos valores repetidos foram localizados. 
*/

#include <windows.h>	
#include <stdio.h>	
#include <stdlib.h>	
#include <locale.h>
#include <time.h>


int main()
{
    ////////////////////////////////////////////PARA USAR CORES//////////////////////////////////////////////////////
    
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    
    /////////////////////////////////VARIAVEIS E INTRODUCAO DO CODIGO///////////////////////////////////////////
    
	setlocale (LC_ALL,"");
	srand(time(NULL));
	int m[5][5];
	int sl[25];
	int c, l, k= 0, cont=0;
	printf("\n\t\t\t EXERCICIO 7");
	printf("\n\n * \t Este programa lê os valores da matriz e faz operações\n\n");
	printf(" * \t De modo que numeros repetidos viram -1 \n\n");
	
	
	///////////////////////////////////////////APRESENTANDO O PROGRAMA///////////////////////////////////////////////////
	
	printf("--------------------------MATRIZ GERADA----------------------------------------\n\n");
	
	for(l=0; l<5; l++)            //linha da matriz
	{
	    for(c=0; c<5; c++)          //coluna da matriz
        {
            m[l][c] = (rand()%50);      //aleatorio de 0 a 49
            printf("   |%.4d", m[l][c]); 
        }
        printf("\n");
	}
	
	////////////////////////////////////GERANDO O CODIGO PEDIDO NA INTRODUCAO//////////////////////////////////////////
	
	
	printf("\n\n------------------------RESULTADO--------------------------------------\n\n");
	
    for(l=0; l<5; l++)     //conta a linha
    {
        for(c=0; c<5; c++)      //conta a coluna
        {
            sl[k] = m[l][c];        //atribui os valores da matriz ao vetor, agora os valores ficaram lineares
            k++;
        }
    }
            
    k=0;
    
	for(l=0; l<25; l++)     //agora não conta mais a linha: conta o vetor com os valores  
	{
        for(c=0; c<25; c++)     //não é mais a coluna: eh o vetor todo, a cada valor do vetor l eu corro o vetor c todo
        { 
           if(sl[l]== sl[c])    //se o valor do vet l for igual o valor do vet c
           { cont++;}           //conta mais 1
           
           if(cont>= 2)     //se a contagem passar de 2 (pq alguma hora ele vai comparar a propria posicao)
           {
             sl[l]= -1;     //vira o -1
             cont = 0;      //reseta a contagem pro proximo numero
           }
        }
        cont = 0;
	}
	
	/////////////////////////////////////////REAPRESENTANDO O PROGRAMA/////////////////////////////////////////
	
	k=0;
	
	for(l=0; l<5; l++)      
	{
        for(c=0; c<5; c++)     
        {
            if(sl[k]== -1)
            {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);  //pra ficar bonitinho o -1 e ter destaque qual que repetiu
                printf( "   |%4d", sl[k]);
            }
            else
            {
                SetConsoleTextAttribute(hConsole, saved_attributes);    //numeros na cor normal
                printf("   |%4d", sl[k]);
            }
            k++;
        }
        printf("\n");
    }
}

	
