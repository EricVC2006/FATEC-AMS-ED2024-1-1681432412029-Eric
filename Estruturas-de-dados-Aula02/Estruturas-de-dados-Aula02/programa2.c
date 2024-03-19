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


int somarElementos(int *array, int tamanho) {
    int soma = 0;
    int *ponteiro = array;
    
    for (int i = 0; i < tamanho; i++) {
        soma += *(ponteiro + i);
    }
    
    return soma;
}

int main() {
    int array[TAMANHO_ARRAY];
    
    printf("Digite os %d elementos do array:\n", TAMANHO_ARRAY);
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int soma = somarElementos(array, TAMANHO_ARRAY);
    
    printf("A soma dos elementos do array é: %d\n", soma);

    ordenarArray(array, TAMANHO_ARRAY);

    printf("Elementos do array em ordem crescente:\n");
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");

    return 0;
}
