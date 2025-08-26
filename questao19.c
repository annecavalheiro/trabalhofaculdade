//19
//Crie um programa que receba a largura e o comprimento de um lote de terra e mostre a �rea total existente.

#include <stdio.h>

int main() {
    float largura, comprimento, area;

    // Entrada: l� a largura do lote
    printf("Digite a largura do lote de terra: ");
    scanf("%f", &largura);

    // Entrada: l� o comprimento do lote
    printf("Digite o comprimento do lote de terra: ");
    scanf("%f", &comprimento);

    // Processamento: calcula a �rea do lote (largura x comprimento)
    area = largura * comprimento;

    // Sa�da: imprime a �rea calculada com duas casas decimais
    printf("A �rea total do lote �: %.2f metros quadrados\n", area);

    return 0;
}

