// xadrez.c
// Simulação avançada de movimentos de peças de xadrez: Torre, Bispo, Rainha e Cavalo
// Autor: [Seu Nome]
// Desafio Final - Recursividade e Loops Complexos em C

#include <stdio.h>

// -------------------------------
// Função recursiva para a TORRE
// Move-se 5 casas para a direita
// -------------------------------
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// -------------------------------
// Função recursiva para a RAINHA
// Move-se 8 casas para a esquerda
// -------------------------------
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// -------------------------------
// Função recursiva para o BISPO
// Move-se 5 casas na diagonal (Cima Direita)
// Também usa loops aninhados para simular eixo vertical e horizontal
// -------------------------------
void moverBispo(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return;

    // Loop externo: vertical
    for (int v = 0; v < vertical; v++) {
        // Loop interno: horizontal
        for (int h = 0; h < horizontal; h++) {
            printf("Cima Direita\n");
        }
    }

    // Recursão para continuar o movimento
    moverBispo(vertical - 1, horizontal - 1);
}

// -------------------------------
// Movimento do CAVALO com loops complexos
// Move-se em "L": duas casas para cima e uma para a direita
// -------------------------------
void moverCavalo(int movimentos) {
    printf("\nMovimento do Cavalo:\n");

    for (int m = 0; m < movimentos; m++) {
        int cima = 0;
        int direita = 0;

        // Loop para duas casas para cima
        while (cima < 2) {
            printf("Cima\n");
            cima++;
            if (cima == 1) continue; // exemplo de controle de fluxo
        }

        // Loop para uma casa para a direita
        for (int d = 0; d < 2; d++) {
            if (d == 1) break; // só queremos uma casa
            printf("Direita\n");
        }
    }
}

int main() {
    // -------------------------------
    // Movimento da TORRE
    // -------------------------------
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // -------------------------------
    // Movimento do BISPO
    // -------------------------------
    printf("\nMovimento do Bispo:\n");
    moverBispo(1, 5); // 5 casas simuladas com recursão e loop

    // -------------------------------
    // Movimento da RAINHA
    // -------------------------------
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // -------------------------------
    // Movimento do CAVALO
    // -------------------------------
    moverCavalo(1); // 1 movimento em "L"

    return 0;
}
