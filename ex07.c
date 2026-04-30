/*
==========================================================
  EXERCÍCIO 7
  Busca Linear em vetor de inteiros.
  Retorna o índice do elemento ou -1 se não encontrar.
==========================================================
*/

#include <stdio.h>

// Função de busca linear
// Percorre o vetor do início ao fim, elemento por elemento
int buscaLinear(int vet[], int n, int alvo) {
    int i;
    for (i = 0; i < n; i++) {
        if (vet[i] == alvo)
            return i;   // encontrou! devolve a posição
    }
    return -1;          // não encontrou
}

int main() {
    int v[] = {5, 3, 8, 1, 9, 2, 7, 4, 6};
    int n   = 9;

    printf("===== EXERCÍCIO 7 — Busca Linear =====\n");
    printf("Vetor: ");
    int i;
    for (i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n\n");

    int buscas[] = {9, 4, 6, 10};
    int nb = 4;

    for (i = 0; i < nb; i++) {
        int pos = buscaLinear(v, n, buscas[i]);
        if (pos != -1)
            printf("Buscar %2d -> Encontrado na posicao [%d]\n", buscas[i], pos);
        else
            printf("Buscar %2d -> Nao encontrado\n", buscas[i]);
    }

    return 0;
}
