#include <iostream>
using namespace std;

int number = 1; // Global Variables
int number2 = 12;

int main()
{
  // + - / * %
  int sum = number + number2; // Local Variables
  int div = number / number2;
  int mul = number * number2;
  int sub = number - number2;
  int mod = number % number2;

  cout << mod << "\n";

  return 0;
}