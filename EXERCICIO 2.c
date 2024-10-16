#include <stdio.h>

void bubble_sort(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        int trocou = 0;
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                trocou = 1;
            }
        }

        if (!trocou) {
            break;
        }
    }
}

int main() {
    int tamanho;


    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int arr[tamanho];


    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &arr[i]);
    }


    bubble_sort(arr, tamanho);


    printf("Array ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
