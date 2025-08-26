//20
//Crie um programa que receba valores quaisquer e mostre a m�dia entre eles, o somat�rio entre eles e o resto da divis�o do somat�rio por cada um dos valores.

#include <stdio.h>

int main() {
    int valor1, valor2, valor3;
    int somatorio;
    float media;
    int resto1, resto2, resto3;

    // Entrada dos tr�s valores
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    // Calcula o somat�rio
    somatorio = valor1 + valor2 + valor3;

    // Calcula a m�dia
    media = somatorio / 3;

    // Calcula os restos da divis�o do somat�rio por cada valor
    // Aten��o: se algum valor for zero, o programa pode dar erro
    resto1 = somatorio % valor1;
    resto2 = somatorio % valor2;
    resto3 = somatorio % valor3;

    // Exibe os resultados
    printf("\nSomat�rio dos valores: %d\n", somatorio);
    printf("M�dia dos valores: %f\n", media);

    printf("\nResto da divis�o do somat�rio por cada valor:\n");
    printf("Resto da divis�o por %d: %d\n", valor1, resto1);
    printf("Resto da divis�o por %d: %d\n", valor2, resto2);
    printf("Resto da divis�o por %d: %d\n", valor3, resto3);

    return 0;
}

