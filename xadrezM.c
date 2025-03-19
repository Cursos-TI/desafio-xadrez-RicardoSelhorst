#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para movimentar o Bispo usando loops aninhados
void moverBispo(int passos, int x, int y) {
    if (passos == 0) return;
    printf("Diagonal Cima Direita\n");
    moverBispo(passos - 1, x + 1, y + 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

int main() {
    // Movimentação do Cavalo
    printf("\nMovimentação do Cavalo:\n\n");
    
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
    
    // Movimentação da Torre
    printf("\nMovimentação da Torre:\n\n");
    moverTorre(5);
    
    // Movimentação do Bispo
    printf("\nMovimentação do Bispo:\n\n");
    moverBispo(5, 0, 0);
    
    // Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n\n");
    moverRainha(8);
    
    return 0;
}
