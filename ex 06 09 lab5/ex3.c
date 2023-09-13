#include <stdio.h>
#include <stdbool.h>

bool contem(int v[], int n, int e) {
    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            return true;  // Elemento encontrado
        }
    }
    return false;  // Elemento não encontrado
}

int main() {
    int vetor[] = {4, 9, 10, 8, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int elemento;

    printf("Digite o elemento que você deseja verificar no vetor: ");
    scanf("%d", &elemento);

    bool resultado = contem(vetor, tamanho, elemento);

    if (resultado) {
        printf("O elemento %d está presente no vetor.\n", elemento);
    } else {
        printf("O elemento %d não está presente no vetor.\n", elemento);
    }

    return 0;
}
