/*
 *
 * Implementação de uma lista sequencial (i.e., utilizando vetores) de caracteres
 *
*/

#define MAX 100000

#define TRUE 1
#define FALSE 0

typedef struct _lista {
  char v[MAX];
  int quantidade;
} Lista;

Lista * criar_lista();

void liberar_lista(Lista *l);

int inserir_item(Lista *l, char valor);

int remover_item(Lista *l, int pos);

char acessar_item(Lista *l, int pos);

int alterar_item(Lista *l, char valor, int pos);

int quantidade_lista(Lista *l);

int esta_cheia(Lista *l);

void imprimir_lista(Lista *l);