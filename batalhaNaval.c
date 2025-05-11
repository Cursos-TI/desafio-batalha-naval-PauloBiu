#include <stdio.h>

#define TAMANHO_TABULEIRO 5

// Função para inicializar o tabuleiro com água ('~')
void inicializarTabuleiro(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = '~';
        }
    }
}

// Função para posicionar um navio verticalmente
void posicionarNavioVertical(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int coluna, int linhaInicial, int comprimento) {
    for (int i = 0; i < comprimento; i++) {
        tabuleiro[linhaInicial + i][coluna] = 'N';
    }
}

// Função para posicionar um navio horizontalmente
void posicionarNavioHorizontal(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int colunaInicial, int comprimento) {
    for (int i = 0; i < comprimento; i++) {
        tabuleiro[linha][colunaInicial + i] = 'N';
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("Tabuleiro:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializa o tabuleiro
    inicializarTabuleiro(tabuleiro);

    // Posiciona dois navios
    // Navio 1: Vertical, começa na linha 1, coluna 2, com comprimento 3
    posicionarNavioVertical(tabuleiro, 2, 1, 3);
    // Navio 2: Horizontal, começa na linha 3, coluna 0, com comprimento 4
    posicionarNavioHorizontal(tabuleiro, 3, 0, 4);

    // Exibe o tabuleiro
    exibirTabuleiro(tabuleiro);

    return 0;
}
