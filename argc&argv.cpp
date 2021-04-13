#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std; 

int main(int argc, char *argv[]) { 
  if(argc > 1){
    if(!strcmp(argv[1], "sol")){
        cout << "Clube" << endl;
    } else if(!strcmp(argv[1], "chuva")){
        cout << "Casa" << endl;
    } 
  }
  cout << "Nada Foi Digitado como argumento =/" << endl;

  return 0;
}