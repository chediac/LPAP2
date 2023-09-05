#include <stdio.h>
#include <stdlib.h>

int tabuada(int num)
{
  for(int i = 1; i<=10; ++i){
    printf("%dx%d = %d\n", i, num, i * num);
  }
  printf("\n");
    return 0;
}
int main()
{
  int num;
  int tabuadap;
  printf("\n Digite o número que você deseja fazer a tabuada: ");
  scanf("%d", &num);
tabuadap = tabuada(num);
int x, o;
for (x = 1; x <= 9; x = x + 1)
  {
    for (o = 1; o <= 10; o = o + 1)
      printf("%2d x %2d = %3d\n", o, x ,x * o);
    printf("\n");
  }
  return 0;
}