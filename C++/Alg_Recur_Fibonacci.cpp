#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int Fib(int n){
    if (n == 0 || n == 1) return 1;
    return Fib(n-1) + Fib(n-2);
}

int main ()
{
    int x, TermFib;
    cout << "Entre com o termo desejado: ";
    cin >> x;
    TermFib = Fib(x);
    cout << "O valor do termo é: " << TermFib << endl;
}