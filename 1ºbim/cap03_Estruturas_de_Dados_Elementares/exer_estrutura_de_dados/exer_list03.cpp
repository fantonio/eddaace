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
        printf("O fatorial é: %d\n", x);
    else {
        while (x != 0){
            s1.push(x%2);
            x = x/2;
        }
        while (!s1.empty()){
            printf("O valor em Binario: %d\n", s1.top());
        }
        
    }
    return x;
}

int main( )
{
    /*
    s1.push( 5 );
    */
    int numero = 5;
    ReprBin(numero);
/*
   if ( s1.empty( ) )
      cout << "The stack s1 is empty." << endl;
   else
      cout << "-> A pilha s1 não está vazia." << endl;
      printf(" # O valor contigo na pilha é: %d\n", s1.top());

   if ( s2.empty( ) )
      cout << "-> A pilha s2 está vazia." << endl;
   else
      cout << "The stack s2 is not empty." << endl;
*/

return 0;
}
