#include <stdio.h>
#include <stdlib.h>


int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    const int tamanho = 5;

    int numeroInteiros[tamanho];

    printf("Insira %d números:\n", tamanho);

    for (int i = 0; i < tamanho; ++i) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeroInteiros[i]);
    }

    qsort(numeroInteiros, tamanho, sizeof(int), comparar);

    printf("\nNúmeros ordenados em ordem ascendente:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("%d ", numeroInteiros[i]);
    }
    printf("\n");
    return 0;
}
