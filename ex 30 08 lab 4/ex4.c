#include <stdio.h>
#include <stdbool.h>

bool verificar(int n, int d){
  int mod;

  mod = n%d;

  if (mod == 0){return true;}

  else{return false;}
  
}
int quantidade_divisores(int m){
  int contador = 0;
  bool guarda;
  for(int i = 1; i <= m; i++){

    guarda = verificar(m,i);
    if (guarda == true){
      contador++;
    }
  }
  return contador++;
}

int main() {

  int num, divisores;
  printf("Digite um número inteiro: ");
  scanf("%i", &num);

  divisores = quantidade_divisores(num);
  printf("\nO número inteiro %i possui %i divisores", num, divisores);
  
}