#include <stdio.h>
#define QTD_LINHAS 3
#define QTD_COLUNAS 3

int main(int argc, char const *argv[])
{
    int linha;
    int coluna;

    char tabuleiro[QTD_LINHAS][QTD_COLUNAS];
    char I = 'X';
    char II = 'O';

   
   /*
    printf("com qual peça vai jogar I: \n");
    scanf("%s", I);
    printf("com qual peça vai jogar II: \n");
    scanf("%s", II);

    printf("jogador I é %s \n", I);
    printf("jogador II é %s \n", II)

    printf("Vamos comçar o jogo!!!\n");
    printf("\n");
   */
   
   
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

    tabuleiro[linha][coluna] = I;
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

    tabuleiro[linha][coluna] = II;
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

    tabuleiro[linha][coluna] = I;
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

    tabuleiro[linha][coluna] = II;
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

    tabuleiro[linha][coluna] = I;
    printf("\n");
    
    
    for (linha = 0; linha < QTD_LINHAS; linha++)
    {   
        for (coluna = 0; coluna < QTD_COLUNAS; coluna++)
        {
            printf("%c ", tabuleiro[linha][coluna]);
        }   
        printf("\n");
        
    }
    
    
    //essa parte do codigo vai verificar se a um vencedor a cada final de rodada a partir da quinta rodada é necessario checar ate o jogo finalizar 
    int verificarvencedor(char tauleiro[3][3]); 
    {

        //verificar linhas
        for (linha = 0; linha < QTD_LINHAS; linha++)
        {
            if (tabuleiro[linha][0] == tabuleiro[linha][1] &&
                tabuleiro[linha][1] == tabuleiro[linha][2] &&
                tabuleiro[linha][0] != '-')
            {
                printf("o jogo acabou\n");
                return 1;
            }
            
 
        }   

        //verificar colunas
        for (coluna = 0; coluna < QTD_LINHAS; coluna++)
        {
            if (tabuleiro[0][coluna] == tabuleiro[1][coluna] &&
                tabuleiro[1][coluna] == tabuleiro[2][coluna] &&
                tabuleiro[0][coluna] != '-')
            {
                printf("o jogo acabou\n");
                return 1;
            }
            
 
        } 

        //verificar diagonais principal
        {
            if (tabuleiro[0][0] == tabuleiro[1][1] &&
            tabuleiro[1][1] == tabuleiro[2][2] &&
            tabuleiro[0][0] != '-')
            {
                printf("o jogo acabou\n");
                return 1;
            }  
        }   
        //verificar diagonais secundária
        {
            if (tabuleiro[0][2] == tabuleiro[1][1] &&
                tabuleiro[1][1] == tabuleiro[2][0] &&
                tabuleiro[0][2] != '-')
            {
                printf("o jogo acabou\n");
                return 1;
            }       
        }
    
    }

    // sexta rodada
    printf("escolha a linha: \n");
    scanf("%d", &linha);
    printf("escolha a coluna: \n");
    scanf("%d", &coluna);

    tabuleiro[linha][coluna] = II;
    printf("\n");
    
    
    for (linha = 0; linha < QTD_LINHAS; linha++)
    {   
        for (coluna = 0; coluna < QTD_COLUNAS; coluna++)
        {
            printf("%c ", tabuleiro[linha][coluna]);
        }   
        printf("\n");
        
    }

    int verificarvencedor(char tauleiro[3][3]); 
    {

        //verificar linhas
        for (linha = 0; linha < QTD_LINHAS; linha++)
        {
            if (tabuleiro[linha][0] == tabuleiro[linha][1] &&
                tabuleiro[linha][1] == tabuleiro[linha][2] &&
                tabuleiro[linha][0] != '-')
            {
                printf("o jogo acabou\n");
                return 1;
            }
            
 
        }   

        //verificar colunas
        for (coluna = 0; coluna < QTD_LINHAS; coluna++)
        {
            if (tabuleiro[0][coluna] == tabuleiro[1][coluna] &&
                tabuleiro[1][coluna] == tabuleiro[2][coluna] &&
                tabuleiro[0][coluna] != '-')
            {
                printf("o jogo acabou\n");
                return 1;
            }
            
 
        } 

        //verificar diagonais principal
        {
            if (tabuleiro[0][0] == tabuleiro[1][1] &&
            tabuleiro[1][1] == tabuleiro[2][2] &&
            tabuleiro[0][0] != '-')
            {
                printf("o jogo acabou\n");
                return 1;
            }  
        }   
        //verificar diagonais secundária
        {
            if (tabuleiro[0][2] == tabuleiro[1][1] &&
                tabuleiro[1][1] == tabuleiro[2][0] &&
                tabuleiro[0][2] != '-')
            {
                printf("o jogo acabou\n");
                return 1;
            }       
        }
    
    }

    // setima rodada
    printf("escolha a linha: \n");
    scanf("%d", &linha);
    printf("escolha a coluna: \n");
    scanf("%d", &coluna);

    tabuleiro[linha][coluna] = I;
    printf("\n");
    
    
    for (linha = 0; linha < QTD_LINHAS; linha++)
    {   
        for (coluna = 0; coluna < QTD_COLUNAS; coluna++)
        {
            printf("%c ", tabuleiro[linha][coluna]);
        }   
        printf("\n");
        
    }

    int verificarvencedor(char tauleiro[3][3]); 
    {

        //verificar linhas
        for (linha = 0; linha < QTD_LINHAS; linha++)
        {
            if (tabuleiro[linha][0] == tabuleiro[linha][1] &&
                tabuleiro[linha][1] == tabuleiro[linha][2] &&
                tabuleiro[linha][0] != '-')
            {
                printf("o jogo acabou\n");
                return 1;
            }
            
 
        }   

        //verificar colunas
        for (coluna = 0; coluna < QTD_LINHAS; coluna++)
        {
            if (tabuleiro[0][coluna] == tabuleiro[1][coluna] &&
                tabuleiro[1][coluna] == tabuleiro[2][coluna] &&
                tabuleiro[0][coluna] != '-')
            {
                printf("o jogo acabou\n");
                return 1;
            }
            
 
        } 

        //verificar diagonais principal
        {
            if (tabuleiro[0][0] == tabuleiro[1][1] &&
            tabuleiro[1][1] == tabuleiro[2][2] &&
            tabuleiro[0][0] != '-')
            {
                printf("o jogo acabou\n");
                return 1;
            }  
        }   
        //verificar diagonais secundária
        {
            if (tabuleiro[0][2] == tabuleiro[1][1] &&
                tabuleiro[1][1] == tabuleiro[2][0] &&
                tabuleiro[0][2] != '-')
            {
                printf("o jogo acabou\n");
                return 1;
            }       
        }
    
    }

    // oitava rodada
    printf("escolha a linha: \n");
    scanf("%d", &linha);
    printf("escolha a coluna: \n");
    scanf("%d", &coluna);

    tabuleiro[linha][coluna] = II;
    printf("\n");
    
    
    for (linha = 0; linha < QTD_LINHAS; linha++)
    {   
        for (coluna = 0; coluna < QTD_COLUNAS; coluna++)
        {
            printf("%c ", tabuleiro[linha][coluna]);
        }   
        printf("\n");
        
    }

    int verificarvencedor(char tauleiro[3][3]); 
    {

        //verificar linhas
        for (linha = 0; linha < QTD_LINHAS; linha++)
        {
            if (tabuleiro[linha][0] == tabuleiro[linha][1] &&
                tabuleiro[linha][1] == tabuleiro[linha][2] &&
                tabuleiro[linha][0] != '-')
            {
                printf("o jogo acabou\n");
                return 1;
            }
            
 
        }   

        //verificar colunas
        for (coluna = 0; coluna < QTD_LINHAS; coluna++)
        {
            if (tabuleiro[0][coluna] == tabuleiro[1][coluna] &&
                tabuleiro[1][coluna] == tabuleiro[2][coluna] &&
                tabuleiro[0][coluna] != '-')
            {
                printf("o jogo acabou\n");
                return 1;
            }
            
 
        } 

        //verificar diagonais principal
        {
            if (tabuleiro[0][0] == tabuleiro[1][1] &&
            tabuleiro[1][1] == tabuleiro[2][2] &&
            tabuleiro[0][0] != '-')
            {
                printf("o jogo acabou\n");
                return 1;
            }  
        }   
        //verificar diagonais secundária
        {
            if (tabuleiro[0][2] == tabuleiro[1][1] &&
                tabuleiro[1][1] == tabuleiro[2][0] &&
                tabuleiro[0][2] != '-')
            {
                printf("o jogo acabou\n");
                return 1;
            }       
        }
    
    }
    

}

