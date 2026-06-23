#include <stdio.h>
 
#define PI 3.14159
 
/* ---- Funções de área (questões 3, 4 e 5) ---- */
 
/* Área da circunferência: π × r² */
float area_circunferencia(float raio) {
    return PI * raio * raio;
}
 
/* Área do retângulo: base × altura */
float area_retangulo(float base, float altura) {
    return base * altura;
}
 
/* Área do triângulo: (base × altura) / 2 */
float area_triangulo(float base, float altura) {
    return (base * altura) / 2;
}
 
/* ---- Programa principal ---- */
 
int main() {
    int opcao;
    float base, altura, raio, area;
 
    /* Exibe o menu de opções */
    printf("=============================\n");
    printf("   CALCULADORA DE AREAS\n");
    printf("=============================\n");
    printf("1 - Circunferencia\n");
    printf("2 - Retangulo\n");
    printf("3 - Triangulo\n");
    printf("=============================\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
 
    /* Executa a opção escolhida */
    switch (opcao) {
 
        case 1: /* Circunferência */
            printf("Digite o raio: ");
            scanf("%f", &raio);
            area = area_circunferencia(raio); /* chama a função da q3 */
            printf("Area da circunferencia = %.2f\n", area);
            break;
 
        case 2: /* Retângulo */
            printf("Digite a base: ");
            scanf("%f", &base);
            printf("Digite a altura: ");
            scanf("%f", &altura);
            area = area_retangulo(base, altura); /* chama a função da q4 */
            printf("Area do retangulo = %.2f\n", area);
            break;
 
        case 3: /* Triângulo */
            printf("Digite a base: ");
            scanf("%f", &base);
            printf("Digite a altura: ");
            scanf("%f", &altura);
            area = area_triangulo(base, altura); /* chama a função da q5 */
            printf("Area do triangulo = %.2f\n", area);
            break;
 
        default: /* Opção inválida */
            printf("Opcao invalida!\n");
            break;
    }
 
    return 0;
}
 
