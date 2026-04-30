/*
==========================================================
  EXERCÍCIO 1
  Criar struct Aluno com: nome, idade e média.
  Declarar uma variável e atribuir valores.
==========================================================
*/

#include <stdio.h>
#include <string.h>

int main() {

    // Definição da struct
    struct Aluno {
        char nome[50];
        int  idade;
        float media;
    };

    // Declarar a variável
    struct Aluno a1;

    // Atribuir valores
    strcpy(a1.nome, "João Silva");
    a1.idade = 20;
    a1.media = 14.5;

    // Imprimir os dados
    printf("===== EXERCÍCIO 1 =====\n");
    printf("Nome : %s\n",  a1.nome);
    printf("Idade: %d anos\n", a1.idade);
    printf("Media: %.1f\n", a1.media);

    return 0;
}
