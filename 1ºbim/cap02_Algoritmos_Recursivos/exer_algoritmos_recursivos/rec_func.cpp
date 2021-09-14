#include<iostream>
/*

Algoritmo recursivo que recebe apenas um número inteiro x como parametro e retorna a soma dos seus digitos.

*/

using std::cout;
using std::cin;
using std::endl;


int soma(int numero){
    if (numero % 10 == numero)
        return numero;
    return ((numero % 10) + soma(numero / 10));
}

int main(){
    int numero = 46607;
    printf("%d\n", soma(numero));
    return 0; 
}