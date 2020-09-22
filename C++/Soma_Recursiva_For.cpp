#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int sum(int n) {
    for(int n = 0; n > 0; n--){
        cout << n << endl;
    }
}

int main ()
{
    int x, resultado;
    cout << "Entre com o numero a ser somado recursivamente: ";
    cin >> x;
    resultado = sum(x);
    cout << "A recursao é: " << resultado << endl;
}