/*
==========================================================
  EXERCÍCIO 11
  Por que não é possível aplicar busca binária diretamente
  em vetor não ordenado? — Demonstração prática.
==========================================================
*/

#include <stdio.h>

int buscaBinaria(int vet[], int n, int alvo) {
    int inicio = 0, fim = n - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (vet[meio] == alvo) return meio;
        else if (vet[meio] < alvo) inicio = meio + 1;
        else fim = meio - 1;
    }
    return -1;
}

int buscaLinear(int vet[], int n, int alvo) {
    int i;
    for (i = 0; i < n; i++)
        if (vet[i] == alvo) return i;
    return -1;
}

int main() {
    // Vetor NÃO ordenado
    int desordenado[] = {9, 3, 7, 1, 5, 8, 2, 6, 4};
    int n = 9;
    int alvo = 6;

    printf("===== EXERCÍCIO 11 — Problema da Busca Binária sem Ordem =====\n\n");

    printf("Vetor: ");
    int i;
    for (i = 0; i < n; i++) printf("%d ", desordenado[i]);
    printf("\n");
    printf("Queremos encontrar o valor: %d\n\n", alvo);

    // Busca linear encontra correctamente
    int posLinear  = buscaLinear(desordenado, n, alvo);
    // Busca binária pode falhar
    int posBinaria = buscaBinaria(desordenado, n, alvo);

    printf("Busca Linear  -> posicao: %d  (CORRETO — encontrou %d)\n",
           posLinear, desordenado[posLinear]);

    if (posBinaria != -1)
        printf("Busca Binaria -> posicao: %d  (casualmente acertou)\n", posBinaria);
    else
        printf("Busca Binaria -> NAO encontrou! (ERRADO — o valor existe!)\n");

    printf("\n--- EXPLICACAO ---\n");
    printf("A busca binaria funciona assim:\n");
    printf("  meio = posicao 4 -> valor %d\n", desordenado[4]);
    printf("  %d > %d? Entao vai para a DIREITA...\n", alvo, desordenado[4]);
    printf("  Mas o %d esta na esquerda! A busca tomou a decisao errada.\n\n", alvo);
    printf("REGRA: a busca binaria so funciona em vetores ORDENADOS.\n");
    printf("Solucao: ordene o vetor primeiro (ex: Bubble Sort), depois busque.\n");

    return 0;
}
