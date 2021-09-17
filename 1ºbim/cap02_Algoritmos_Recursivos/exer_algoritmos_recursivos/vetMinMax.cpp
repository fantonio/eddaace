#include<iostream>
/*

Algoritmo recursivo que recebe sem ordenar o vetor descobre o maior e menor elemento.

*/

using std::cout;
using std::cin;
using std::endl;

int vetMinMax(int *vet, int tam, int *menor, int *maior)
{
    int i;
    *menor = *vet;
    *maior = *vet;
    for(i = 1; i < tam; i++)
    {
        if(*menor > *(vet + i))
            *menor = *(vet + i);
        if(*maior < *(vet + i))
            *maior = *(vet + i);
    }
    return 0;
}
    
int main()
{
    int menor, maior, v[10] = {4, 7, 2, 12, 28, 9, 8, 17, 87, 29};

    /*printf("Menor: %d\tMaior: %d\n", menor, maior);*/
    vetMinMax(v, 10, &menor, &maior);
    printf("Menor: %d\tMaior: %d\n", menor, maior);
    return 0; 
}