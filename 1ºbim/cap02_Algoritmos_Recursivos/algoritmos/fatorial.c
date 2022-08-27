#include<stdio.h>

int fatorial (int n){
    int fat=1;
    if(n == 0) return fat;
    else
        while (n>0){
            fat = fat * n;
            n--;
        }
    return fat;
}

int main(void){
    int num, numfat;
    printf("Entre com um número inteiro positivo: ");
    scanf("%d", &num);

    numfat = fatorial(num);

    printf("Fatorial de %d é: %d", num, numfat);

    return(0);
}