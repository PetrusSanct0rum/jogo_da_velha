#include <stdio.h>

#define QTD_LINHAS 3
#define QTD_COLUNAS 3

int main(int argc, char const *argv[])
{
    int linha;
    int coluna;

    char tabuleiro[QTD_LINHAS][QTD_COLUNAS];
    char I[3];
    char II[3];

    printf("com qual peça vai jogar I: \n");
    scanf("%s", I);
    printf("com qual peça vai jogar II: \n");
    scanf("%s", II);

    printf("jogador I é %s \n", I);
    printf("jogador II é %s \n", II);

    printf("Vamos comçar o jogo!!!\n");
    printf("\n");
    
    for (linha = 0; linha < QTD_LINHAS; linha++)
    {   
        for (coluna = 0; coluna < QTD_COLUNAS; coluna++)
        {
            printf("%c ", tabuleiro[linha][coluna] = '-');
        }   
        printf("\n");
        
    }

    // primeira rodada
    printf("escolha a linha: \n");
    scanf("%d", &linha);
    printf("escolha a coluna: \n");
    scanf("%d", &coluna);

    tabuleiro[linha][coluna] = I[0];
    printf("\n");
    
    
    for (linha = 0; linha < QTD_LINHAS; linha++)
    {   
        for (coluna = 0; coluna < QTD_COLUNAS; coluna++)
        {
            printf("%c ", tabuleiro[linha][coluna]);
        }   
        printf("\n");
        
    }
    
    //segunda rodada
    printf("escolha a linha: \n");
    scanf("%d", &linha);
    printf("escolha a coluna: \n");
    scanf("%d", &coluna);

    tabuleiro[linha][coluna] = II[0];
    printf("\n");
    
    
    for (linha = 0; linha < QTD_LINHAS; linha++)
    {   
        for (coluna = 0; coluna < QTD_COLUNAS; coluna++)
        {
            printf("%c ", tabuleiro[linha][coluna]);
        }   
        printf("\n");
        
    }

    // terceira rodada
    printf("escolha a linha: \n");
    scanf("%d", &linha);
    printf("escolha a coluna: \n");
    scanf("%d", &coluna);

    tabuleiro[linha][coluna] = I[0];
    printf("\n");
    
    
    for (linha = 0; linha < QTD_LINHAS; linha++)
    {   
        for (coluna = 0; coluna < QTD_COLUNAS; coluna++)
        {
            printf("%c ", tabuleiro[linha][coluna]);
        }   
        printf("\n");
        
    }

    // quarta rodada
    printf("escolha a linha: \n");
    scanf("%d", &linha);
    printf("escolha a coluna: \n");
    scanf("%d", &coluna);

    tabuleiro[linha][coluna] = I[0];
    printf("\n");
    
    
    for (linha = 0; linha < QTD_LINHAS; linha++)
    {   
        for (coluna = 0; coluna < QTD_COLUNAS; coluna++)
        {
            printf("%c ", tabuleiro[linha][coluna]);
        }   
        printf("\n");
        
    }
    
    // quinta rodada
     printf("escolha a linha: \n");
    scanf("%d", &linha);
    printf("escolha a coluna: \n");
    scanf("%d", &coluna);

    tabuleiro[linha][coluna] = II[0];
    printf("\n");
    
    
    for (linha = 0; linha < QTD_LINHAS; linha++)
    {   
        for (coluna = 0; coluna < QTD_COLUNAS; coluna++)
        {
            printf("%c ", tabuleiro[linha][coluna]);
        }   
        printf("\n");
        
    }






    

}

