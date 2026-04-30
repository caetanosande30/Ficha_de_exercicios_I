/*
==========================================================
  EXERCÍCIO 12
  Comparação experimental (contagem de passos):
  Busca Linear vs Busca Binária
  - Vetor pequeno (10 elementos)
  - Vetor grande  (1000 elementos)
==========================================================
*/

#include <stdio.h>

int buscaLinearPassos(int vet[], int n, int alvo, int *passos) {
    int i;
    *passos = 0;
    for (i = 0; i < n; i++) {
        (*passos)++;
        if (vet[i] == alvo) return i;
    }
    return -1;
}

int buscaBinariaPassos(int vet[], int n, int alvo, int *passos) {
    int inicio = 0, fim = n - 1;
    *passos = 0;
    while (inicio <= fim) {
        (*passos)++;
        int meio = (inicio + fim) / 2;
        if      (vet[meio] == alvo) return meio;
        else if (vet[meio] <  alvo) inicio = meio + 1;
        else                        fim    = meio - 1;
    }
    return -1;
}

void testar(int vet[], int n, int alvo, const char *descricao) {
    int pl, pb;
    buscaLinearPassos (vet, n, alvo, &pl);
    buscaBinariaPassos(vet, n, alvo, &pb);

    printf("  %s (buscar %d):\n", descricao, alvo);
    printf("    Busca Linear  : %4d passos\n", pl);
    printf("    Busca Binaria : %4d passos\n", pb);
    printf("    Binaria foi %.1fx mais rapida\n\n", (float)pl / pb);
}

int main() {
    int i;

    // ----- Vetor pequeno: 10 elementos -----
    int pequeno[10];
    for (i = 0; i < 10; i++) pequeno[i] = i * 2 + 1; // {1,3,5,...,19}

    // ----- Vetor grande: 1000 elementos -----
    int grande[1000];
    for (i = 0; i < 1000; i++) grande[i] = i + 1;     // {1,2,...,1000}

    printf("===== EXERCÍCIO 12 — Linear vs Binaria =====\n\n");

    printf("== VETOR PEQUENO (10 elementos): {1,3,5,...,19} ==\n");
    testar(pequeno, 10, 1,  "Melhor caso (primeiro elemento)");
    testar(pequeno, 10, 11, "Caso médio  (elemento do meio)");
    testar(pequeno, 10, 19, "Pior caso   (ultimo elemento)");

    printf("== VETOR GRANDE (1000 elementos): {1,2,...,1000} ==\n");
    testar(grande, 1000, 1,    "Melhor caso (primeiro elemento)");
    testar(grande, 1000, 500,  "Caso médio  (elemento 500)");
    testar(grande, 1000, 1000, "Pior caso   (ultimo elemento)");

    printf("CONCLUSAO:\n");
    printf("  Para 10 elementos : diferenca pequena.\n");
    printf("  Para 1000 elementos: busca binaria usa ~10 passos vs ~1000 da linear!\n");
    printf("  Quanto maior o vetor, MAIOR a vantagem da busca binaria.\n");

    return 0;
}
