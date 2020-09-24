#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int num(int n){
    if (n == 1) cout << n << endl;
    else
    {
        cout << n << endl;
        num(n-1);
    }
    return n;
}

int main ()
{
    int x, resultado;
    cout << "Entre com o numero: ";
    cin >> x;
    resultado = num(x);
    }