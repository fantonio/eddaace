#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int contador(int n){
    int aux, sum=0;
    
    for (aux=1; aux <= n; aux++)
        sum += aux;    
    return sum;
}

int main() 
{
    int x, resultado;
    cout << "Entre com o numero: ";
    cin >> x;
    resultado = contador(x);
    cout << "A recursao é: " << resultado << endl;
}