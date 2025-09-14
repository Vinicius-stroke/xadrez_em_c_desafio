#include <stdio.h>

// ============================
// Funções Recursivas
// ============================

// Torre: move-se em linha reta (direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Bispo: recursivo (diagonal cima-direita)
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Rainha: recursivo (esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ============================
// Bispo com Loops Aninhados
// ============================
void moverBispoLoops(int casas) {
    int i, j;
    for (i = 1; i <= casas; i++) {        // movimento vertical
        for (j = 1; j <= 1; j++) {        // movimento horizontal (sempre direita)
            printf("Cima Direita\n");
        }
    }
}

// ============================
// Cavalo com Loops Aninhados
// ============================
// Movimento: 2 casas para cima, 1 para direita
void moverCavalo() {
    int up = 0, right = 0;

    for (up = 1; up <= 2; up++) {
        if (up == 2) {
            // quando chegar na segunda casa, sai do loop
            printf("Cima\n");
            break;
        }
        printf("Cima\n");
    }

    // loop para o movimento horizontal
    int i = 0;
    while (i < 2) {
        i++;
        if (i == 1) {
            printf("Direita\n");
            continue;  // imprime direita e pula
        }
        // condição para interromper
        if (i > 1) break;
    }
}

// ============================
// Programa Principal
// ============================
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Torre recursiva
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(casasTorre);

    // Bispo recursivo
    printf("\nMovimento do Bispo (5 casas na diagonal Cima Direita - Recursivo):\n");
    moverBispoRecursivo(casasBispo);

    // Bispo com loops aninhados
    printf("\nMovimento do Bispo (5 casas na diagonal Cima Direita - Loops Aninhados):\n");
    moverBispoLoops(casasBispo);

    // Rainha recursiva
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(casasRainha);

    // Cavalo com loops aninhados e controle de fluxo
    printf("\nMovimento do Cavalo (2 casas para Cima e 1 para Direita):\n");
    moverCavalo();

    return 0;
}
