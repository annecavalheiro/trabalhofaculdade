//9
//Fa�a um algoritmo que receba o valor do sal�rio de um funcion�rio e o valor do sal�rio m�nimo. Calcule e imprima quantos sal�rios m�nimos ganha esse funcion�rio.

#include <stdio.h>

int main() {
    float salario_funcionario, salario_minimo, quantidade;

    // ENTRADA
    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario_funcionario);

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    // PROCEDIMENTO
    quantidade = salario_funcionario / salario_minimo;

    // SA�DA
    printf("O

