#include <iostream>

using std::cout;
using std::endl;

int main()
{
  int a;
  int b;
  int c;
  int *aPtr;

  a = 30;
  b = 10;
  c = 7;
  aPtr = &a;

  cout << "O valor de a é: " << a << endl;
  cout << "O valor de b é: " << b << endl;
  cout << "O valor de c é: " << c << endl;
  cout << "O valor do Ponteiro é: " << *aPtr << endl;

  return 0;
}
