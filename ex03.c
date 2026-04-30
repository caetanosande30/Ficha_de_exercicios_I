/*
==========================================================
  EXERCÍCIO 3
  Ler os dados de 5 alunos (usando struct) e imprimi-los.
==========================================================
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char  nome[50];
    int   idade;
    float media;
} Aluno;

int main() {
    Aluno turma[5];
    int i;

    printf("===== EXERCÍCIO 3 =====\n");
    printf("Introduza os dados dos 5 alunos:\n\n");

    // Leitura dos dados
    for (i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("  Nome : ");
        scanf(" %[^\n]", turma[i].nome);   // lê com espaços
        printf("  Idade: ");
        scanf("%d", &turma[i].idade);
        printf("  Media: ");
        scanf("%f", &turma[i].media);
        printf("\n");
    }

    // Impressão dos dados
    printf("\n--- Dados da Turma ---\n");
    printf("%-20s %-8s %-8s\n", "Nome", "Idade", "Media");
    printf("--------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%-20s %-8d %.1f\n",
               turma[i].nome, turma[i].idade, turma[i].media);
    }

    return 0;
}
