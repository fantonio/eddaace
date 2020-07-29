#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int Mult(int a, int b)
{
  return (a * b);
}

int main()
{
  int x, y, result;

  cout << "Entre com o primeiro numero: ";
  cin >> x;
  cout << "Entre com o segundo numero: ";
  cin >> y;
  result = Mult(x, y);
  cout << "O resultado da multiplicação é: " << result << endl;
}
