#include <iostream>

using namespace std;

int main()
{

   int vetor[5] = {10, 20, 30, 40, 50}; //Cada vetor inteiro "int" tem um valor de 4 bytes, no entanto
                                        //dependendo do SO cada posição pode ter um tamanho maior que 4 bytes
   int i;

   for (i = 0; i < sizeof(vetor) / sizeof(vetor[0]); i++)
   {
      cout << vetor[i] << "\n";
   }

   return 0;
}