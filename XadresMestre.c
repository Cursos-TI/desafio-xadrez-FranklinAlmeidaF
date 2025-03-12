#include <stdio.h>

// Função recursiva para movimentar a Torre (horizontal e vertical)
void moverTorre(int x, int y, int passos) {
    if (passos == 0) return;

    // Movimento para cima
    printf("Cima de (%d, %d) para (%d, %d)\n", x, y, x - 1, y);
    moverTorre(x - 1, y, passos - 1);
    
    // Movimento para baixo
    printf("Baixo de (%d, %d) para (%d, %d)\n", x, y, x + 1, y);
    moverTorre(x + 1, y, passos - 1);
    
    // Movimento para a esquerda
    printf("Esquerda de (%d, %d) para (%d, %d)\n", x, y, x, y - 1);
    moverTorre(x, y - 1, passos - 1);
    
    // Movimento para a direita
    printf("Direita de (%d, %d) para (%d, %d)\n", x, y, x, y + 1);
    moverTorre(x, y + 1, passos - 1);
}

// Função recursiva para movimentar o Bispo (diagonais)
void moverBispo(int x, int y, int passos) {
    if (passos == 0) return;

    // Movimento diagonal para cima e para direita
    printf("Diagonal cima-direita de (%d, %d) para (%d, %d)\n", x, y, x - 1, y + 1);
    moverBispo(x - 1, y + 1, passos - 1);
    
    // Movimento diagonal para cima e para esquerda
    printf("Diagonal cima-esquerda de (%d, %d) para (%d, %d)\n", x, y, x - 1, y - 1);
    moverBispo(x - 1, y - 1, passos - 1);
    
    // Movimento diagonal para baixo e para direita
    printf("Diagonal baixo-direita de (%d, %d) para (%d, %d)\n", x, y, x + 1, y + 1);
    moverBispo(x + 1, y + 1, passos - 1);
    
    // Movimento diagonal para baixo e para esquerda
    printf("Diagonal baixo-esquerda de (%d, %d) para (%d, %d)\n", x, y, x + 1, y - 1);
    moverBispo(x + 1, y - 1, passos - 1);
}

// Função recursiva para movimentar a Rainha (combinação de Torre + Bispo)
void moverRainha(int x, int y, int passos) {
    if (passos == 0) return;

    // Movimento de Torre
    moverTorre(x, y, passos);
    
    // Movimento de Bispo
    moverBispo(x, y, passos);
}

// Função para movimentar o Cavalo usando loops aninhados
void moverCavalo(int x, int y) {
    int movimentos[8][2] = {
        {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, 
        {2, -1}, {1, -2}, {-1, -2}, {-2, -1}
    };

    for (int i = 0; i < 8; i++) {
        int novoX = x + movimentos[i][0];
        int novoY = y + movimentos[i][1];
        
        if (novoX >= 0 && novoX < 8 && novoY >= 0 && novoY < 8) {
            printf("Movimento de Cavalo para (%d, %d)\n", novoX, novoY);
        }
    }
}

int main() {
    int x = 4, y = 4; // Posição inicial das peças
    int passos = 2;

    printf("\n=== Movimentos da Torre ===\n");
    moverTorre(x, y, passos);

    printf("\n=== Movimentos do Bispo ===\n");
    moverBispo(x, y, passos);

    printf("\n=== Movimentos da Rainha ===\n");
    moverRainha(x, y, passos);

    printf("\n=== Movimentos do Cavalo ===\n");
    moverCavalo(x, y);

    return 0;
}
