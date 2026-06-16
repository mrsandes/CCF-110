#include <stdio.h>
#include <string.h>

#define SUCESSO 0
#define MAX_TAM_NOME 50
#define NUM_MAX_SELECOES 48
#define UPPER_LOWER_ASCII 32
#define FIRST_UPPER 65
#define LAST_UPPER 90
#define NOT_FOUND -1

#define FILE_JOGOS "jogos.txt"
#define FILE_SELECOES "selecoes.txt"
#define FILE_CLASSIFICACAO "classificacao.txt"
// Caso se faça necessário mudar o arquivo de entrada, com os ‘defines’ é 
// necessário alterar apenas uma linha.

typedef struct {
  char nome[MAX_TAM_NOME];
  int pontos;
  int gols;
} Selecao;
// ‘typedef’ é utilizado já que, ao utilizá-lo, não é mais necessário escrever ‘struct’ antes das 
// declarações de variáveis do tipo ‘Selecao’. Com o ‘typedef’ criamos um novo tipo de dado, tornando
// o código mais legível.

char* toLower(char string[]) {
  int i = 0;

  while (string[i] != '\0') {
    if (string[i] >= FIRST_UPPER && string[i] <= LAST_UPPER) {
      string[i] += UPPER_LOWER_ASCII;
    }

    i++;
  }  
  
  return string;
}

int verificaSelecao(Selecao selecoes[], char selecao[], int numSelecoes) {
  for (int i = 0; i < numSelecoes; i++) {
    if (strcmp(selecoes[i].nome, selecao) == 0) {
      return i;
    }
  }

  return NOT_FOUND;  
}

void registraSelecoes(Selecao selecoes[], int *numSelecoes) {
  FILE *Fselecoes = fopen(FILE_SELECOES, "r");

  if (Fselecoes == NULL) {
    printf("Erro ao abrir o arquivo '%s'!\n", FILE_SELECOES);
    return;
  }

  char nomeSelecao[MAX_TAM_NOME];

  while (fscanf(Fselecoes, "%s", nomeSelecao) == 1) {
    if (verificaSelecao(selecoes, nomeSelecao, *numSelecoes) == NOT_FOUND) {
      strcpy(selecoes[*numSelecoes].nome, nomeSelecao);
      selecoes[*numSelecoes].gols = 0;   
      selecoes[*numSelecoes].pontos = 0;
      
      *numSelecoes += 1;
    }
  }

  for (int i = *numSelecoes; i < NUM_MAX_SELECOES; i++) {
    strcpy(selecoes[i].nome, "---");
    selecoes[i].gols = 0;
    selecoes[i].pontos = 0;
  }

  fclose(Fselecoes);
}

void atualizaSelecao(Selecao *selecao, int golsSelecao, int golsAdversario) {
  selecao->gols += golsSelecao;

  if (golsSelecao > golsAdversario) {
    selecao->pontos += 3;
  }

  else if (golsSelecao == golsAdversario) {
    selecao->pontos += 1;
  }
}
// Observe que o uso de ‘->’ substitui a maneira convencional de dereferenciar 
// o ponteiro usando ‘*’ e ‘.’ que seria: “(*struct).membro”.

void contabilizaJogos(Selecao selecoes[], int numSelecoes) {
  FILE *Fjogos = fopen(FILE_JOGOS, "r");

  if (Fjogos == NULL) {
    printf("Erro ao abrir o arquivo '%s'!\n", FILE_JOGOS);
    return;
  }

  Selecao *selecaoA = NULL;
  Selecao *selecaoB = NULL;
  // Não é necessário alocar memória para o ponteiro para ‘Selecao’ já que ele irá receber 
  // o endereço de uma seleção em seguida, portanto, utiliza-se ‘NULL’.

  char nomeA[MAX_TAM_NOME], nomeB[MAX_TAM_NOME];
  int golsA, golsB;
  int posSelecaoA, posSelecaoB;
  int numValoresLidos;

  do {
    numValoresLidos = fscanf(Fjogos, "%s %d x %d %s", nomeA, &golsA, &golsB, nomeB);

    if (numValoresLidos == 4) { 
      posSelecaoA = verificaSelecao(selecoes, nomeA, numSelecoes);
      posSelecaoB = verificaSelecao(selecoes, nomeB, numSelecoes);

      if (posSelecaoA != NOT_FOUND && posSelecaoB != NOT_FOUND && posSelecaoA != posSelecaoB) {
        selecaoA = &selecoes[posSelecaoA];
        selecaoB = &selecoes[posSelecaoB];
        
        atualizaSelecao(selecaoA, golsA, golsB);
        atualizaSelecao(selecaoB, golsB, golsA);   
      }

      else {
        if (posSelecaoA == NOT_FOUND) {
          printf("Selecao '%s' nao foi registrada!\n", nomeA);
        }
        
        if (posSelecaoB == NOT_FOUND && strcmp(nomeA, nomeB) != 0) {
          printf("Selecao '%s' nao foi registrada!\n", nomeB);
        }

        if (posSelecaoA == posSelecaoB && posSelecaoA != NOT_FOUND) {
          printf("Selecao '%s' nao pode jogar contra si mesma!\n", nomeA);
        }
      }
    }    
  } while (numValoresLidos != EOF);

  fclose(Fjogos);
}

