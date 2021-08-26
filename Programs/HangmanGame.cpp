#include <iostream>
using namespace std;
// g++ HangmanGame.cpp && ./a.out
int main()
{
  string head = "O", spine = "|", memberLeft = "\\", membeRight = "/";
  string myWord = "Violeta";
  string tries = "_______";
  char tryLetter;

  int errors = 0;
  int hits = 0;
  bool hit = false;
  cout << "Jogo da Forca\n\n";
  cout << "|---\n";
  cout << "|\n";
  cout << "|     _ _ _ _ _ _ _ \n\n";

  cout << "Dica: Cor \n\n";

  while ((errors < 6) && (hits < myWord.size()))
  {
    cout << tries << "\n";
    cout << "Tente uma letra:\n";
    cin >> tryLetter;

    for (int i = 0; i < 8; i++)
    {
      if (tryLetter == myWord[i])
      {
        tries[i] = tryLetter;
        hits++;
        hit = true;
        cout << "UHUU \n\n";
      }
    }
    if (!hit)
    {
      errors++;
    }
    switch (errors)
    {
    case 1:
      cout << "Errrouuu \n\n";
      cout << " " << head << endl;
      break;
    case 2:
      cout << "Errrouuu \n\n";
      cout << " " << head << endl;
      cout << " " << spine << endl;
      break;
    case 3:
      cout << "Errrouuu \n\n";
      cout << "  " << head << endl;
      cout << " " << membeRight << spine << endl;
      break;
    case 4:
      cout << "Errrouuu \n\n";
      cout << "  " << head << endl;
      cout << " " << membeRight << spine << memberLeft << endl;
      break;
    case 5:
      cout << "Errrouuu \n\n";
      cout << "  " << head << endl;
      cout << " " << membeRight << spine << memberLeft << endl;
      cout << " " << membeRight << endl;
      break;
    case 6:
      cout << "Errrouuu \n\n";
      cout << "  " << head << endl;
      cout << " " << membeRight << spine << memberLeft << endl;
      cout << " " << membeRight << " " << memberLeft << endl;
      break;
    }
  }
  if (errors == 6)
  {
    cout << "Enforcado! \n\n";
  }
  else if (myWord == tries)
  {
    cout << "Você venceu! \n\n";
  }
  return 0;
}
