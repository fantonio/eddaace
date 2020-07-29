#include <iostream>

using std::cout;
using std::endl;

int main()
{
  int vet[] = {1, 2, 3, 4, 5, 6, 7};

  for (int i = 0; i < 7; i++)
  {
    cout << "O Valor do vet[" << i << "] é: " << vet[i] << endl;
  }

  return 0;
}
