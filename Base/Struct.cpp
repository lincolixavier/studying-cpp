#include <iostream>
using namespace std; 

struct Car {
  string name;
  string color;
  int power;
  int maxSpeed;
};

int main() { 
  Car Monza;
  Car Gol;

  Monza.name = "Chevrolet Monza";
  Monza.color = "Green";
  Monza.maxSpeed = 190;
  Monza.power = 120;

  Gol.name = "Gol ZLS";
  Gol.color = "White";
  Gol.maxSpeed = 200;
  Gol.power = 150;

  cout << "Name: " << Monza.name << endl;
  cout << "Color: " << Monza.color << endl;
  cout << "Name: " << Gol.name << endl;
  cout << "Color: " << Gol.color << endl;

  return 0;
}  