/*
==========================================================
  EXERCÍCIO 5
  Vetor de struct Produto com: nome, preço e quantidade.
  Calcular o valor total do estoque.
==========================================================
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char  nome[50];
    float preco;
    int   quantidade;
} Produto;

int main() {
    // Vetor de 4 produtos
    Produto estoque[4];
    int i;
    float total = 0;

    // Preencher dados
    strcpy(estoque[0].nome, "Caderno");   estoque[0].preco = 150.0; estoque[0].quantidade = 10;
    strcpy(estoque[1].nome, "Caneta");    estoque[1].preco =  25.0; estoque[1].quantidade = 50;
    strcpy(estoque[2].nome, "Borracha");  estoque[2].preco =  10.0; estoque[2].quantidade = 30;
    strcpy(estoque[3].nome, "Mochila");   estoque[3].preco = 800.0; estoque[3].quantidade =  5;

    printf("===== EXERCÍCIO 5 =====\n");
    printf("%-15s %10s %12s %15s\n", "Produto", "Preco(MT)", "Quantidade", "Subtotal(MT)");
    printf("---------------------------------------------------------------\n");

    for (i = 0; i < 4; i++) {
        float subtotal = estoque[i].preco * estoque[i].quantidade;
        total += subtotal;
        printf("%-15s %10.2f %12d %15.2f\n",
               estoque[i].nome,
               estoque[i].preco,
               estoque[i].quantidade,
               subtotal);
    }

    printf("---------------------------------------------------------------\n");
    printf("VALOR TOTAL DO ESTOQUE: %.2f MT\n", total);

    return 0;
}
