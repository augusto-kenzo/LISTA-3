#include <stdio.h>

int main() {
    int n;

    printf("Digite o tamanho dos arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], result[2 * n];

    printf("Digite os elementos do primeiro array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Digite os elementos do segundo array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++) {
        result[i] = arr1[i];
        result[i + n] = arr2[i];
    }

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1 - i; j++) {
            if (result[j] > result[j + 1]) {
                int temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }

    printf("Array ordenado: ");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
