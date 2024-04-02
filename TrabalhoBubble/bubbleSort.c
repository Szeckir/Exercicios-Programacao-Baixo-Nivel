#include <stdio.h>

void bubbleSort(int array[], int n) {
    int i, j, aux;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }
}

int main() {
    int array[] = {90, 70, 6, 40, 20, 12, 10, 1, 2, 34};
    int n = sizeof(array) / sizeof(array[0]);
    int i;

    printf("array original:\n");
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    
    printf("\n");

    bubbleSort(array, n);

    printf("array ordenado ordenado:\n");
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}
