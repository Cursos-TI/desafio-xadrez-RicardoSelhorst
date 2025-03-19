#include <stdio.h>

int main() {
    // Definição das variáveis para o movimento do Cavalo
    int movimentos_baixo = 2;
    int movimentos_esquerda = 1;
    
    // Movimentação do Cavalo
    printf("\nMovimentação do Cavalo:\n\n");
    
    // Loop para mover duas casas para baixo
    for (int i = 0; i < movimentos_baixo; i++) {
        printf("Baixo\n");
    }
    
    // Loop para mover uma casa para a esquerda
    int j = 0;
    while (j < movimentos_esquerda) {
        printf("Esquerda\n");
        j++;
    }
    
    return 0;
}
