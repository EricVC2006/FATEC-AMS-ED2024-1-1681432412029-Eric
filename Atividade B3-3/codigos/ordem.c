/* ----------------------------------------------------------------**
 * FATEC-São Caetano do Sul Estrutura de Dados *
 * Atividade B3-3-Análise Assintótica dos algorimos *
 * Para: Prof Veríssimo * * Objetivo: Implementação de algoritmos de busca *
 * Autor: Eric Chagas                            * * Data:22/10/2024 *
 * *--------------------------------------------------------------**/

int busca_linear_ordem(int A[], int n, int x) {
  for (int i = 1; i <= n; i++) {
    if (A[i] == x)
      return i;
    else if (A[i] > x)
      return -1;
  }

  return -1;
}