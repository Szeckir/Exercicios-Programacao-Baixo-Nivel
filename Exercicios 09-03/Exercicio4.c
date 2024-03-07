#include <stdio.h>

int main (void) {
    float saldo;

    printf("Digite seu saldo: ");
    scanf("%f", &saldo);

    // quantas notas de 100, 50, 20 e 10 preciso para formar o saldo?

    int notas100 = saldo / 100;
    saldo = saldo - (notas100 * 100);
    
    int notas50 = saldo / 50;
    saldo = saldo - (notas50 * 50);

    int notas20 = saldo / 20;
    saldo = saldo - (notas20 * 20);

    int notas10 = saldo / 10;
    saldo = saldo - (notas10 * 10);

    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);
    printf("Resto: %.2f\n", saldo);

}