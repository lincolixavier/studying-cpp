#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<string> produtos = {"Item 01", "Item 02", "Item 03", "Item 04"};
  vector<string>::iterator iterator1;
  vector<string>::iterator iterator2;
  vector<string>::iterator iterator3;

  iterator1 = produtos.begin();
  iterator2 = produtos.end();

  advance(iterator1, 3);

  cout << *iterator1 << endl;
  cout << *next(iterator2, 2) << endl;
  cout << *prev(iterator3, 1) << endl;

  for (iterator1 = produtos.begin(); iterator1 != produtos.end(); iterator1++)
  {
    cout << *iterator1 << endl;
  }

  return 0;
}