//11
//Calcular e exibir a �rea de um quadrado a partir do valor de sua diagonal que ser� digitado.

#include <stdio.h>
#include <math.h> // Necess�ria para usar pow()

int main() {
    float diagonal, area;

    // ENTRADA
    printf("Digite o valor da diagonal do quadrado: ");
    scanf("%f", &diagonal);

    // PROCEDIMENTO
    area = (pow(diagonal, 2)) / 2;

    // SA�DA
    printf("A area do quadrado e: %f\n", area);

    return 0;
}

