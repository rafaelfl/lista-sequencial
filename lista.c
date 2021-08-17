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

  // enquanto houver espaço na lista
  if (pos < MAX) {
    l->v[pos] = valor;

    l->ultimo++;

    return 0;
  } else {
    return -1;
  }

}

int remover_item(Lista *l, int pos) {
  // posicao valida!
  if (pos >= 0 && pos < l->ultimo) {
    // posição atual. daqui pra frente eu preciso
    // copiar os itens para trás
    int atual = pos;

    // copia os itens da posição da frente para a atual
    while (atual < l->ultimo - 1) {
      l->v[atual] = l->v[atual+1];
      atual++;
    }

    // diminui o tamanho da lista
    l->ultimo--;

    return 0;
  } else {
    return -1;
  }
}

char acessar_item(Lista *l, int pos) {
  // posicao valida!
  if (pos >= 0 && pos < l->ultimo) {
    return l->v[pos];
  }

  return '\0';
}

int alterar_item(Lista *l, char valor, int pos) {
  // posicao valida!
  if (pos >= 0 && pos < l->ultimo) {
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