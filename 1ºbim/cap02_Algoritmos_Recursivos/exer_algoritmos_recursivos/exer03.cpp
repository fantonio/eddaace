#include <iostream>

/*

Encontrar o valor máximo presente em um vetor.

*/

using std::cout;
using std::cin;
using std::endl;

int main(){

    int vet[10] = {10, 78, 12, 15, 29, 18, 21, 30, 50, 19};
    int maior = vet[0];

    for(int i = 0; i < 10; i++){
        if (vet[i] > maior)
            maior = vet[i];
    }

    printf("O maior elemento é %d\n", maior);

    return 0;
}
