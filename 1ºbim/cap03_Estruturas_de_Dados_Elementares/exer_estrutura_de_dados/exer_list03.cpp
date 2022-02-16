#include<iostream>
#include<stack>

/* Utilizando as funcionalidades de uma pilha ( top , push , pop e isEmpty ), escreva um algo-
ritmo que leia um número inteiro positivo e imprima a sua correspondente representação binária.*/

using std::cout;
using std::cin;
using std::endl;
using namespace std;

// Declares stacks with default deque base container
stack <int> s1;



int ReprBin (int x){
    
    if (x == 0)
        printf("O valor em binário é: %d\n", x);
    else {
        while (x != 0){
            s1.push(x%2);
            printf(" [+] Valor no topo da pilha: %d\n", s1.top());
            x = x/2;
        }
        while (!s1.empty()){
            s1.pop();
            printf(" [-] Removendo da Pilha: %d\n", s1.top());

        }
        
    }
return 0;
}

int main( )
{
    int numero = 10;
    ReprBin(numero);
return 0;
}
