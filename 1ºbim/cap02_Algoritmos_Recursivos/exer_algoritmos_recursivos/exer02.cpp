#include <iostream>

/*

Imprimir os n primeiros números naturais em ordem decrescente.

*/
#define TAM_MAX 10
using std:: cout;
using std:: cin;
using std:: endl;

int main(){
    int vetor[TAM_MAX];

    for (int i = 0; i < TAM_MAX; i++){
        vetor[i] = TAM_MAX - i;
        printf("vetor[%d] = %d\n", vetor[i]);
    }

    return 0;
}