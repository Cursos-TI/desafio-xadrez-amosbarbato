#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    // Nível Novato - Movimentação das Peças
    // Número de casas para cada movimento
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Implementação de Movimentação da Torre: A torre vai se mover 5 casas para a direita
    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Implementação de Movimentação do Bispo: O bispo se move 5 casas na diagonal "Cima Direita"
    printf("Movimento do Bispo:\n");

    int i = 1; // contador
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // Implementação de Movimentação da Rainha: A rainha vai se mover 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    
    int j = 1; // contador
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    printf("\n");


    // Nível Aventureiro - Movimentação do Cavalo
    printf("Movimento do Cavalo:\n");
    int casasBaixo = 2;
    int casasEsquerda = 1;

    // Loop externo (for) controla as casas para baixo
    for (int x = 1; x <= casasBaixo; x++) {
        printf("Baixo\n");

        // Loop interno (while) só executa quando estivermos na última descida
        if (x == casasBaixo) {
            int y = 1;
            while (y <= casasEsquerda) {
                printf("Esquerda\n");
                y++;
            }
        }
    }

    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
