//37
//Fa�a um algoritmo que receba o custo de um espet�culo teatral e o pre�o do convite esse espet�culo. Esse programa deve calcular e mostrar:
//�A quantidade de convites que devem ser vendidos para que pelo menos o custo do espet�culo seja alcan�ado.
//�A quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%.

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


