#include <stdio.h>
#include "funcoes.h"
#define TAM 10

int main() {

    int n, a = 4, b = 6;
    int vetor[TAM] = {1, 23, 43, 5, 6, 76, 32, 122, 54, 2};

    scanf("%d", &n);

    if(divisivel(n))
        printf("%d eh divisivel por 5 e 11\n", n);
    else
        printf("%d nao eh divisivel por 5 e 11\n", n);
    
    printf("a soma de 1 a N eh igual a: %.0f\n", somatorio(n));

    printf("o maior numero do vetor eh: %d\n", maior(&vetor[0], TAM));

    printf("intervalo de 32 a 46:\n");
    intervalo(32, 46);
    printf("\n");

    printf("antes da troca: a = %d e b = %d\n", a, b);
    troca(&a, &b);
    printf("depois da troca: a = %d e b = %d\n", a, b);

    return 0;
}