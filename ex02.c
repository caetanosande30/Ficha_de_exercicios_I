/*
==========================================================
  EXERCÍCIO 2
  Usar typedef para simplificar a declaração da struct Aluno
  e criar 3 variáveis.
==========================================================
*/

#include <stdio.h>
#include <string.h>

// Com typedef não precisamos escrever "struct Aluno" toda vez,
// basta escrever "Aluno" diretamente.
typedef struct {
    char  nome[50];
    int   idade;
    float media;
} Aluno;

int main() {

    // Criar 3 variáveis de forma simples
    Aluno a1, a2, a3;

    // Atribuir valores
    strcpy(a1.nome, "Ana Paula");    a1.idade = 19;  a1.media = 16.0;
    strcpy(a2.nome, "Bruno Costa");  a2.idade = 21;  a2.media = 12.5;
    strcpy(a3.nome, "Carla Matos");  a3.idade = 22;  a3.media =  9.0;

    // Imprimir
    printf("===== EXERCÍCIO 2 =====\n");
    printf("Aluno 1: %-15s | %d anos | Media: %.1f\n", a1.nome, a1.idade, a1.media);
    printf("Aluno 2: %-15s | %d anos | Media: %.1f\n", a2.nome, a2.idade, a2.media);
    printf("Aluno 3: %-15s | %d anos | Media: %.1f\n", a3.nome, a3.idade, a3.media);

    return 0;
}
