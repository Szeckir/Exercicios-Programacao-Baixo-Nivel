#include <stdio.h>

int main(void) {
    printf("Selecione a opção de calculadora: \n");
    printf("0 - Soma \n");
    printf("1 - Subtração \n");
    printf("2 - Multiplicação \n");
    printf("3 - Divisão \n");

    int opcao;

    scanf("%d", &opcao);

    int n1;
    int n2;

    printf("Digite primeiro número: \n");
    scanf("%d", &n1);
    printf("Digite segundo número: \n");
    scanf("%d", &n2);

    float resultado;



    switch(opcao) {
        case 0: resultado = n1 + n2 ; 
        break;

        case 1: resultado = n1 - n2;
        break;

        case 2: resultado = n1 * n2;
        break;

        case 3: resultado = n1 / n2;
        break;
    }

    printf("% .2f", resultado); 
}