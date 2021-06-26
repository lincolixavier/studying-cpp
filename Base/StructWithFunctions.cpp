#include <iostream>
using namespace std; 

struct Car {
  string name;
  string color;
  int power;
  int maxSpeed;

  void insert(string name, string color, int power, int maxSpeed ){
    name = name;
    color = color;
    power = power;
    maxSpeed = maxSpeed;
  }

  void show(){
    cout << "Nome: " << name << endl;
    cout << "Cor: " << color << endl;
    cout << "Potência: " << power << endl;
    cout << "Velocidade Máxima: " << maxSpeed << endl;
  }
};

int main() { 
  Car Monza;

  Monza.insert("Super Monza", "Red", 110, 300);
  Monza.show();

  return 0;
}  