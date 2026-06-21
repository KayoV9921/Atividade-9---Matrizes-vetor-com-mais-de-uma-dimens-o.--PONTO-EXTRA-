#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int maior, linha, coluna;

    // Leitura da matriz
    printf("Digite os valores da matriz 4x4:\n");

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Matriz[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializa com o primeiro elemento
    maior = matriz[0][0];
    linha = 0;
    coluna = 0;

    // Procura o maior valor
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    // Exibe a matriz
    printf("\nMatriz informada:\n");

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Exibe o maior valor e sua posição
    printf("\nMaior valor encontrado: %d\n", maior);
    printf("Posicao: linha %d, coluna %d\n", linha + 1, coluna + 1);

    return 0;
}