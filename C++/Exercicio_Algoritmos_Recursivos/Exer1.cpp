#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int num(int n){
    int nx;
    if (n == 1) cout << n << endl;
    else
    {
        num(n-1);
        cout << n << endl;
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