#include <stdio.h>
#include <stdlib.h>
#include "program.c"

int main(){
    carro *inicio = NULL;
    carro *fim = NULL;
    char maisUm;
    int operacao;

    inicializa(inicio, fim);

    do{
        adiciona(&inicio, &fim);
        printa(inicio);

        printf("\n");

        printf("Inserir mais um (S/N)? ");
        fflush(stdin);
        scanf("%s", &maisUm);

    }while(maisUm == 'S' || maisUm == 's');

    if(maisUm == 'N' || maisUm == 'n') {
        
        printf("\n");
        printf("Menu:");
        printf("\n");
        printf("\n");

        printf("1 - Quem pagará maior valor \n");
        printf("2 - Quem pagará maior valor por categoria \n");
        printf("3 - Total de faturamento \n");
        printf("4 - Total de carros \n");
        printf("5 - Média de faturamento por categoria \n");
        printf("6 - Média de faturamento do estacionamento \n");
        printf("7 - Remover carro \n");
        printf("8 - Sair do sistema \n");
        scanf("%d", &operacao);

        if(operacao == 1) {
            maiorValor(inicio);
        } else if(operacao == 2) {
            maiorValorCategoria(inicio);
        } else if(operacao == 3) {
            totalFaturado(inicio);
        } else if(operacao == 4) {
            totalCarros(inicio);
        }else if(operacao == 5) {
            mediaFaturamentoPorCategoria(inicio);
        }else if(operacao == 6) {
            mediaDoFaturamentoGeral(inicio);
        }else if(operacao == 7) {
            apaga(&inicio, &fim);
        }else if(operacao == 8) {
            sairMenu();
        }
    }

    // system("PAUSE");
    return 0;
}
