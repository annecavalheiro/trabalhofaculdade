//36
//Um hotel deseja fazer uma promo��o especial de final de semana, concedendo um desconto de 25% na di�ria.
//Sendo informados, atrav�s do teclado, o n�mero de apartamentos do hotel e o valor da di�ria por apartamento para o final de semana completo, elabore um programa para calcular:
//� Valor promocional da di�ria;
//� Valor total a ser arrecadado caso a ocupa��o neste final de semana atinja 100%;
//� Valor total a ser arrecadado caso a ocupa��o neste final de semana atinja 70%;
//� Valor que o hotel deixar� de arrecadar em virtude da promo��o, caso a ocupa��o atinja 100%.

#include <stdio.h>

int main() {
    int num_apartamentos;
    float valor_diaria, valor_promocional;
    float total_100, total_70, perda;

    // ENTRADA: n�mero de apartamentos
    printf("Digite o n�mero de apartamentos do hotel: ");
    scanf("%d", &num_apartamentos);

    // ENTRADA: valor da di�ria por apartamento
    printf("Digite o valor da di�ria por apartamento (final de semana completo): ");
    scanf("%f", &valor_diaria);

    // PROCESSAMENTO: calcular valor promocional com 25% de desconto
    valor_promocional = valor_diaria * 0.75; // 75% do valor original

    // PROCESSAMENTO: valor total com 100% de ocupa��o
    total_100 = valor_promocional * num_apartamentos;

    // PROCESSAMENTO: valor total com 70% de ocupa��o
    total_70 = total_100 * 0.7;

    // PROCESSAMENTO: valor que o hotel deixa de arrecadar por causa do desconto,
    // no caso de 100% de ocupa��o
    perda = (valor_diaria * num_apartamentos) - total_100;

    // SA�DA: mostrar os resultados
    printf("\nValor promocional da di�ria: R$ %.2f\n", valor_promocional);
    printf("Valor total arrecadado com 100%% de ocupa��o: R$ %.2f\n", total_100);
    printf("Valor total arrecadado com 70%% de ocupa��o: R$ %.2f\n", total_70);
    printf("Valor que o hotel deixar� de arrecadar devido � promo��o (100%% ocupa��o): R$ %.2f\n", perda);

    return 0;
}

