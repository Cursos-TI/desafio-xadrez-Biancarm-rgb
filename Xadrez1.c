#include <stdio.h>

int main() {

    int i, j = 1, k = 1;
    int torre = 5, bispo = 5, rainha = 8;

    // ---------------- TORRE (for) ----------------

    printf("Movimento da Torre:\n");

    for(i = 1; i <= torre; i++) {
        printf("Direita\n");
    }

    // ---------------- BISPO (while) ----------------

    printf("\nMovimento do Bispo:\n");

    while(j <= bispo) {
        printf("Cima, Direita\n");
        j++;
    }

    // ---------------- RAINHA (do-while) ----------------

    printf("\nMovimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        k++;
    } while(k <= rainha);

    return 0;
}