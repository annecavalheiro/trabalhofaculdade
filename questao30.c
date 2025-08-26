//30
//Fa�a um algoritmo que receba o pre�o de custo de um produto e mostre o valor de venda. Sabe-se que o pre�o de custo receber� um acr�scimo de acordo com um percentual informado pelo usu�rio.

#include <stdio.h>

int main() {
    float preco_custo, percentual_acrescimo, preco_venda;

    // ENTRADA: pre�o de custo do produto
    printf("Digite o preco de custo do produto: R$ ");
    scanf("%f", &preco_custo);

    // ENTRADA: percentual de acr�scimo desejado
    printf("Digite o percentual de acrescimo (ex: 20 para 20%%): ");
    scanf("%f", &percentual_acrescimo);

    // PROCESSAMENTO: calcula o pre�o de venda
    preco_venda = preco_custo + (preco_custo * percentual_acrescimo / 100);

    // SA�DA: exibe o valor final de venda
    printf("O preco de venda do produto sera: R$ %f\n", preco_venda);

    return 0;
}

