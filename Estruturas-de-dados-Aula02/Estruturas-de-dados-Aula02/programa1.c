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


int encontrarMaiorElemento(int *array, int tamanho) {
    int maior = *array;
    int *ponteiro = array;
    
    for (int i = 1; i < tamanho; i++) {
        if (*(ponteiro + i) > maior) {
            maior = *(ponteiro + i);
        }
    }
    
    return maior;
}

int main() {
    int array[TAMANHO_ARRAY];
    
    printf("Digite os %d elementos do array:\n", TAMANHO_ARRAY);
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int maior = encontrarMaiorElemento(array, TAMANHO_ARRAY);
    
    printf("O maior elemento do array é: %d\n", maior);


     ordenarArray(array, TAMANHO_ARRAY);

    printf("Elementos do array em ordem crescente:\n");
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");

    return 0;

}
