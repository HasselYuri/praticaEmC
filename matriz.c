#include <stdio.h>

int main() {
    int matriz[3][3];
    
    // Pegando valores para a matriz
    printf("Digite os valores da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Exibindo a matriz
    printf("\nA matriz informada é:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Exibindo os números impares da matriz
    printf("\nOs números ímpares na matriz são:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] % 2 != 0) { // Condição que pega os números e vê quais são impares ou não
                printf("%d\t", matriz[i][j]);
            } else {
                printf(" \t"); 
            }
        }
        printf("\n");
    }
    return 0;
}
