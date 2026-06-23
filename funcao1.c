#include <stdio.h>
 
/* Função que recebe n e retorna a soma 1+2+...+n */
int soma_naturais(int n) {
    int i;
    int soma = 0;
 
    /* Percorre de 1 até n somando cada número */
    for (i = 1; i <= n; i++) {
        soma = soma + i;
    }
 
    return soma; /* retorna o resultado */
}
 
int main() {
    int n, resultado;
 
    printf("Digite o valor de n: ");
    scanf("%d", &n);
 
    /* Chama a função e armazena o retorno */
    resultado = soma_naturais(n);
 
    printf("Soma dos %d primeiros naturais = %d\n", n, resultado);
 
    return 0;
}
 
