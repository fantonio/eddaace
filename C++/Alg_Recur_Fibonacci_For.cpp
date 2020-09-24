#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int Fib(int n){
    int f1=1, f2=1, f3;
    if (n == 0 || n == 1) return 1;
    for (int i=2; i<=n; i++){
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;

    }
    return f3;
}

int main ()
{
    int x, TermFib;
    cout << "Entre com o termo desejado: ";
    cin >> x;
    TermFib = Fib(x);
    cout << "O valor do termo é: " << TermFib << endl;
}