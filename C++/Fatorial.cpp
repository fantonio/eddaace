#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int fat(int n){
    if (n == 0 || n ==1) return 1;
    return n*fat(n-1);
}

int main ()
{
    int x, resultado;
    cout << "Entre com o numero fatorial: ";
    cin >> x;
    resultado = fat(x);
    cout << "O fatorial é: " << resultado << endl;
}