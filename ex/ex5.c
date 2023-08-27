#include <stdio.h>

int main() {
    int num, soma_div = 0;
    printf("Escreva um número inteiro: ");
    scanf("%d", &num);
    for (int divisor = 1; divisor <= num / 2; divisor++) {
        if (num % divisor == 0) {
            soma_div += divisor;
        }
    }
    if (soma_div == num) {
        printf("%d é um número inteiro perfeito.\n", num);
    } else {
        printf("%d NÃO é um número inteiro perfeito.\n", num);
    }
    return 0;
}