//1
//Fa�a um algoritmo que receba dois n�meros inteiros e imprima a soma desses dois n�meros.

#include <stdio.h>

int main() {
    int num1, num2, soma;

    // ENTRADA
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // PROCEDIMENTO
    soma = num1 + num2;

    // SA�DA
    printf("A soma dos dois numeros e: %d\n", soma);

    return 0;
}

