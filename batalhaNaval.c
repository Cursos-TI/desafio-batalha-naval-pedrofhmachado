#include <stdio.h>
#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
#define linhas 10
#define colunas 10

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[linhas][colunas] = {
        
        {3,0,0,0,0,0,0,0,0,0},
        {3,0,3,3,3,0,0,0,0,0},
        {3,0,0,0,0,0,0,0,0,0},
        {0,0,3,3,3,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,3,0,0,0,0,0,0},
        {0,3,0,0,3,0,0,0,0,0},
        {0,0,3,0,0,3,0,0,0,0},
        {0,0,0,3,0,0,0,0,0,0},
        {0,0,3,3,3,0,0,0,0,0}    
    };
    int i, j;
    int soma = 0;
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.

    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    printf("Posição do navil na horizontal e ((1, 2)(1,3)(1,4)), (()()()) e na vertical (0,0)(1,0)(2,0)\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            if(tabuleiro[i][j] != 0){
                printf("Cordenadas de partes de navil (%d,%d) \n", i, j);
            }

        }
    }
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
