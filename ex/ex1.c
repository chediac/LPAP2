#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int dado;

  srand(time(NULL)); // inicializa gerador randômico

  dado = 1 + rand()%100; // gera valor de 1 a 100

  printf("Lancei o dado! Tente adivinhar o seu valor...\n");
  printf("Seu palpite: ");
  int palpite;
  scanf("%d", &palpite);
  while (palpite > 100 || palpite < 1)
  {
    printf("Numero inválido, tente novamente...\n Lancei o dado! Tente adivinhar o seu valor: ");
    scanf("%d", &palpite);
  }
  if (palpite == dado)
  {
    printf("Parabens!!! Você acertou!\n");
  }
  if (palpite < dado)
  {
    printf("Você chutou muito baixo! O valor correto é %d\n", dado);
  }
  if (palpite > dado)
  {
    printf("Você chutou muito alto! O valor correto é %d\n", dado);
  }
}