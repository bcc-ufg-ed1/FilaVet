#include<stdio.h>
#include "FilaVet.h"

void imprimirFila(FilaVet* f) {
    FilaVet* fAux = criarFila();
    int item;
    while(!estahVazia(f)) {
        remover(f, &item);
        printf("%d\n", item);
        inserir(fAux, item);
    }
    while(!estahVazia(fAux)) {
        remover(fAux, &item);
        inserir(f, item);
    }
    liberarFila(fAux);
}


int main() {
    FilaVet* minhaFila = criarFila();

    inserir(minhaFila, 10);
    inserir(minhaFila, 20);
    inserir(minhaFila, 30);
    imprimirFila(minhaFila);

    int i;
    remover(minhaFila, &i);
    printf("Elemento removido: %d\n", i);

    remover(minhaFila, &i);
    printf("Elemento removido: %d\n", i);

    imprimirFila(minhaFila);

    return 0;
}
