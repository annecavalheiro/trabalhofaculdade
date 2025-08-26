//39
//Considerando uma elei��o de apenas 2 candidatos, elabore um algoritmo que leia do teclado o
//n�mero total de eleitores, o n�mero de votos do primeiro candidato e o n�mero de votos do segundo candidato.
//Em seguida, o algoritmo dever� apresentar o percentual de votos de cada um dos candidatos e o percentual de votos nulos.

#include <stdio.h>

int main() {
    int total_eleitores, votos_cand1, votos_cand2, votos_nulos;
    float perc_cand1, perc_cand2, perc_nulos;

    // ENTRADA: n�mero total de eleitores
    printf("Digite o n�mero total de eleitores: ");
    scanf("%d", &total_eleitores);

    // ENTRADA: n�mero de votos do primeiro candidato
    printf("Digite o n�mero de votos do primeiro candidato: ");
    scanf("%d", &votos_cand1);

    // ENTRADA: n�mero de votos do segundo candidato
    printf("Digite o n�mero de votos do segundo candidato: ");
    scanf("%d", &votos_cand2);

    // PROCESSAMENTO: calcular votos nulos
    votos_nulos = total_eleitores - (votos_cand1 + votos_cand2);

    // PROCESSAMENTO: calcular percentuais
    perc_cand1 = ((float)votos_cand1 / total_eleitores) * 100;
    perc_cand2 = ((float)votos_cand2 / total_eleitores) * 100;
    perc_nulos = ((float)votos_nulos / total_eleitores) * 100;

    // SA�DA: exibir percentuais
    printf("\nPercentual de votos do primeiro candidato: %.2f%%\n", perc_cand1);
    printf("Percentual de votos do segundo candidato: %.2f%%\n", perc_cand2);
    printf("Percentual de votos nulos: %.2f%%\n", perc_nulos);

    return 0;
}

