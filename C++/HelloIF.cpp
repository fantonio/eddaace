#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  int number1;
  int number2;

  cout << "Enter two integers to compare: ";
  cin >> number1 >> number2;

  if (number1 == number2)
    cout << number1 << " == " << number2 << endl;

  if (number1 != number2)
    cout << number1 << " != " << number2 << endl;

  if (number1 < number2)
    cout << number1 << " < " << number2 << endl;

  if (number1 > number2)
    cout << number1 << " > " << number2 << endl;

  if (number1 <= number2)
    cout << number1 << " <= " << number2 << endl;

  if (number1 >= number2)
    cout << number1 << " >= " << number2 << endl;

  return 0;

}
