#include <stdio.h>

int main() {
    // Definindo as variáveis para o movimento do Cavalo
    int casas_para_baixo = 2;  // O Cavalo se move duas casas para baixo
    int casas_para_esquerda = 1;  // E uma casa para a esquerda

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");

    // Loop para mover duas casas para baixo
    for (int i = 0; i < casas_para_baixo; i++) {
        printf("Baixo\n");
    }

    // Loop para mover uma casa para a esquerda
    int contador = 0;
    while (contador < casas_para_esquerda) {
        printf("Esquerda\n");
        contador++;
    }

    // Linha em branco para separar o movimento do Cavalo de outros movimentos
    printf("\n");

    // Exemplo de movimento de outras peças (opcional)
    printf("Movimento de outras peças:\n");
    printf("Cima\n");
    printf("Direita\n");

    return 0;
}