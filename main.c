#include <stdio.h>
#include "lista.h"

int main(void) {
  Lista *l;
  char c;
  int tamanho, cheia;

  l = criar_lista();

  inserir_item(l, 'R');
  inserir_item(l, 'A');
  inserir_item(l, 'F');
  inserir_item(l, 'A');

  imprimir_lista(l);

  c = acessar_item(l, 2);

  printf("Caractere acessado: %c\n", c);

  alterar_item(l, 'E', 1);
  inserir_item(l, 'R');

  imprimir_lista(l);

  tamanho = quantidade_lista(l);
  cheia = esta_cheia(l);

  printf("Tamanho da lista: %d\n", tamanho);

  if (cheia) {
    printf("A lista está cheia!\n");
  } else {
    printf("A lista NÃO está cheia!\n");
  }

  remover_item(l, 0);

  imprimir_lista(l);

  liberar_lista(l);
}