/*
==========================================================
  EXERCÍCIO 6
  Ordenar vetor de struct Aluno pela média (ordem crescente)
  usando Bubble Sort.
==========================================================
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char  nome[50];
    int   idade;
    float media;
} Aluno;

void bubbleSort(Aluno vet[], int n) {
    int i, j;
    Aluno temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            // Trocar se a média do aluno actual for maior que a do seguinte
            if (vet[j].media > vet[j+1].media) {
                temp     = vet[j];
                vet[j]   = vet[j+1];
                vet[j+1] = temp;
            }
        }
    }
}

int main() {
    Aluno turma[5];
    int i;

    // Dados de exemplo
    char nomes[5][50] = {"Oscar", "Beatriz", "Nuno", "Lara", "Hugo"};
    float medias[5]   = {12.0, 17.5, 9.0, 14.5, 11.0};

    for (i = 0; i < 5; i++) {
        strcpy(turma[i].nome, nomes[i]);
        turma[i].media = medias[i];
        turma[i].idade = 20;
    }

    printf("===== EXERCÍCIO 6 =====\n");

    printf("Antes da ordenacao:\n");
    for (i = 0; i < 5; i++)
        printf("  %s — %.1f\n", turma[i].nome, turma[i].media);

    bubbleSort(turma, 5);

    printf("\nDepois da ordenacao (crescente por media):\n");
    for (i = 0; i < 5; i++)
        printf("  %d. %-12s — Media: %.1f\n", i+1, turma[i].nome, turma[i].media);

    return 0;
}
