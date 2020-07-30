#include <iostream>

using std::cout;
using std::endl;

#include <string>

using std::string;

int main ()
{
  //Declara uma variavel do tipo string
  string nome = "Fabio Ferreira";

  //Exibe o conteúdo da string
  cout << "Meu nome é: " << nome << endl;

  //Declara outra variavel do tipo string
  string sobreNome;

  //Acessa substring que começa na posição 7 e tem comprimento de 8
  sobreNome = nome.substr(6, 8);

  //Exibe o conteúdo da string sobreNome
  cout << "Meu sobrenome é: " << sobreNome << endl;

  return 0;
}
