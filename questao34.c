//34
//Cada degrau de uma escada tem uma altura X. Fa�a um algoritmo que receba essa altura e a altura que o usu�rio deseja alcan�ar subindo a escada. Calcule e mostre quantos degraus o usu�rio dever�
//subir para atingir seu objetivo.

#include <stdio.h>

int main() {
    float altura_degrau, altura_desejada;
    int degraus;

    // ENTRADA: altura de cada degrau
    printf("Digite a altura de cada degrau (em metros): ");
    scanf("%f", &altura_degrau);

    // ENTRADA: altura que deseja alcan�ar
    printf("Digite a altura que deseja alcan�ar (em metros): ");
    scanf("%f", &altura_desejada);

    // PROCESSAMENTO: calcula quantos degraus subir (arredonda para cima)
    degraus = (int)(altura_desejada / altura_degrau);

    // Se n�o for divis�vel exatamente, sobe mais um degrau
    if ((altura_desejada / altura_degrau) > degraus) {
        degraus = degraus + 1;
    }

    // SA�DA: exibe o n�mero de degraus
    printf("Voc� dever� subir %d degrau(s) para atingir a altura desejada.\n", degraus);

    return 0;
}

