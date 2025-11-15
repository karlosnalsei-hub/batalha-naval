#include <stdio.h>

#define TAM 10      // Tamanho do tabuleiro (10x10)
#define NAVIO 3     // Valor usado para representar o navio
#define TAM_NAVIO 3 // Cada navio tem tamanho fixo 3

int main() {
    int tabuleiro[TAM][TAM];

    // Inicializando o tabuleiro com água (0)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navios representados por vetores de tamanho 3
    int navioHorizontal[TAM_NAVIO] = {NAVIO, NAVIO, NAVIO};
    int navioVertical[TAM_NAVIO] = {NAVIO, NAVIO, NAVIO};

    // Coordenadas iniciais fixas (podem ser alteradas)
    int linhaH = 2, colunaH = 4; // Navio horizontal
    int linhaV = 5, colunaV = 1; // Navio vertical

    // Validação dos limites
    if (colunaH + TAM_NAVIO > TAM) {
        printf("Erro: navio horizontal não cabe no tabuleiro.\n");
        return 1;
    }

    if (linhaV + TAM_NAVIO > TAM) {
        printf("Erro: navio vertical não cabe no tabuleiro.\n");
        return 1;
    }

    // Posicionando navio horizontal
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    // Posicionando navio vertical
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    // Exibindo o tabuleiro
    printf("\n===== TABULEIRO BATALHA NAVAL =====\n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nNavios posicionados com sucesso!\n");

    return 0;
}
