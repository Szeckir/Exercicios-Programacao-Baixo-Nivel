#include <stdio.h>

void bubbleSort(int array[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(array) / sizeof(array[0]);
    int i;

    printf("Array original:\n");

    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    
    printf("\n");

    bubbleSort(array, n);

    printf("Array ordenado em ordem crescente:\n");
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}
