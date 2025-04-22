#include <stdio.h>

// Função recursiva para movimentar a Torre (5 casas para a direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar a Rainha (8 casas para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento diagonal do Bispo (Cima Direita)
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Movimento do Bispo também com loops aninhados (vertical e horizontal)
void moverBispoComLoops(int casas) {
    printf("Movimento do Bispo com loops aninhados:\n");
    for (int v = 0; v < casas; v++) {
        for (int h = 0; h < 1; h++) {
            printf("Cima Direita\n");
        }
    }
}

// Movimento do Cavalo (2 para cima, 1 para a direita) com loops complexos
void moverCavalo() {
    printf("Movimento do Cavalo:\n");
    int vertical = 0, horizontal = 0;

    for (int i = 0; i < 3; i++) { // Tentativas de movimento
        if (vertical < 2) {
            printf("Cima\n");
            vertical++;
            continue;
        }
        for (int j = 0; j < 1; j++) {
            if (horizontal < 1) {
                printf("Direita\n");
                horizontal++;
            }
        }
        break; // movimento completo
    }
}

int main() {
    // Torre - 5 casas para a direita
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Bispo - 5 casas na diagonal (recursivo)
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(5);

    // Bispo - loops aninhados
    printf("\n");
    moverBispoComLoops(5);

    // Rainha - 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Cavalo - movimento em "L" (2 para cima, 1 para direita)
    printf("\n");
    moverCavalo();

    return 0;
}