void ordenaSelecoes(Selecao selecoes[], int numSelecoes) {
  Selecao aux;
  
  for (int i = 0; i < numSelecoes; i++) {
    for (int j = 0; j < numSelecoes - 1; j++) {
      if (selecoes[j].pontos < selecoes[j + 1].pontos){
        aux = selecoes[j];
        selecoes[j] = selecoes[j + 1];
        selecoes[j + 1] = aux;
      }
      // Acima encontramos um trecho de código que exemplifica o ganho de simplicidade e legibilidade 
      // ao utilizar uma estrutura de dados mais sofisticada.

      // Abaixo é visível a troca do critério de ordenação a cada empate. 
      else if (selecoes[j].pontos == selecoes[j + 1].pontos) {
        if (selecoes[j].gols < selecoes[j + 1].gols) {
          aux = selecoes[j];
          selecoes[j] = selecoes[j + 1];
          selecoes[j + 1] = aux;
        }

        else if (selecoes[j].gols == selecoes[j + 1].gols) {
          char nomeAuxA[MAX_TAM_NOME], nomeAuxB[MAX_TAM_NOME];
          strcpy(nomeAuxA, selecoes[j].nome);
          strcpy(nomeAuxB, selecoes[j + 1].nome);

          if (strcmp(toLower(nomeAuxA), toLower(nomeAuxB)) > 0) {
            aux = selecoes[j];
            selecoes[j] = selecoes[j + 1];
            selecoes[j + 1] = aux;
          }
        }
      }
    }    
  }  
}

void criaPodio(Selecao selecoes[], int numSelecoes) {
  FILE *Fclassificacao = fopen(FILE_CLASSIFICACAO, "w");

  if (Fclassificacao == NULL) {
    printf("Erro ao criar o arquivo '%s'!\n", FILE_CLASSIFICACAO);
    return;
  }

  if (numSelecoes == 0) {
    fprintf(Fclassificacao, "=================================================\n\n");
    fprintf(Fclassificacao, "Nenhuma selecao foi resgistrada!\n\n");
    fprintf(Fclassificacao, "=================================================");

    printf("=================================================\n\n");
    printf("Nenhuma selecao foi resgistrada!\n\n");
    printf("=================================================");
  }

  else {
    fprintf(Fclassificacao, "=================================================\n");
    fprintf(Fclassificacao, "       CLASSIFICACAO FINAL DA COPA DO MUNDO\n");
    fprintf(Fclassificacao, "=================================================\n\n");
    fprintf(Fclassificacao, "PODIO DOS CAMPEOES:\n"); 
    fprintf(Fclassificacao, "1o Lugar: %s - %d pontos (%d gols)\n", selecoes[0].nome, selecoes[0].pontos, selecoes[0].gols);
    fprintf(Fclassificacao, "2o Lugar: %s - %d pontos (%d gols)\n", selecoes[1].nome, selecoes[1].pontos, selecoes[1].gols);
    fprintf(Fclassificacao, "3o Lugar: %s - %d pontos (%d gols)\n\n", selecoes[2].nome, selecoes[2].pontos, selecoes[2].gols); 
    fprintf(Fclassificacao, "=================================================");

    printf("=================================================\n");
    printf("       CLASSIFICACAO FINAL DA COPA DO MUNDO\n");
    printf("=================================================\n\n");
    printf("PODIO DOS CAMPEOES:\n");  
    printf("1o Lugar: %s - %d pontos (%d gols)\n", selecoes[0].nome, selecoes[0].pontos, selecoes[0].gols);
    printf("2o Lugar: %s - %d pontos (%d gols)\n", selecoes[1].nome, selecoes[1].pontos, selecoes[1].gols);
    printf("3o Lugar: %s - %d pontos (%d gols)\n\n", selecoes[2].nome, selecoes[2].pontos, selecoes[2].gols);
    printf("=================================================");
  }
  
  fclose(Fclassificacao);
}

int main() {
  Selecao selecoes[NUM_MAX_SELECOES];
  // Declaração do vetor do tipo ‘Selecao’ que vai armazenar os dados de cada seleção nos próximos passos de execução do código.

  int numSelecoes = 0;
  
  // Inicialização e Carga
  registraSelecoes(selecoes, &numSelecoes);

  // Processamento de Fluxo
  contabilizaJogos(selecoes, numSelecoes);
  
  // Consolidação, “Classificação” e Saída
  ordenaSelecoes(selecoes, numSelecoes);

  criaPodio(selecoes, numSelecoes);

  return SUCESSO;
}