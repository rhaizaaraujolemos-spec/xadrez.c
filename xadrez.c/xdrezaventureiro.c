// xadrez.c
// Simulação de movimentos de peças de xadrez: Torre, Bispo, Rainha e Cavalo
// Autor: [Seu Nome]
// Desafio: Nível Intermediário - Estruturas de repetição e loops aninhados em C

#include <stdio.h>

int main() {
    // -------------------------------
    // Movimento da TORRE (for loop)
    // -------------------------------
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // -------------------------------
    // Movimento do BISPO (while loop)
    // -------------------------------
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // -------------------------------
    // Movimento da RAINHA (do-while loop)
    // -------------------------------
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // -------------------------------
    // Movimento do CAVALO (loops aninhados)
    // -------------------------------
    int movimentosCavalo = 1; // número de movimentos em "L" a serem simulados
    int passosBaixo = 2;
    int passosEsquerda = 1;

    printf("\nMovimento do Cavalo:\n");

    // Loop externo: número de movimentos em "L"
    for (int m = 0; m < movimentosCavalo; m++) {
        // Loop interno: dois passos para baixo
        int i = 0;
        while (i < passosBaixo) {
            printf("Baixo\n");
            i++;
        }
        // Um passo para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}
