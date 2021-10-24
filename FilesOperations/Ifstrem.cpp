#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ofstream file;

  file.open("C_PlusPlusFile.txt", ios::app);

  file << "Learning C++";

  file.close();

  ifstream fileRead;
  string line;

  fileRead.open("C_PlusPlusFile.txt");

  if (fileRead.is_open())
  {
    while (getline(fileRead, line))
    {
      cout << line << endl;
    }
    fileRead.close();
    return 0;
  }
  cout << "Não foi possível ler o arquivo";

  return 0;
}