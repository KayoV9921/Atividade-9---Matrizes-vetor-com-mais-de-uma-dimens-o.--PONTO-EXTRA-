#include <stdio.h>
int main() {
    int A[3][3], B[3][3], C[3][3];
    int i, j;

    // Leitura da matriz A
    printf("Digite os valores da matriz A (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]); 
        }
    }

    // Leitura da matriz B
    printf("\nDigite os valores da matriz B (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Soma das matrizes
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Exibição da matriz A
    printf("\nMatriz A:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // Exibição da matriz B
    printf("\nMatriz B:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    // Exibição da matriz C
    printf("\nMatriz C (A + B):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

