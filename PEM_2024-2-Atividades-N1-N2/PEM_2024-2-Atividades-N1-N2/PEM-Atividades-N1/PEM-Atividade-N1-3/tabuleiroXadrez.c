/*------------------------------------------------------------------------* 
* Disciplina: Programação Estruturada e Modular                           *
*          Prof. Carlos Veríssimo                                         *
*-------------------------------------------------------------------------*
* Objetivo do Programa: Criar e exibir um tabuleiro de xadrez com vetores *
* Data - 25/08/2024                                                       * 
* Autor: Letícia Sudan Gauy                                               *
*-------------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
    /* Definindo os vetores de strings */
    char linhaPecasPretas[8][4] = {"PT1", "PC1", "PB1", "PD1",  "PR1",  "PB2", "PC2", "PT2"};
    char linhaPretaPeao[8][4] = {"PP1", "PP2", "PP3", "PP4", "PP5", "PP6", "PP7", "PP8"};
    char linhaTabuleiro3[8][4] = {" X ", " X ", " X ", " X ", " X ", " X ", " X ", " X "};
    char linhaTabuleiro4[8][4] = {" X ", " X ", " X ", " X ", " X ", " X ", " X ", " X "};
    char linhaTabuleiro5[8][4] = {" X ", " X ", " X ", " X ", " X ", " X ", " X ", " X "};
    char linhaTabuleiro6[8][4] = {" X ", " X ", " X ", " X ", " X ", " X ", " X ", " X "};
    char linhaBrancaPeao[8][4] = {"BP1", "BP2", "BP3", "BP4", "BP5", "BP6", "BP7", "BP8"};
    char linhaPecasBrancas[8][4] = {"BT1", "BC1", "BB1", "BD1",  "BR1", "BB2", "BC2", "BT2"};

    /* Exibindo o cabeçalho do tabuleiro */
    printf("    a    b   c   d   e   f   g   h\n");  // Cabeçalho com letras para colunas
    printf("    -------------------------------\n");  

    /* Exibindo o tabuleiro com as notações das casas */
    for(int i = 0; i < 8; i++) {
        printf("%d | ", 8 - i);  // Números das linhas do tabuleiro (8 a 1)
        for(int j = 0; j < 8; j++) {
            printf("%-4s", (i == 0 ? linhaPecasPretas[j] :
                            i == 1 ? linhaPretaPeao[j] :
                            i == 2 ? linhaTabuleiro6[j] :
                            i == 3 ? linhaTabuleiro5[j] :
                            i == 4 ? linhaTabuleiro4[j] :
                            i == 5 ? linhaTabuleiro3[j] :
                            i == 6 ? linhaBrancaPeao[j] :
                                     linhaPecasBrancas[j]));
        }
        printf("\n");
    }

    return 0;
}