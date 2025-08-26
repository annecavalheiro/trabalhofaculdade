//14
//Sabe-se que o kilowatt de energia custa um quinto do sal�rio m�nimo. Fa�a um algoritmo que receba o valor do sal�rio m�nimo e a quantidade de quilowatts gasta por uma resid�ncia. Calcule e imprima:
//� o valor, em reais, de cada kilowatt;
//� o valor, em reais, a ser pago por essa resid�ncia;
//� o novo valor a ser pago por essa resid�ncia, a partir de um desconto de 15%

#include <stdio.h>

int main() {
    float salario_minimo, qtd_kwh;
    float valor_kwh, valor_total, valor_com_desconto;

    // ENTRADA
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    printf("Digite a quantidade de kWh consumida: ");
    scanf("%f", &qtd_kwh);

    // PROCEDIMENTO
    valor_kwh = salario_minimo / 5;               // Valor de 100 kWh
    valor_kwh = valor_kwh / 100;                  // Valor de 1 kWh
    valor_total = valor_kwh * qtd_kwh;            // Valor total sem desconto
    valor_com_desconto = valor_total * 0.85;      // Desconto de 15%

    // SA�DA
    printf("\nValor de cada kWh: R$ %f\n", valor_kwh);
    printf("Valor total a pagar (sem desconto): R$ %f\n", valor_total);
    printf("Valor com 15%% de desconto: R$ %f\n", valor_com_desconto);

    return 0;
}

