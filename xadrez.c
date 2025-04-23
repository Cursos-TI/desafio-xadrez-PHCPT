#include <stdio.h>

void moverTorre() {//move a Torre
    for (int i = 0; i < 5; i++) {
        printf("Torre: Direita\n");
    }
}

void moverBispo() {//move o Bispo
    int x = 0;
    int y = 0;
    for (int i = 0; i < 5; i++) {
        x += 1;
        y += 1;
        printf("Bispo está em (%d, %d)\n", x, y);
    }
}

void moverRainha() {//move a Rainha
    for (int i = 0; i < 8; i++) {
        printf("Rainha: Esquerda\n");
    }
}

int main() {
    moverTorre();
    moverBispo();
    moverRainha();
    return 0;
}