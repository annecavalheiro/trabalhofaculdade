//32
//Fa�a um algoritmo que apresente, para um sal�rio informado pelo usu�rio, um novo sal�rio com aumento de 37%.

#include <stdio.h>

int main() {
    float salario_atual, novo_salario;

    // ENTRADA: solicita o sal�rio atual
    printf("Digite o sal�rio atual: R$ ");
    scanf("%f", &salario_atual);

    // PROCESSAMENTO: calcula o novo sal�rio com aumento de 37%
    novo_salario = salario_atual + (salario_atual * 0.37);

    // SA�DA: exibe o novo sal�rio
    printf("O novo sal�rio com aumento de 37%% e : R$ %f\n", novo_salario);

    return 0;
}

