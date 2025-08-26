//38
//Elabore um algoritmo para efetuar o c�lculo da quantidade de combust�vel gasto em uma viagem, utilizando-se um autom�vel que faz 12 Kms por litro. Para obter o c�lculo, o usu�rio dever� fornecer o
//tempo gasto e a velocidade m�dia durante a viagem. Desta forma, ser� poss�vel obter a dist�ncia percorrida (dist�ncia = tempo * velocidade).

#include <stdio.h>

int main() {
    float tempo, velocidade, distancia, litros;

    // ENTRADA: tempo da viagem em horas
    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);

    // ENTRADA: velocidade m�dia em km/h
    printf("Digite a velocidade m�dia durante a viagem (em km/h): ");
    scanf("%f", &velocidade);

    // PROCESSAMENTO: calcular a dist�ncia percorrida
    distancia = tempo * velocidade;

    // PROCESSAMENTO: calcular quantidade de litros gastos (carro faz 12 km/l)
    litros = distancia / 12;

    // SA�DA: mostrar a quantidade de combust�vel gasto
    printf("Quantidade de combust�vel gasto na viagem: %.2f litros\n", litros);

    return 0;
}

