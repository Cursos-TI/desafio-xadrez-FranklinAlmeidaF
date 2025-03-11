#include <stdio.h>

int main() {
    int i;

    // Movimento da Torre usando FOR (5 casas para a direita)
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo usando WHILE (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }

    // Movimento da Rainha usando DO-WHILE (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);

    return 0;
}
