#include<iostream>

/*

Programa para calcula o fatorial de um número natural n, utilizando while;

*/

using std::cout;
using std::cin;
using std::endl;

int fat(int n){
    int f = 1;
    while (n > 0)
        f *= n--;
        printf("Valo de Fat: %d\n", f);
    return f;
}
int main(){
    int numero = 5;
    printf("O fatorial de N é: %d\n", fat(numero));
    return 0;
}