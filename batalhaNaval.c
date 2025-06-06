#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

// Função para inicializar o tabuleiro com 0 (água)
void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

// Função para exibir o tabuleiro no console
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("Tabuleiro:\n\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Função para verificar se o navio cabe e não sobrepõe outro navio
int podePosicionar(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, char orientacao) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        int l = linha + (orientacao == 'V' ? i : 0);
        int c = coluna + (orientacao == 'H' ? i : 0);

        // Verifica limites
        if (l >= TAMANHO_TABULEIRO || c >= TAMANHO_TABULEIRO) {
            return 0; // Fora dos limites
        }

        // Verifica se a posição já está ocupada
        if (tabuleiro[l][c] != 0) {
            return 0; // Sobreposição
        }
    }
    return 1; // Posição válida
}

// Função para posicionar o navio no tabuleiro
void posicionarNavio(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, char orientacao) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        int l = linha + (orientacao == 'V' ? i : 0);
        int c = coluna + (orientacao == 'H' ? i : 0);
        tabuleiro[l][c] = 3;
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializa o tabuleiro com água (0)
    inicializarTabuleiro(tabuleiro);

    // Coordenadas iniciais definidas diretamente no código
    int linhaNavio1 = 2, colunaNavio1 = 4; // Horizontal
    int linhaNavio2 = 6, colunaNavio2 = 7; // Vertical

    // Verifica e posiciona o primeiro navio (horizontal)
    if (podePosicionar(tabuleiro, linhaNavio1, colunaNavio1, 'H')) {
        posicionarNavio(tabuleiro, linhaNavio1, colunaNavio1, 'H');
    } else {
        printf("Erro ao posicionar o navio horizontal.\n");
    }

    // Verifica e posiciona o segundo navio (vertical)
    if (podePosicionar(tabuleiro, linhaNavio2, colunaNavio2, 'V')) {
        posicionarNavio(tabuleiro, linhaNavio2, colunaNavio2, 'V');
    } else {
        printf("Erro ao posicionar o navio vertical.\n");
    }

    // Exibe o tabuleiro final
    exibirTabuleiro(tabuleiro);

    return 0;
}
