#include <stdio.h>
#include <string.h>

float calculaImc(float peso, float altura) {
    return peso / (altura * altura);
}

void tipoImc(float imc) {
    if(imc < 16.9) {
        printf("Muito abaixo do seu peso");
    } else if(imc >= 17 && imc <= 18.4 ) {
        printf("Abaixo do peso");
    } else if(imc >= 18.5 && imc <= 24.9) {
        printf("Peso normal");
    } else if(imc >= 25 && imc <= 29.9) {
        printf("Acima do peso");
    } else if(imc >= 30 && imc <= 34.9) {
        printf("Obesidade Grau I");
    } else if(imc >= 35 && imc <= 40) {
        printf("Obesidade Grau II");
    } else if(imc >= 40 ) {
        printf("Obesidade Grau III");
    }
}

int main(void) {
    printf("Deseja calcular seu imc? [s/n]");

    char opcao;

    scanf("%c", &opcao);

    while (opcao == 's') {
        float peso;
        float altura;

        printf("Digite seu peso: ");
        scanf("%f", &peso);

        printf("Digite sua altura: ");
        scanf("%f", &altura);

        float imc = calculaImc(peso, altura);

        printf("Seu imc é: %.2f \n", imc);
        tipoImc(imc);
        printf("\n");

        printf("Deseja calcular seu imc novamente? [s/n] ");
        scanf("%s", &opcao);
    }
}


