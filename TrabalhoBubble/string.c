#include <stdio.h>
#include <string.h>

int main() {
    char string[20]; 

    printf("Escreva: ");

    fgets(string, sizeof(string), stdin); 
    int tam = strlen(string);

    printf("invertida: ");
    for (int i = tam - 1; i >= 0; i--) {
        printf("%c", string[i]); 
    }

    printf("\n");
    return 0;
}