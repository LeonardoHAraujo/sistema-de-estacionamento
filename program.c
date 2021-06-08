#include "typeStruct.h"

int tam;

void inicializa(carro *inicio, carro *fim) {
    tam = 0;
    printf("Estacionamento!\n");
    printf("Quantidade de carros: %d\n", tam);
    printf("\n");
}

void adiciona(carro **inicio, carro **fim){
    carro *novo = (carro *)malloc(sizeof(carro));

    if(novo) {
        printf("Nome: ");
        scanf("%s", &novo->nome);
        printf("Modelo: ");
        scanf("%s", &novo->modelo);
        printf("Tipo de veículo (1 - Pequeno | 2 - Médio | 2 - Grande): ");
        scanf("%d", &novo->tipo);
        printf("Tempo de permanência (horas): ");
        scanf("%d", &novo->horas);
        if(!(*inicio)) {
            *inicio = novo;
            *fim = novo;
        }
        else {
            carro *aux = (*inicio);
            while(aux->prox != NULL)
                aux = aux->prox;
            aux->prox = novo;     
            *fim = novo;
        }
        tam++;
    }   
    return;
}

void printa(carro *objetoCarro){
    printf("\n\nCarros estacionados: %d\n", tam);
    int posicao = 1;
    while(objetoCarro) {
        printf("\n");
        printf("Posicao.: %d\n", posicao);
        printf("Nome..: %s\n", objetoCarro->nome);
        printf("Modelo...: %s\n", objetoCarro->modelo);
        printf("Tipo de veículo...: %d\n", objetoCarro->tipo);
        printf("Tempo de permanência (horas)...: %d\n", objetoCarro->horas);

        int resultado;
        if(objetoCarro->tipo == 1) {
            resultado = objetoCarro->horas * 5;
        } else if(objetoCarro->tipo == 2) {
            resultado = objetoCarro->horas * 7;
        } else if(objetoCarro->tipo == 3) {
            resultado = objetoCarro->horas * 9;
        }

        printf("Total a pagar...: R$ %d\n", resultado);
        posicao++;
        objetoCarro = objetoCarro->prox;
    }
}

void apaga(carro **inicio, carro **fim) {
    printf("Primeiro carro da fila removido! \n");
    if(!(*inicio) && !(*fim)) {
        printf("Fila vazia. Impossivel remover!\n");
        return;
    }
    
    carro *aux = *inicio;
    if(*inicio == *fim) {
        *inicio = NULL;
        *fim = NULL;
        free(aux);
        tam--;
        return;
    }
    
    *inicio = (*inicio)->prox;
    free(aux);
    
    tam--;
}

void totalFaturado(carro *objetoCarro) {
    int total = 0;
    while(objetoCarro) {
        int resultado;
        if(objetoCarro->tipo == 1) {
            resultado = objetoCarro->horas * 5;
        } else if(objetoCarro->tipo == 2) {
            resultado = objetoCarro->horas * 7;
        } else if(objetoCarro->tipo == 3) {
            resultado = objetoCarro->horas * 9;
        }

        total += resultado;
        objetoCarro = objetoCarro->prox;
    }

    printf("Total faturado...: R$ %d\n", total);
}

void totalCarros(carro *objetoCarro) {
    printf("Total de Carros...: %d\n", tam);
}

void mediaDoFaturamentoGeral(carro *objetoCarro) {
    int total = 0, media;
    while(objetoCarro) {
        int resultado;
        if(objetoCarro->tipo == 1) {
            resultado = objetoCarro->horas * 5;
        } else if(objetoCarro->tipo == 2) {
            resultado = objetoCarro->horas * 7;
        } else if(objetoCarro->tipo == 3) {
            resultado = objetoCarro->horas * 9;
        }

        total += resultado;
        media = total / 2;
        objetoCarro = objetoCarro->prox;
    }

    printf("Media faturada...: R$ %d\n", media);
}

void sairMenu() { return; }

void maiorValor(carro *objetoCarro){}
void maiorValorCategoria(carro *objetoCarro){}
void mediaFaturamentoPorCategoria(carro *objetoCarro){}
