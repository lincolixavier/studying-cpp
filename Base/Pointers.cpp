#include <iostream>

using namespace std;

int main(){

  string car = "Car";
  string *pointerCar;

  pointerCar = &car;

  cout << pointerCar << endl;
  cout << car << endl;

  *pointerCar = "Motocycle";

  cout << *pointerCar << endl;
  cout << car;

  return 0;

}