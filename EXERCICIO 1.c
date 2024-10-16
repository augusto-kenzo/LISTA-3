#include <stdio.h>

int main() {
    int arr[100], n, k;
    char direcao[10];

    printf("Digite o número de elementos do array: ");
    scanf("%d", &n);

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Digite o número de rotações: ");
    scanf("%d", &k);

    printf("Digite a direção (direita/esquerda): ");
    scanf("%s", direcao);

    k = k % n;

    int eh_direita = 1;
    if (direcao[0] == 'e') {
        eh_direita = 0;
    }

    if (eh_direita) {
        int temp[100];
        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = arr[i];
        }
        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    } else {
        int temp[100];
        for (int i = 0; i < n; i++) {
            temp[i] = arr[(i + k) % n];
        }
        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    }

    printf("Array rotacionado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
