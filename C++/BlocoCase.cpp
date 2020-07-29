#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void funOne()
{
  cout << "Welcome to the First function!!!" << endl;
}
void funTwo()
{
  cout << "Welcome to the Second function!!!" << endl;
}
void funThree()
{
  cout << "Welcome to the Third function!!!" << endl;
}
int main()
{
  int num = 0;

  cout << "Lista de Opções: " << endl << "(1) Função Numero 1" << endl << "(2) Função Numero 2" << endl << "(3) Função Numero 3" << endl;
  cout << "Entre com a opção desejada: ";
  cin >> num;

  switch(num){
    case 1:
      funOne();
      break;
    case 2:
      funTwo();
      break;
    case 3:
      funThree();
      break;
  }

  return 0;
}
