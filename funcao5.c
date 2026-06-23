#include <stdio.h>
 
/* Função que recebe base e altura e retorna a área do triângulo */
float area_triangulo(float base, float altura) {
    return (base * altura) / 2;
}
 
int main() {
    float base, altura, area;
 
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);
 
    /* Chama a função passando base e altura por valor */
    area = area_triangulo(base, altura);
 
    printf("Area do triangulo = %.2f\n", area);
 
    return 0;
}
 
