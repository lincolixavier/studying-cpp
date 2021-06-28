#include <iostream>
using namespace std; 

struct Car {
  string name;
  string color;
  int power;
  int maxSpeed;

  void insert(string sname, string scolor, int spower, int smaxSpeed ){
    name = sname;
    color = scolor;
    power = spower;
    maxSpeed = smaxSpeed;
  }

  void show(){
    cout << "\nNome: " << name << endl;
    cout << "Cor: " << color << endl;
    cout << "Potência: " << power << endl;
    cout << "Velocidade Máxima: " << maxSpeed << endl;
  }
};

int main() { 
  Car *Cars = new Car[3];
  Cars[0].insert("Super Monza", "Red", 110, 300);
  Cars[1].insert("Chev Impala 69", "Black", 310, 400);
  Cars[2].insert("Camaro", "Amarelo", 210, 300);

  for(int i = 0; i < 3 ; i++){
    Cars[i].show();
  }

  return 0;
}  