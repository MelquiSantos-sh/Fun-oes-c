#include <stdio.h>
 
/* Função que recebe base e altura e retorna a área do retângulo */
float area_retangulo(float base, float altura) {
    return base * altura;
}
 
int main() {
    float base, altura, area;
 
    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);
 
    /* Chama a função passando base e altura por valor */
    area = area_retangulo(base, altura);
 
    printf("Area do retangulo = %.2f\n", area);
 
    return 0;
}
 
