/*
==========================================================
  EXERCÍCIO 10
  Busca Binária — versão RECURSIVA
  A função chama a si própria com um intervalo menor.
==========================================================
*/

#include <stdio.h>

/*
  Versão recursiva:
  - Caso base: se inicio > fim, não existe
  - Caso base: se achou o meio, retorna
  - Caso recursivo: chama a si mesma na metade certa
*/
int buscaBinariaRec(int vet[], int inicio, int fim, int alvo) {
    if (inicio > fim)
        return -1;  // intervalo vazio — não encontrou

    int meio = (inicio + fim) / 2;

    if (vet[meio] == alvo)
        return meio;                                          // achou!
    else if (vet[meio] < alvo)
        return buscaBinariaRec(vet, meio + 1, fim,    alvo); // vai à direita
    else
        return buscaBinariaRec(vet, inicio,   meio-1, alvo); // vai à esquerda
}

int main() {
    int v[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n   = 10;

    printf("===== EXERCÍCIO 10 — Busca Binária Recursiva =====\n");
    printf("Vetor ordenado: ");
    int i;
    for (i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n\n");

    int buscas[] = {2, 10, 20, 14, 7, 22};
    int nb = 6;

    for (i = 0; i < nb; i++) {
        int pos = buscaBinariaRec(v, 0, n-1, buscas[i]);
        if (pos != -1)
            printf("Buscar %2d -> Encontrado na posicao [%d]\n", buscas[i], pos);
        else
            printf("Buscar %2d -> Nao encontrado\n", buscas[i]);
    }

    return 0;
}
