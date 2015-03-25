#define TAM_MAX 100
#define TRUE 1
#define FALSE 0

#define OK 0
#define ESTRUTURA_NAO_INICIALIZADA -1
#define ESTRUTURA_VAZIA -2
#define ESTRUTURA_CHEIA -3

// Declaração da estrutura de uma Fila.
typedef struct {
    int itens[TAM_MAX];
    int inicio;
    int fim
} FilaVet;


FilaVet* criarFila();
int estahVazia(FilaVet* fila);
int estahCheia(FilaVet* fila);
int inserir(FilaVet* fila, int item);
int remover(FilaVet* fila, int* item);
int obterInicio(FilaVet* fila, int* item);
int liberarFila(FilaVet* fila);
