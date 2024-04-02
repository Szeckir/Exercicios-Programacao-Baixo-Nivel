#include <stdio.h>
#include <string.h>

void nomeTrasFrente() {

    char str1[10] = "Thomaz";
    char aux[1];
    int len = sizeof(str1)/sizeof(int);

    for(int i = len; i > 0; i--) {
        for(int j = 0; j < len; j++) {
            aux[0] = str1[i];
            str1[i] = str1[j];
            str1[j] = aux[0];
        }
    }

    for (int i = 0; i < len; i++)
        printf("%d ", str1[i]);
}   

int main() {
    nomeTrasFrente();

    return 0;
}