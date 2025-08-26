//25
//Uma pessoa resolveu fazer uma aplica��o em uma poupan�a programada.
//Para calcular seu rendimento, ela dever� fornecer o valor constante da aplica��o mensal, a taxa e o n�mero de meses. Sabendo-se que a f�rmula usada para este c�lculo �:

#include <stdio.h>

int main() {
    float P, i, S;
    int n;

    // Entrada de dados
    printf("Digite o valor da aplicacao mensal (P): ");
    scanf("%f", &P);

    printf("Digite a taxa de juros mensal (em %%): ");
    scanf("%f", &i);

    // Como n�o usaremos la�o, fixamos o n�mero de meses para 3
    n = 3;

    // Converte a taxa para decimal
    i = i / 100;

    // Calcula (1 + i)^1, (1 + i)^2, (1 + i)^3 manualmente
    float fator1 = (1 + i);
    float fator2 = fator1 * (1 + i);
    float fator3 = fator2 * (1 + i);

    // F�rmula expandida manualmente: S = P * [((1 + i)^n - 1) / i]
    float acumulado = (fator3 - 1) / i;
    S = P * acumulado;

    // Sa�da
    printf("O valor acumulado ao final de 3 meses sera: R$ %.2f\n", S);

    return 0;
}

