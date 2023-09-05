#include <stdio.h>
#include <math.h>

float conta(int x)
{
  float contag = 0;
  for(float n = 1; n <= x; ++n)
    {
      contag += ((float)n/pow(n, 2)) * pow(-1, (n+1));
    }
  return contag;
}
int main()
{
  float contafunc;
  int x;

  printf("Qual o número que deseja usar para a conta?: ");
  scanf("%d", &x);

contafunc = conta(x);

  printf("Resultado da conta: %f\n", contafunc);
  return 0;
}