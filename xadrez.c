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

    // Implementação de Movimentação da Rainha: A rainha vai se mover 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    
    int j = 1; // contador
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
