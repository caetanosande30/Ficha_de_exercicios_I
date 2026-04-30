/*
==========================================================
  EXERCÍCIO 8
  Busca Linear que também conta quantas comparações
  foram feitas durante a busca.
==========================================================
*/

#include <stdio.h>

// Parâmetro "comparacoes" é um ponteiro para guardar o contador
int buscaLinearComContagem(int vet[], int n, int alvo, int *comparacoes) {
    int i;
    *comparacoes = 0;   // começa a zero

    for (i = 0; i < n; i++) {
        (*comparacoes)++;           // conta cada comparação
        if (vet[i] == alvo)
            return i;              // achou!
    }
    return -1;                     // não achou
}

int main() {
    int v[] = {5, 3, 8, 1, 9, 2, 7};
    int n   = 7;
    int comparacoes, pos;

    printf("===== EXERCÍCIO 8 — Busca Linear com Contagem =====\n");
    printf("Vetor: ");
    int i;
    for (i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n\n");

    // Buscar 5 — está na primeira posição (melhor caso)
    pos = buscaLinearComContagem(v, n, 5, &comparacoes);
    printf("Buscar  5 -> posicao [%2d] | Comparacoes: %d  (melhor caso)\n", pos, comparacoes);

    // Buscar 9 — está a meio
    pos = buscaLinearComContagem(v, n, 9, &comparacoes);
    printf("Buscar  9 -> posicao [%2d] | Comparacoes: %d\n", pos, comparacoes);

    // Buscar 7 — está no fim
    pos = buscaLinearComContagem(v, n, 7, &comparacoes);
    printf("Buscar  7 -> posicao [%2d] | Comparacoes: %d  (ultimo elemento)\n", pos, comparacoes);

    // Buscar 99 — não existe (pior caso)
    pos = buscaLinearComContagem(v, n, 99, &comparacoes);
    printf("Buscar 99 -> posicao [%2d] | Comparacoes: %d  (pior caso)\n", pos, comparacoes);

    return 0;
}
