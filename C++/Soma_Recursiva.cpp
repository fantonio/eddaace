#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int sum(int n) {
    if (n ==1) return 1;
    return n + sum(n-1);
}

int main ()
{
    int x, resultado;
    cout << "Entre com o numero a ser somado recursivamente: ";
    cin >> x;
    resultado = sum(x);
    cout << "A recursao é: " << resultado << endl;
}