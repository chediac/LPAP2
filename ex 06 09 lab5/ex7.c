#include <stdio.h>

int contaValoresDiferentes(int vetor[], int n) {
    int contador = 0;
    int valoresUnicos[n];

    for (int i = 0; i < n; i++) {
        int valorAtual = vetor[i];
        int encontrado = 0;


        for (int j = 0; j < contador; j++) {
            if (valoresUnicos[j] == valorAtual) {
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            valoresUnicos[contador] = valorAtual;
            contador++;
        }
    }
    return contador;
}

int main() {
    int vetor[] = {1, 2, 2, 3, 4, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int quantidadeDiferentes = contaValoresDiferentes(vetor, tamanho);

    printf("Quantidade de valores diferentes no vetor: %d\n", quantidadeDiferentes);

    return 0;
}
