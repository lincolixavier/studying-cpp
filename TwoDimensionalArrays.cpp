#include <iostream>

using namespace std;

int main(){

   int matrix[5][4];
   int l,c;

   for(l=0 ; l<5; l++){
      for(c=0 ; c<4; c++){
        matrix[l][c] = l;
      }
   }

   for(l=0 ; l<5; l++){
      for(c=0 ; c<4; c++){
        cout << matrix[l][c] << " ";
      }
     cout << "\n";

   }

return 0;
}