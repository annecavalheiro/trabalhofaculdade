//28
//Ler uma temperatura em graus Celsius e apresent�-la convertida em graus Fahrenheit. A f�rmula de convers�o �: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <stdio.h>

int main() {
    float C, F;

    // Entrada: temperatura em Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &C);

    // Processamento: convers�o para Fahrenheit
    F = (9 * C + 160) / 5;

    // Sa�da: temperatura em Fahrenheit
    printf("A temperatura em Fahrenheit e: %.2f\n", F);

    return 0;
}

