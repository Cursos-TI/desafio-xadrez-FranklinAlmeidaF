#include <stdio.h>

void moverCavalo(int linha, int coluna) {
    int movimentos[8][2] = {
        {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
        {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
    };

    printf("Movimentos possíveis do Cavalo:\n");
    for (int i = 0; i < 8; i++) {
        int novaLinha = linha + movimentos[i][0];
        int novaColuna = coluna + movimentos[i][1];
        if (novaLinha >= 0 && novaLinha < 8 && novaColuna >= 0 && novaColuna < 8) {
            printf("Linha: %d, Coluna: %d\n", novaLinha, novaColuna);
        }
    }
}

int main() {
    moverCavalo(4, 4);
    return 0;
}
