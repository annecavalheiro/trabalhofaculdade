//12
//Fa�a um algoritmo que receba o sal�rio de um funcion�rio, calcule e imprima o valor do imposto de renda a ser pago, sabendo que o imposto equivale a 5% do sal�rio.

#include <stdio.h>

int main() {
    float salario, imposto;

    // ENTRADA
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    // PROCEDIMENTO
    imposto = salario * 0.05;

    // SA�DA
    printf("O valor do imposto de renda a ser pago e: R$ %.2f\n", imposto);

    return 0;
}

