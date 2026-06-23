#include <stdio.h>
 
#define PI 3.14159 /* constante PI */
 
/* Função que recebe o raio e retorna a área da circunferência */
float area_circunferencia(float raio) {
    return PI * raio * raio;
}
 
int main() {
    float raio, area;
 
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);
 
    /* Chama a função passando o raio por valor */
    area = area_circunferencia(raio);
 
    printf("Area da circunferencia = %.2f\n", area);
 
    return 0;
}
