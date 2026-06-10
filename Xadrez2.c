#include <stdio.h>

int main() {

    int i, j = 1, k = 1, x, y;
    int torre = 5, bispo = 5, rainha = 8, cavalo = 3;
    int baixo = 2;
    int esquerda = 1;

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

    // ---------------- CAVALO ----------------

    printf("________________________________________");

    printf("\nMovimento do Cavalo:\n");

    for(x = 1; x <= 1; x++) {

    y = 1;

    // duas casas para baixo
    while(y <= baixo) {
        printf("Baixo\n");
        y++;
    }

    // uma casa para a esquerda
    printf("Esquerda\n");
    }
    return 0;
}