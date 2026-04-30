/*
==========================================================
  EXERCÍCIO 4
  Função que recebe um struct Aluno e retorna se o aluno
  está aprovado (média >= 10).
==========================================================
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char  nome[50];
    int   idade;
    float media;
} Aluno;

// Função: retorna 1 se aprovado, 0 se reprovado
int aprovado(Aluno a) {
    return a.media >= 10;
}

int main() {
    Aluno a1, a2, a3;

    strcpy(a1.nome, "Fernanda");  a1.media = 13.0;
    strcpy(a2.nome, "Tomas");     a2.media =  7.5;
    strcpy(a3.nome, "Ricardo");   a3.media = 10.0;

    printf("===== EXERCÍCIO 4 =====\n");
    printf("%-12s | Media | Resultado\n", "Nome");
    printf("----------------------------------\n");

    Aluno lista[3] = {a1, a2, a3};
    int i;
    for (i = 0; i < 3; i++) {
        printf("%-12s | %5.1f | %s\n",
               lista[i].nome,
               lista[i].media,
               aprovado(lista[i]) ? "APROVADO" : "REPROVADO");
    }

    return 0;
}
