#include <stdio.h>

float soma(float a, float b, float c) {
  return a + b + c;
}

 int main() {
  float x,y,z,fsoma;
   
  printf("Digite o 1 número:");
  scanf("%f", &x);

  printf("Digite o 2 número:");
  scanf("%f", &y);

  printf("Digite o 3 número:");
  scanf("%f", &z);
   
  fsoma = soma(x,y,z);
  printf("A soma dos 3 valores é de %.2f",fsoma );
    
}