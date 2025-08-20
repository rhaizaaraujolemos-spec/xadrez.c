// xadrez.c
// Simulação de movimentos de peças de xadrez: Torre, Bispo e Rainha
// Autor: [Rhaiza Araujo Lemos]
// Desafio: Nível Novato - Estruturas de repetição em C

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

    return 0;
}

// Fim do código4
