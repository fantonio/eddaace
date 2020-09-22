#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int fat(int n){
    int f = 1;
    while (n > 0)
        f *= n--;
    return f;
}

int main ()
{
    int x, resultado;
    cout << "Entre com o numero fatorial: ";
    cin >> x;
    resultado = fat(x);
    cout << "O fatorial é: " << resultado << endl;
}