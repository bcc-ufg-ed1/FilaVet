#include<stdio.h>
#include "FilaVet.h"

int main() {
    FilaVet* minhaFila = criarFila();

    inserir(minhaFila, 10);
    inserir(minhaFila, 20);
    inserir(minhaFila, 30);

    int i;
    remover(minhaFila, &i);
    printf("Elemento removido: %d\n", i);

    remover(minhaFila, &i);
    printf("Elemento removido: %d\n", i);

    imprimirFila(minhaFila);

    return 0;
}
