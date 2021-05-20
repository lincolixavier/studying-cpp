
#include <iostream>
#include <iomanip> 
using namespace std; 
int main(){

  float sum = 0.00;
  int index = 4;
  if(3 == 0){
    cout << "0.00";
  } 
  else {
    for(int i=0; i<=3; i++){
      float div = (1.00)/index;
      cout << div << " << \n";
      index+=3;
    }
    cout << " To String: " << to_string(sum+1) << " UUU \n";
  }
  return 0;
}