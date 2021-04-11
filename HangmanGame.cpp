#include <iostream>
using namespace std; 
// g++ HangmanGame.cpp && ./a.out
int main() { 
  string head = "O", spine = "|", memberLeft = "\\", membeRight = "/";
  char myName[8] = "Violeta";
  char tries[8] = "_______" ;
  char tryLetter;

  int errors = 0;
  cout << "Jogo da Forca\n\n";
  cout << "_ _ _ _ _ _ _ \n\n";
  cout << "Dica: Cor \n\n";
  letra:
  cout << "Tente uma letra:\n";
  cin >> tryLetter;

  for(int i=0; i<=8; i++){
    if(tryLetter == myName[i] ){
      tries[i] = tryLetter;
      cout << "UHUUUU \n\n";
      cout << tries <<"\n";
      goto letra;
    } else{
      errors++;
      if(errors == 1){
          cout << "Errrouuu \n\n";
          cout << " " << head << endl;
          goto letra;

      }
      else if(errors == 2){
          cout << "Errrouuu \n\n";
          cout << " " << head << endl;
          cout << " " << spine << endl;
          goto letra;

      }
      else if(errors == 3){
          cout << "Errrouuu \n\n";
          cout << "  " << head << endl;
          cout << " " << membeRight << spine  << endl;
          goto letra;
      }
      else if(errors == 4){
          cout << "Errrouuu \n\n";
          cout << "  " << head << endl;
          cout << " " << membeRight << spine  << endl;
          cout << " " << membeRight << endl;
          goto letra;

      }
    }
  }

  return 0;
}
