typedef struct tipoCarro carro;
struct tipoCarro {
    char nome[20];
    char modelo[20];
    int tipo;
    int horas;
    struct tipoCarro *prox;
};

void inicializa();
void adiciona(carro **inicio, carro **fim);
void printa(carro *objetoCarro);
void apaga(carro **inicio, carro **fim);
void maiorValor(carro *objetoCarro);
void maiorValorCategoria(carro *objetoCarro);
void totalFaturado(carro *objetoCarro);
void totalCarros(carro *objetoCarro);
void mediaFaturamentoPorCategoria(carro *objetoCarro);
void mediaDoFaturamentoGeral(carro *objetoCarro);
void sairMenu();
