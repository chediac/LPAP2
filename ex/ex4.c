#include <stdio.h>

int main() {
  int num;

  printf("Escreva um número inteiro: ");
  scanf("%d", &num);

  printf("Os divisores de %d são:", num);
  for (int x = 1; x <= num; x++) {
    if (num % x == 0) {
      printf("%d ", x);
    }
  }
  return 0;
}