#include<stdio.h>

char divisivel(int n) {

    if ((n % 5 == 0) && (n % 11 == 0))
        return 1;
    else
        return 0;
}

double somatorio(int n) {
    
    double soma = 0;

    for(n; n > 0; n--)
        soma += n;
    
    return soma;
}

int maior(int * v, int vsize) {

    int i, j, maior = *v;

    for(i = 1; i < vsize; i++) {
        if(*(v + i) > maior)
            maior = *(v + i);
    }

    return maior;
}

void intervalo(int i, int f) {
    
    if(i > f)
        printf("erro: inicio deve ser menor que o final\n");

    else if (i == f)
        printf("%d ", i);
    else {

        intervalo(i, f - 1);
        printf("%d ", f);
    }
}

void troca(int * p, int * q) {

    int cache = *p;
    *p = *q;
    *q = cache;
}