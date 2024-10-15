/*---------------------------------------------------------------------*/
/*     FATEC-AR                      Estrutura de Dados                */ 
/*                        bubble sort                                  */
/*     Prof. Carlos Henrique Veríssimo                                 */
/*---------------------------------------------------------------------*/
/*
0- O programa deverá solicitar a entrada de "n" números.
1- Cada numero  deverá ocupar um lugar no array, de acordo com  a sequencia de entrada. 
2- Dever deverá ser mostrado  o array  que se formou com estas entradas (posição original do array)
3- Fazer a classificação utilizando o método Bubble  Sort
4- Ao final, mostrar o array ordenado.                                  */
/*---------------------------------------------------------------------*/


include <stdio.h>

// Função otimizada para realizar o Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = 0; // Variável para verificar se houve troca

        // Itera sobre os elementos do array
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Marca que houve troca
            }
        }

        // Se não houve troca, o array já está ordenado
        if (!swapped)
            break;
    }
}

int main() {
    int n, i;

    // Solicita a quantidade de números
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    int arr[n]; // Define o array com tamanho n

    // Entrada dos números no array
    for (i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Mostra o array original
    printf("\nArray original: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Chama a função Bubble Sort para ordenar o array
    bubbleSort(arr, n);

    // Mostra o array ordenado
    printf("\nArray ordenado: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
