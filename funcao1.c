#include <stdio.h>

#define PI 3.14159

/* Exercicio 1 */
int soma_naturais(int n) {
    int i, soma = 0;
    for (i = 1; i <= n; i++) {
        soma = soma + i;
    }
    return soma;
}

/* Exercicio 2 */
int raizes_polinomio(float a, float b, float c) {
    float delta;
    delta = b*b - 4*a*c;
    if (delta > 0)
        return 2;
    else if (delta == 0)
        return 1;
    else
        return 0;
}

/* Exercicio 3 */
float area_circulo(float raio) {
    float area;
    area = PI * raio * raio;
    return area;
}

/* Exercicio 4 */
float area_retangulo(float base, float altura) {
    float area;
    area = base * altura;
    return area;
}

/* Exercicio 5 */
float area_triangulo(float base, float altura) {
    float area;
    area = (base * altura) / 2;
    return area;
}

/* Exercicio 6 */
int main() {
    int op;
    int n, raizes;
    float a, b, c;
    float raio, base, altura, area;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Soma dos N primeiros numeros naturais\n");
        printf("2 - Raizes de polinomio de 2o grau\n");
        printf("3 - Area de circunferencia\n");
        printf("4 - Area de retangulo\n");
        printf("5 - Area de triangulo\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);

        if (op == 1) {

            printf("Digite o valor de N: ");
            scanf("%d", &n);

            /* VALIDAÇÃO */
            if (n <= 0) {
                printf("Erro: N deve ser maior que zero.\n");
            } else {
                printf("Soma = %d\n", soma_naturais(n));
            }

        } else if (op == 2) {

            printf("Digite o coeficiente a: ");
            scanf("%f", &a);

            /* VALIDAÇÃO */
            if (a == 0) {
                printf("Nao e uma equacao do segundo grau.\n");
            } else {

                printf("Digite o coeficiente b: ");
                scanf("%f", &b);

                printf("Digite o coeficiente c: ");
                scanf("%f", &c);

                raizes = raizes_polinomio(a, b, c);

                if (raizes == 2)
                    printf("O polinomio possui 2 raizes reais distintas.\n");
                else if (raizes == 1)
                    printf("O polinomio possui raizes reais iguais.\n");
                else
                    printf("O polinomio nao possui raizes reais.\n");
            }

        } else if (op == 3) {

            printf("Digite o raio: ");
            scanf("%f", &raio);

            /* VALIDAÇÃO */
            if (raio <= 0) {
                printf("Erro: raio deve ser maior que zero.\n");
            } else {
                area = area_circulo(raio);
                printf("Area da circunferencia = %.2f\n", area);
            }

        } else if (op == 4) {

            printf("Digite a base: ");
            scanf("%f", &base);

            printf("Digite a altura: ");
            scanf("%f", &altura);

            /* VALIDAÇÃO */
            if (base <= 0 || altura <= 0) {
                printf("Erro: base e altura devem ser maiores que zero.\n");
            } else {
                area = area_retangulo(base, altura);
                printf("Area do retangulo = %.2f\n", area);
            }

        } else if (op == 5) {

            printf("Digite a base: ");
            scanf("%f", &base);

            printf("Digite a altura: ");
            scanf("%f", &altura);

            /* VALIDAÇÃO */
            if (base <= 0 || altura <= 0) {
                printf("Erro: base e altura devem ser maiores que zero.\n");
            } else {
                area = area_triangulo(base, altura);
                printf("Area do triangulo = %.2f\n", area);
            }

        } else if (op == 0) {
            printf("Encerrando...\n");

        } else {
            printf("Opcao invalida!\n");
        }

    } while (op != 0);

    return 0;
}