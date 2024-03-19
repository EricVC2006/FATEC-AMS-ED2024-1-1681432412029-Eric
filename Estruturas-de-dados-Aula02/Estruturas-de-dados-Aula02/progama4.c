#include <stdio.h>

#define TAMANHO_ARRAY 5

void ordenarArray(int *array, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (*(array + j) > *(array + j + 1)) {
                int temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
            }
        }
    }
}


void multiplicarArray(int *array, int tamanho, int multiplicador) {
    for (int i = 0; i < tamanho; i++) {
        *(array + i) *= multiplicador;
    }
}

void imprimirArray(int *array, int tamanho) {
    printf("Elementos do array após a multiplicação:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}

int main() {
    int array[TAMANHO_ARRAY];
    
    printf("Digite os %d elementos do array:\n", TAMANHO_ARRAY);
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int multiplicador;
    printf("Digite o valor do multiplicador: ");
    scanf("%d", &multiplicador);

    multiplicarArray(array, TAMANHO_ARRAY, multiplicador);
    imprimirArray(array, TAMANHO_ARRAY);

    printf("Elementos do array em ordem crescente:\n");
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");


    return 0;
}
