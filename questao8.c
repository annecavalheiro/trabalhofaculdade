//8
//Faça um programa que receba um número inteiro, calcule e imprima:
//• a raiz quadrada desse número;
//• esse número elevado ao quadrado.

#include <stdio.h>
#include <math.h>

int main() {
    int numero;
    double raiz_quadrada, ao_quadrado;

    // Entrada do número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Cálculo da raiz quadrada
    raiz_quadrada = sqrt(numero);

    // Cálculo do número ao quadrado
    ao_quadrado = pow(numero, 2);

    // Exibição dos resultados
    printf("Raiz quadrada de %d: %f\n", numero, raiz_quadrada);
    printf("%d elevado ao quadrado: %f\n", numero, ao_quadrado);

    return 0;
}

