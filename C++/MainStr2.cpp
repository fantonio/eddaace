#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
  //Declaração de Váriaveis
  string nome;
  string sobreNome;
  string letra1;

  cout << "Entre com o seu nome: ";
  cin >> nome;

  cout << "Entre com o seu sobrenome: ";
  cin >> sobreNome;

  letra1 = sobreNome.substr(0,1);

  cout << "O seu Nome é: " << nome << endl;
  cout << "O seu SobreNome é: " << sobreNome << endl;
  cout << "A primeira letra do seu sobrenome é: " << letra1 << endl;

  return 0;

}
