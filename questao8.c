//8
//Fa�a um programa que receba um n�mero inteiro, calcule e imprima:
//� a raiz quadrada desse n�mero;
//� esse n�mero elevado ao quadrado.

#include <stdio.h>
#include <math.h>

int main() {
    int numero;
    double raiz_quadrada, ao_quadrado;

    // Entrada do n�mero inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // C�lculo da raiz quadrada
    raiz_quadrada = sqrt(numero);

    // C�lculo do n�mero ao quadrado
    ao_quadrado = pow(numero, 2);

    // Exibi��o dos resultados
    printf("Raiz quadrada de %d: %f\n", numero, raiz_quadrada);
    printf("%d elevado ao quadrado: %f\n", numero, ao_quadrado);

    return 0;
}

