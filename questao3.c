//3
//Fa�a um algoritmo que receba dois n�meros inteiros, calcule e imprima a divis�o do primeiro n�mero 

#include <stdio.h>

int main() {
    int num1, num2;
    float resultado;

    // ENTRADA
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    // PROCEDIMENTO
    resultado = (float)num1 / num2;

    // SA�DA
    printf("O resultado da divisao e: %f\n", resultado);

    return 0;
}
