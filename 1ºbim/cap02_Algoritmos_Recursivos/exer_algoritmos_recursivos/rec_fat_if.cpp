#include<iostream>

/*
Programa para calcula o fatorial de um número natural n, utilizando if;
*/

using std::cout;
using std::cin;
using std::endl;

int fat(int n){
    if (n == 0 || n == 1) return 1;
        printf("Valo de Fat: %d\n", n);
    return n*fat(n-1);
}
int main(){
    int numero = 5;
    printf("O fatorial de N é: %d\n", fat(numero));
    return 0;
}