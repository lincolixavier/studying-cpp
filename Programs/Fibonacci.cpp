#include <iostream>
using namespace std;

int Fibonacci(int n);

int main()
{
  int value = 15;
  for (int i = 0; i < value; i++)
  {
    cout << Fibonacci(i + 1) << "\n";
  }
  return 0;
}

int Fibonacci(int n)
{
  if (n == 1 || n == 2)
  {
    return 1;
  }
  else
  {
    return Fibonacci(n - 1) + Fibonacci(n - 2);
  }
}