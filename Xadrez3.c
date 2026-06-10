#include <stdio.h>

// ---------------- TORRE (recursivo) ----------------
void moverTorre(int casas) {
    if(casas == 0) {
        return;
    }

    printf("Direita\n");
    moverTorre(casas - 1);
}

// ---------------- RAINHA (recursivo) ----------------
void moverRainha(int casas) {
    if(casas == 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ---------------- BISPO (recursivo + loops) ----------------
void moverBispo(int casas) {
    if(casas == 0) {
        return;
    }

    int i, j;

    // loops aninhados
    for(i = 1; i <= 1; i++) {          // vertical
        for(j = 1; j <= 1; j++) {      // horizontal
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// ---------------- CAVALO (loops complexos) ----------------
void moverCavalo() {

    int i, j;

    for(i = 1; i <= 2; i++) {

        for(j = 1; j <= 1; j++) {

            if(i <= 2) {
                printf("Cima\n");
            }

            // quando terminar as duas casas para cima
            if(i == 2) {
                printf("Direita\n");
                break;
            }
        }
    }
}

// ---------------- MAIN ----------------
int main() {

    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    // TORRE
    printf("\n-----------------\n");
    printf("Movimento da Torre:\n");
    moverTorre(torre);

    // BISPO
    printf("\n-----------------\n");
    printf("\nMovimento do Bispo:\n");
    moverBispo(bispo);

    // RAINHA
    printf("\n-----------------\n");
    printf("\nMovimento da Rainha:\n");
    moverRainha(rainha);

    // CAVALO
    printf("\n-----------------\n");
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}