//21
//Uma determinada pessoa que trabalha com constru��o de piscinas precisa de um programa que calcule o valor das constru��es solicitadas pelos clientes, sabendo-se que os clientes sempre fornecem o comprimento, a largura e a profundidade da piscina a ser constru�da
//Leve em considera��o que o valor da constru��o � cobrado por m3 de �gua que a piscina conter� e o pre�o � de R$ 45.00 por m3

#include <stdio.h>

int main() {
    float comprimento, largura, profundidade, volume, custo_total;
    const float PRECO_POR_M3 = 45.00;  // pre�o fixo por metro c�bico

    // Entrada do comprimento
    printf("Digite o comprimento da piscina (em metros): ");
    scanf("%f", &comprimento);

    // Entrada da largura
    printf("Digite a largura da piscina (em metros): ");
    scanf("%f", &largura);

    // Entrada da profundidade
    printf("Digite a profundidade da piscina (em metros): ");
    scanf("%f", &profundidade);

    // C�lculo do volume da piscina
    volume = comprimento * largura * profundidade;

    // C�lculo do custo total da constru��o
    custo_total = volume * PRECO_POR_M3;

    // Exibi��o dos dados e resultados
    printf("\nDetalhes da Piscina\n");
    printf("Comprimento: %.2f m\n", comprimento);
    printf("Largura: %.2f m\n", largura);
    printf("Profundidade: %.2f m\n", profundidade);
    printf("Volume da piscina: %.2f m�\n", volume);
    printf("Pre�o por m�: R$ %.2f\n", PRECO_POR_M3);
    printf("Custo total da constru��o: R$ %.2f\n", custo_total);

    return 0;
}

}
