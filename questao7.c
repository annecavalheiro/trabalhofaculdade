//7
//Fa�a um algoritmo que receba dois n�meros, calcule e imprima um elevado ao outro.

#include <stdio.h>
#include <math.h>

int main() {
    float base, expoente, resultado;

    // ENTRADA
    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite o expoente: ");
    scanf("%f", &expoente);

    // PROCEDIMENTO
    resultado = pow(base, expoente);

    // SA�DA
    printf("%.2f elevado a %.2f � igual a %.2f\n", base, expoente, resultado);

    return 0;
}

