//29
//A Loja Mam�o com A��car est� vendendo seus produtos em 5 (cinco) presta��es sem juros. Fa�a um algoritmo que receba um valor de uma compra e mostre o valor das presta��es

#include <stdio.h>

int main() {
    float valor_total, prestacao;

    // Entrada: valor total da compra
    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valor_total);

    // Processamento: c�lculo do valor das 5 presta��es
    prestacao = valor_total / 5;

    // Sa�da: mostra o valor de cada presta��o
    printf("O valor de cada prestacao (sem juros) e: R$ %.2f\n", prestacao);

    return 0;
}

