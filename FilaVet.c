#include<stdio.h>
#include "FilaVet.h"

int incrementar(int i) {
  // ou (i + 1) % TAM_MAX
  if (i == TAM_MAX - 1) return 0;
  else return i + 1;
}

FilaVet* criarFila() {
    FilaVet* fila = malloc(sizeof(*fila));
    if (fila == NULL)
        return NULL;
    fila->inicio = 0;
    fila->fim = 0;
    return fila;
}

int liberarFila(FilaVet* fila) {
    if (fila == NULL)
        return ESTRUTURA_NAO_INICIALIZADA;
    free(fila);
    fila = NULL;
    return OK;
}

int estahCheia(FilaVet* fila) {
    if (fila == NULL)
        return ESTRUTURA_NAO_INICIALIZADA;
    if (incrementar(fila->fim) == fila->inicio)
        return TRUE;
    return FALSE;
}

int estahVazia(FilaVet* fila) {
    if (fila == NULL)
        return ESTRUTURA_NAO_INICIALIZADA;
    if (fila->inicio == fila->fim)
        return TRUE;
    return FALSE;
}

int inserir(FilaVet* fila, int item) {
    if (fila == NULL)
        return ESTRUTURA_NAO_INICIALIZADA;
    if (estahCheia(fila))
        return ESTRUTURA_CHEIA;
    fila->itens[fila->fim] = item;
    fila->fim = incrementar(fila->fim);
    return OK;
}

int remover(FilaVet* fila, int* item) {
    if (fila == NULL)
        return ESTRUTURA_NAO_INICIALIZADA;
    if (estahVazia(fila))
        return ESTRUTURA_VAZIA;
    if (item != NULL)
        *item = fila->itens[fila->inicio];
    fila->inicio = incrementar(fila->inicio);
    return OK;
}

int obterInicio(FilaVet* fila, int* item) {
    if (fila == NULL)
        return ESTRUTURA_NAO_INICIALIZADA;
    if (estahVazia(fila))
        return ESTRUTURA_VAZIA;
    if (item == NULL)
        return PARAMETRO_INVALIDO;
    *item = fila->itens[fila->inicio];
    return OK;
}
