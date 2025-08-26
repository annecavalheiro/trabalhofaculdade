//27
//Um sistema de equa��es lineares da forma ax + by = c, pode ser resolvido utilizando-se as seguintes f�rmulas:

#include <stdio.h>

int main() {
    // Declara��o dos coeficientes
    float a, b, c, d, e, f;
    float x, y;
    float denominador;

    // Entrada dos coeficientes
    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    printf("Digite o valor de d: ");
    scanf("%f", &d);

    printf("Digite o valor de e: ");
    scanf("%f", &e);

    printf("Digite o valor de f: ");
    scanf("%f", &f);

    // C�lculo do denominador (mesmo para x e y)
    denominador = a * e - b * d;

    // C�lculo de x e y usando as f�rmulas
    x = (c * e - b * f) / denominador;
    y = (a * f - c * d) / denominador;

    // Sa�da dos resultados
    printf("\nResultado do sistema:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);

    return 0;
}

