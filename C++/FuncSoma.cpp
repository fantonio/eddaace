#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int Soma(int a, int b)
{
  return(a + b);
}
int main()
{
  int x, y, resultado;
  cout << "Entre com o primeiro numero: ";
  cin >> x;
  cout << "Entre com o segundo numero: ";
  cin >> y;
  resultado = Soma(x, y);
  cout << "O resultado da soma é: " << resultado << endl;
}
