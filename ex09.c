/*
==========================================================
  EXERCÍCIO 9
  Busca Binária — versão ITERATIVA
  IMPORTANTE: o vetor deve estar ordenado!
==========================================================
*/

#include <stdio.h>

/*
  Como funciona a busca binária:
  1. Olha para o elemento do meio
  2. Se for o alvo -> achou!
  3. Se o alvo for maior -> busca na metade DIREITA
  4. Se o alvo for menor -> busca na metade ESQUERDA
  5. Repete até encontrar ou o espaço acabar
*/
int buscaBinaria(int vet[], int n, int alvo) {
    int inicio = 0;
    int fim    = n - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vet[meio] == alvo)
            return meio;           // encontrou!
        else if (vet[meio] < alvo)
            inicio = meio + 1;     // vai para a direita
        else
            fim = meio - 1;        // vai para a esquerda
    }
    return -1;                     // não encontrou
}

int main() {
    // Vetor DEVE estar ordenado
    int v[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n   = 10;

    printf("===== EXERCÍCIO 9 — Busca Binária Iterativa =====\n");
    printf("Vetor ordenado: ");
    int i;
    for (i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n\n");

    int buscas[] = {1, 7, 13, 19, 6, 20};
    int nb = 6;

    for (i = 0; i < nb; i++) {
        int pos = buscaBinaria(v, n, buscas[i]);
        if (pos != -1)
            printf("Buscar %2d -> Encontrado na posicao [%d]\n", buscas[i], pos);
        else
            printf("Buscar %2d -> Nao encontrado\n", buscas[i]);
    }

    return 0;
}
