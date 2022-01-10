/*
EXERCICIO 10 - LISTA DE MATRIZES DE VINICIUS ARAGAO 4323
---------------------------------------------------------
     Elaborar um programa que leia a ordem de uma matriz quadrada
   (mínimo de 3 e máximo de 10) e leia valores inteiros e 
    positivos para ela (pode utilizar a função aleatório).
    Após a leitura dos valores desta matriz, escrever na 
    tela de maneira centralizada um menu de opções: 
    
     a. Diagonal principal (DP)
     b. Diagonal secundária (DS) 
     c. Elementos acima das diagonais 
     d. Elementos abaixo das diagonais 
     e. Elementos acima da DP e abaixo da DS 
     f. Elementos abaixo da DP e acima da DS 
     g. Todos os elementos da matriz 
     h. Sair do programa
     
Para cada uma destas opções, apresentar a soma dos elementos 
conforme a opção selecionada. Após o cálculo, escrever a matriz, 
a soma correspondente e voltar ao menu para selecionar uma nova 
opção. O algoritmo deve ser encerrado quando a opção for 8.
 
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
	int c, l, k, tal;
	int conf = 1;
	printf("\n\t\t\t EXERCICIO 10");
	printf("\n\n * \t Este programa lê os valores da matriz e mostra coisas\n\n");
	printf("\n * \t que voce pode escolher entre:\n");
	printf("\n * \t 0: Diagonal principal (DP)                  \n * \t 1: Diagonal secundária (DS) ");
	printf("\n * \t 2: Elementos acima das diagonais            \n * \t 3: Elementos abaixo das diagonais");
	printf("\n * \t 4: Elementos acima da DP e abaixo da DS     \n * \t 5: Elementos abaixo da DP e acima da DS ");
	printf("\n * \t 6: Todos os elementos da matriz             \n * \t 7: Sair do programa \n\n");
	
	///////////////////////////////////////////APRESENTANDO O PROGRAMA///////////////////////////////////////////////////
	
	printf("\n\n---------------------------MATRIZ----------------------------------\n\n");
	
	for(l=0; l<5; l++)         
	{
	    for(c=0; c<5; c++)         
        {
            m[l][c] = (rand()%50);
            printf("   |%4d", m[l][c]);
        }
        printf("\n");
	}

//////////////////////////////////////do while das 8 funções/////////////////////////////////////////////////////////
	
	
	do
	{
	    printf("\n * \t 0: Diagonal principal (DP)\n * \t 1: Diagonal secundária (DS) ");
        printf("\n * \t 2: Elementos acima das diagonais \n * \t 3: Elementos abaixo das diagonais");
        printf("\n * \t 4: Elementos acima da DP e abaixo da DS \n * \t 5: Elementos abaixo da DP e acima da DS ");
        printf("\n * \t 6: Todos os elementos da matriz \n * \t 7: Sair do programa \n\n");
	    printf("\n * \t digite a função: ");
	    scanf("%d", &tal);

        switch(tal)
        {
            
            case 0:
                printf("\n\n---------------------------FUNÇÃO 0----------------------------------\n\n");
            
                for(l=0; l<5; l++)            
                {
                    for(c=0; c<5; c++)         
                    {
                        if(l == c)                       
                        {printf("   |%4d", m[l][c]);}
                        else
                        {printf("   |    ", m[l][c]);}
                    }
                    printf("\n");}
                
            break;
        
        
        
            case 1:
                printf("\n\n---------------------------FUNÇÃO 1----------------------------------\n\n");
	    
                for(l=0; l<5; l++)            
                {
                    for(c=0; c<5; c++)         
                    {
                        if (l+c == 4)
                        {printf("   |%4d", m[l][c]);}
                        else
                        {printf("   |    ", m[l][c]);}
                    }
                    printf("\n");}
                
            break;
            
            
            
            case 2:
                printf("\n\n---------------------------FUNÇÃO 2----------------------------------\n\n");
        
                for(l=0; l<5; l++)            
                {
                    for(c=0; c<5; c++)         
                    {
                        if(l+1 == c)                       
                        {printf("   |%4d", m[l][c]);}
                        else if((l+1)+c == 4)
                        {printf("   |%4d", m[l][c]);}
                        else
                        {printf("   |    ", m[l][c]);}
                    }
                    printf("\n");}
                        
            break;
            
            
            
            case 3:
                printf("\n\n---------------------------FUNÇÃO 3----------------------------------\n\n");
        
                for(l=0; l<5; l++)            
                {
                    for(c=0; c<5; c++)         
                    {
                        if(l-1 == c)                       
                        {printf("   |%4d", m[l][c]);}
                        else if((l-1)+c == 4)
                        {printf("   |%4d", m[l][c]);}
                        else
                        {printf("   |    ", m[l][c]);}
                    }
                    printf("\n");}
                
            break;
            
            
            case 4:
                printf("\n\n---------------------------FUNÇÃO 4----------------------------------\n\n");
        
                for(l=0; l<5; l++)            
                {
                    for(c=0; c<5; c++)         
                    {
                        if(l+1 == c)                       
                        {printf("   |%4d", m[l][c]);}
                        else if((l-1)+c == 4)
                        {printf("   |%4d", m[l][c]);}
                        else
                        {printf("   |    ", m[l][c]);}
                    }
                    printf("\n");}
                
            break;
            
            
            case 5:
                printf("\n\n---------------------------FUNÇÃO 5----------------------------------\n\n");
            
                for(l=0; l<5; l++)            
                {
                    for(c=0; c<5; c++)         
                    {
                        if(l-1 == c)                       
                        {printf("   |%4d", m[l][c]);}
                        else if((l+1)+c == 4)
                        {printf("   |%4d", m[l][c]);}
                        else
                        {printf("   |    ", m[l][c]);}
                    }
                    printf("\n");}
                
            break;
            
            
            case 6:
                printf("\n\n---------------------------FUNÇÃO 6----------------------------------\n\n");
            
                for(l=0; l<5; l++)            
                {
                    for(c=0; c<5; c++)         
                    {
                        {printf("   |%4d", m[l][c]);}
                    }
                    printf("\n");}
                
            break;
            
            
            case 7:
                printf("\n\n---------------------------FUNÇÃO 7----------------------------------\n\n");
                conf=0;
                
            break;
            
	}
	}while(conf);
	
	
}
