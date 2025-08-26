//31
//O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do
//distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de f�brica, e depois a
//percentagem do distribuidor sobre o resultado). Supondo que a percentagem do distribuidor seja de 28%
//e os impostos 45%. Escrever um algoritmo que leia o custo de f�brica de um carro e informe o custo ao
//consumidor do mesmo.

#include <stdio.h>

int main() {
    float custo_fabrica, impostos, distribuidor, custo_consumidor;

    // ENTRADA: custo de f�brica do carro
    printf("Digite o custo de f�brica do carro: R$ ");
    scanf("%f", &custo_fabrica);

    // PROCESSAMENTO:
    // 1. Calcula os impostos (45% sobre o custo de f�brica)
    impostos = custo_fabrica * 0.45;

    // 2. Calcula a porcentagem do distribuidor (28% sobre o valor com impostos)
    distribuidor = (custo_fabrica + impostos) * 0.28;

    // 3. Soma tudo para obter o custo final ao consumidor
    custo_consumidor = custo_fabrica + impostos + distribuidor;

    // SA�DA: custo ao consumidor
    printf("O custo ao consumidor do carro e: R$ %.2f\n", custo_consumidor);

    return 0;
}
