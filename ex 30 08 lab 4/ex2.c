#include <stdio.h>

float c2f(float C){
  return(C * 1.8) + 32;
}
float f2c( float F){
  return(F - 32) * 1.8;
}

int main() {
  float C,F,rc2f,rf2c;
  int opcao;
  printf("Escolha qual modo você deseja fazer:\n(1) Converter de Celsius para Fahrenheit\n(2) Converter de Fahrenheit para Celsius\n");
  scanf("%d", &opcao);
  
  if (opcao == 1) {
    printf("Digite o valor da temperatura em Celsius\n");
    scanf("%f", &C);
    rc2f = c2f(C);
    printf("A temperatura em Fahrenheit é %.2f\n", rc2f);
  }

  else if (opcao == 2) {
    printf("Digite o valor da temperatura em Fahrenheit\n");
    scanf("%f", &F);
    rf2c = f2c(F);
    printf("A temperatura em Celsius é %.2f\n", rf2c);
  }
}