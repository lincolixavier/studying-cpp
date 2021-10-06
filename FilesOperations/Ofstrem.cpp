#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ofstream file;

  file.open("C_PlusPlusFile.txt", ios::app);

  file << "Learning C++";

  file.close();

  return 0;
}