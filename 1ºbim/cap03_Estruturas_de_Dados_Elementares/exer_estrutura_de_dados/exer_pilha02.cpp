#include <stack>
#include <iostream>

int main( )
{
   using namespace std;
   // Declares stacks with default deque base container
   stack <int> s1, s2;

   s1.push( 1 );
   s1.push( 2 );
   s1.push( 3 );
   s1.push( 4 );
   s1.push( 5 );
   s1.pop();

   if ( s1.empty( ) )
      cout << "The stack s1 is empty." << endl;
   else
      cout << "-> A pilha s1 não está vazia." << endl;
      printf(" # O valor contigo na pilha é: %d\n", s1.top());

   if ( s2.empty( ) )
      cout << "-> A pilha s2 está vazia." << endl;
   else
      cout << "The stack s2 is not empty." << endl;
}


