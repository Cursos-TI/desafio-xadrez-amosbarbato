#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função Recursiva: Torre / Movimento: 5 casas para a Direita
void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Funcção Recursiva: Rainha / Movimento: 8 casas para a Esquerda
void moverRainha(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// Função Recursiva + Loops Aninhados: Bispo / Movimento: 5 casas na Diagonal "Cima Direita"
void moverBispo(int casas) {
    if (casas == 0) return; // condição de parada

    // Loops aninhados: externo = vertical (Cima), interno = horizontal (Direita)
    for (int i = 0; i < 1; i++) { // sempre sobe 1 casa
        printf("Cima ");
        for (int j = 0; j < 1; j++) { // sempre vai 1 casa para a direita
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

// Cavalo: Loops aninhados complexos / Movimento: 2 casas para Cima e 1 para Direita
void moverCavalo(int casasCima, int casasDireita) {
    printf("Movimento do Cavalo:\n");

    // Loop externo: movimento para cima
    for (int i = 1; i <= casasCima; i++) {
        if (i % 2 == 0) {
            // Exemplo de uso de continue: ignorar casas pares apenas como efeito
            // mas aqui vamos sempre imprimir, mantendo o padrão
        }
        printf("Cima\n");

        // Loop interno: só executa na última subida
        for (int j = 1; j <= casasDireita; j++) {
            if (i < casasCima) {
                // Não é o último movimento vertical, então sai do loop interno
                break;
            }
            printf("Direita\n");
        }
    }
}

int main() {
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Número de casas para cada movimento
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimentação da Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n");


    // Movimentação do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\n");

    // Movimentação da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");

    // Movimentação do Cavalo
    moverCavalo(2, 1);

    return 0;
}
