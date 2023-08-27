#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int dado;

  srand(time(NULL)); // inicializa gerador randômico

  dado = 1 + rand()%100; // gera valor de 1 a 100

  printf("Lancei o dado! Tente adivinhar o seu valor...\n");
  int palpite;
  int tentativas = 0;
  do {
    
    printf("Digite seu palpite: ");
    scanf("%d", &palpite);
    tentativas++;
    if(palpite < 1 || palpite > 100) {
      printf("palpite inválido. Digite um número entre 1 a 100\n");
    }
    else if (palpite > dado) {
      printf("Você chutou muito alto! Tente novamente\n");
    }
    else if (palpite < dado) {
      printf("Você chutou muito baixo! Tente novamente\n");
    }
    else {
      printf("PARABÉNS! Você acertou em %d tentativas\n", tentativas);
    }
  } while (palpite != dado);

  return 0;
}
    
  