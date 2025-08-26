//10
//Fa�a um algoritmo que calcule e imprima a �rea das seguintes figuras geom�tricas:
//� tri�ngulo; quadrado; c�rculo; trap�zio; ret�ngulo; losango.

#include <stdio.h>
#include <math.h>

int main() {
    float base, altura, lado, raio;
    float base_maior, base_menor, diagonal_maior, diagonal_menor;
    float area;

    // TRI�NGULO
    // ENTRADA
    printf("=== AREA DO TRIANGULO ===\n");
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    // PROCEDIMENTO
    area = (base * altura) / 2;

    // SA�DA
    printf("Area do triangulo: %.2f\n\n", area);


    // QUADRADO
    // ENTRADA
    printf("=== AREA DO QUADRADO ===\n");
    printf("Digite o lado: ");
    scanf("%f", &lado);

    // PROCEDIMENTO
    area = lado * lado;

    // SA�DA
    printf("Area do quadrado: %.2f\n\n", area);


    // C�RCULO
    // ENTRADA
    printf("=== AREA DO CIRCULO ===\n");
    printf("Digite o raio: ");
    scanf("%f", &raio);

    // PROCEDIMENTO
    area = M_PI * raio * raio;  // M_PI � a constante de p

    // SA�DA
    printf("Area do circulo: %.2f\n\n", area);


    // TRAP�ZIO
    // ENTRADA
    printf("=== AREA DO TRAPEZIO ===\n");
    printf("Digite a base maior: ");
    scanf("%f", &base_maior);
    printf("Digite a base menor: ");
    scanf("%f", &base_menor);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    // PROCEDIMENTO
    area = ((base_maior + base_menor) * altura) / 2;

    // SA�DA
    printf("Area do trapezio: %.2f\n\n", area);


    // RET�NGULO
    // ENTRADA
    printf("=== AREA DO RETANGULO ===\n");
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    // PROCEDIMENTO
    area = base * altura;

    // SA�DA
    printf("Area do retangulo: %.2f\n\n", area);


    // LOSANGO
    // ENTRADA
    printf("=== AREA DO LOSANGO ===\n");
    printf("Digite a diagonal maior: ");
    scanf("%f", &diagonal_maior);
    printf("Digite a diagonal menor: ");
    scanf("%f", &diagonal_menor);

    // PROCEDIMENTO
    area = (diagonal_maior * diagonal_menor) / 2;

    // SA�DA
    printf("Area do losango: %f\n", area);

    return 0;
}

