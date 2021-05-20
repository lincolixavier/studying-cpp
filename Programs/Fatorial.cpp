
#include <iostream>
using namespace std;

int Fatorial(int n);

int main() {
  int value = 8;

  cout << "Fatorial de " << value << ": " << Fatorial(value) << "\n";
  return 0;
}

int Fatorial(int n){
  if(n == 0){
    return 1;
  }
  return n*Fatorial(n-1);
  
}