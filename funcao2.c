#include <stdio.h>
 
/* Função que recebe os coeficientes a, b, c e retorna o número de raízes */
int num_raizes(float a, float b, float c) {
    float delta;
 
    /* Calcula o discriminante (delta = b² - 4ac) */
    delta = b * b - 4 * a * c;
 
    if (delta > 0) {
        return 2; /* duas raízes distintas */
    } else if (delta == 0) {
        return 1; /* raízes iguais */
    } else {
        return 0; /* sem raízes reais */
    }
}
 
int main() {
    float a, b, c;
    int raizes;
 
    printf("Equacao do 2o grau: ax2 + bx + c = 0\n");
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
 
    /* Chama a função passando os coeficientes por valor */
    raizes = num_raizes(a, b, c);
 
    printf("Numero de raizes reais: %d\n", raizes);
 
    return 0;
}
 
