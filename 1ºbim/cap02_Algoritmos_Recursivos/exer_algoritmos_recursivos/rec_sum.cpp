#include<iostream>

/*

Programa para calcula a soma dos números naturais entre 1 e n, onde n >= 0;

*/

using std::cout;
using std::cin;
using std::endl;

int sum(int n){
    if (n == 1) 
        return 1;
    printf("Qtd de soma: %d\n", n);
    return n + sum(n-1);
}
int main(){
    int numero = 5;
    printf("Total da soma é: %d\n", sum(numero));
    return 0;
}