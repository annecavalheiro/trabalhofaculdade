//2
//Fa�a um algoritmo que receba dois n�meros reais, calcule e imprima a subtra��o do primeiro n�mero pelo segundo.

#include <stdio.h>

int main() {
    float num1, num2, subtracao;

    // ENTRADA
    printf("Digite o primeiro numero real: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero real: ");
    scanf("%f", &num2);

    // PROCEDIMENTO
    subtracao = num1 - num2;

    // SA�DA
    printf("O resultado da subtracao e: %f\n", subtracao);

    return 0;
}

