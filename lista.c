#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista * criar_lista() {
  Lista *l = malloc(sizeof(Lista));

  l->ultimo = 0;

  return l;
}

void liberar_lista(Lista *l) {
  free(l);
}

int inserir_item(Lista *l, char valor) {
  int pos = l->ultimo;

  if (pos < MAX) {
    l->v[pos] = valor;

    l->ultimo++;

    return 0;
  } else {
    return -1;
  }

}

int remover_item(Lista *l, int pos) {
  // TODO: implementar a remoção de elementos
  printf("Não implementado!\n");
  
  return 0;
}

char acessar_item(Lista *l, int pos) {
  if (pos >= 0 && pos < l->ultimo) {
    // posicao valida!

    return l->v[pos];
  }

  return '\0';
}

int alterar_item(Lista *l, char valor, int pos) {
  if (pos >= 0 && pos < l->ultimo) {
    // posicao valida!

    l->v[pos] = valor;
    return 0;
  } else {
    return -1;
  }
}

int quantidade_lista(Lista *l) {
  return l->ultimo;
}

int esta_cheia(Lista *l) {
  if (l->ultimo == MAX) {
    return TRUE;
  } else {
    return FALSE;
  }
}

void imprimir_lista(Lista *l) {
  int i;

  printf("[");
  
  for (i = 0; i < l->ultimo; i++) {
    printf(" %c ", l->v[i]);
  }

  printf("]\n");
}