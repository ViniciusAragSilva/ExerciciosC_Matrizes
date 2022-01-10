/*
EXERCICIO 9 - LISTA DE MATRIZES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
  Considerando uma matriz quadrada, podemos identificar 
  várias áreas, como por exemplo, a diagonal principal e 
  a secundária. identifique e apresente essas duas diagonais
*/
#include <windows.h>	
#include <stdio.h>	
#include <stdlib.h>	
#include <locale.h>
#include <time.h>	

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes; 
	setlocale (LC_ALL,"");
	srand(time(NULL));	
	int m[5][5];
	int c, l, k;
	printf("\n\t\t\t EXERCICIO 9");
	printf("\n\n * \t Este programa lê os valores da matriz e faz operações\n\n");
	printf(" * \t De modo que ele separa as diagonais principais e secundárias\n\n");
	
	
	///////////////////////////////////////////APRESENTANDO O PROGRAMA///////////////////////////////////////////////////
	
	printf("--------------------------MATRIZ GERADA----------------------------------------\n\n");
	
	for(l=0; l<5; l++)            //linha da matriz
	{
	    for(c=0; c<5; c++)          //coluna da matriz
        {
            m[l][c] = (rand()%50);
            printf("   |%4d", m[l][c]); 
        }
        printf("\n");
	}
	
	////////////////////////////////////GERANDO O CODIGO PEDIDO NA INTRODUCAO//////////////////////////////////////////
	printf("\n\n--------------------------DIAGONAIS DA MATRIZ-----------------------------------\n\n");
	SetConsoleTextAttribute(hConsole, saved_attributes);
	
    for(l=0; l<5; l++)            //linha da matriz
	{
	    for(c=0; c<5; c++)          //coluna da matriz
        {
          if(l == c)                              //esse if eh da d principal, onde a linha e igual a coluna
          {
              SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
              printf("   |%4d", m[l][c]); 
              
          }
          else if (l+c == 4)                     //Esse else if eh o da d secundaria, e ele  funciona somando a coluna com a linha e dando 4 so pra matriz 5x5, quando for 6x6 sera quando a soma der 4
          {
              SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
              printf("   |%4d", m[l][c]);
          }else
          {
              SetConsoleTextAttribute(hConsole, saved_attributes);
              printf("   |    ", m[l][c]);
          }
        }
        printf("\n");
	}
	
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("\n\n * \t COR VERMELHA= D PRINCIPAL\n\n");
	
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
	printf(" * \t COR AZUL = D SECUNDÁRIA\n\n");
	SetConsoleTextAttribute(hConsole, saved_attributes);
}
