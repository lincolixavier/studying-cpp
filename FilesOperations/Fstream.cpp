#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
  fstream file;
  char option = 'yes';
  string name;
  string line;

  file.open("text.txt", ios::out);

  while ((option == 'yes') or (option == 'YES'))
  {
    cout << "Digite um nome";
    cin >> name;
    file << name << '\n';
    cout << "Digite um novo nome?[yes/no]";
    cin >> option;
  }
  file.close();

  file.open("file.txt", ios::in);

  if (file.is_open())
  {
    while (getline(file, line))
    {
      cout << line << endl;
    }
    file.close();
    return 0;
  }

  return 0;
}