//17
//Crie um programa que receba três nomes quaisquer por meio da linha de execução do programa, e os imprima na tela da seguinte maneira: o primeiro e o último nomes serão impressos na primeira linha
//um após o outro, o outro nome (o segundo) será impresso na segunda linha.

#include <stdio.h>
#include <string.h>

int main() {
    // Declaração dos arrays para armazenar os nomes
    // Cada nome pode ter até 199 caracteres + '\0' (fim da string)
    char nome1[200], nome2[200], nome3[200];

    // ENTRADA - leitura do primeiro nome
    printf("Digite o primeiro nome: ");
    fgets(nome1, sizeof(nome1), stdin);  // Lê a linha com espaços

    // Remove o caractere '\n' que fgets captura ao final da linha
    nome1[strcspn(nome1, "\n")] = 0;

    // ENTRADA - leitura do segundo nome
    printf("Digite o segundo nome: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = 0;

    // ENTRADA - leitura do terceiro nome
    printf("Digite o terceiro nome: ");
    fgets(nome3, sizeof(nome3), stdin);
    nome3[strcspn(nome3, "\n")] = 0;

    // SAÍDA
    // Imprime o primeiro e o terceiro nome juntos, um após o outro (sem espaço)
    printf("%s%s\n", nome1, nome3);

    // Imprime o segundo nome na segunda linha
    printf("%s\n", nome2);

    return 0;
}

