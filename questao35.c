//35
//Fa�a um algoritmo que receba o peso e a altura de uma pessoa e calcule o �ndice de massa corp�rea.
//Ele mede a rela��o entre peso e altura (peso em Kg, dividido pelo quadrado da altura em metros).

#include <stdio.h>

int main() {
    float peso, altura, imc;

    // ENTRADA: ler peso em kg
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    // ENTRADA: ler altura em metros
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    // PROCESSAMENTO: calcular o IMC
    imc = peso / (altura * altura);

    // SA�DA: mostrar o resultado do IMC
    printf("O �ndice de massa corporal (IMC) �: %.2f\n", imc);

    return 0;
}

